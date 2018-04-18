#include "globals.h"

void setup()
{
	arduboy.boot(); // raw hardware
	arduboy.safeMode(); // light the RGB LED and screen if UP button is being held.
	arduboy.audio.begin();
}

void loop()
{
	// arduboy.setCursor(0,0);

	// arduboy setup for each frame
	if (!(arduboy.nextFrame())) return;
	arduboy.pollButtons();

	if (!(compycore.introduce())) return; // draw the intro logo if we haven't finished that already

	if (!(menu.show())) return; // show the menu if we haven't already picked an option

	drawGrid();

	if (!player.hasCrate) {
		crate.update();
		crate.draw();
		drawLocator(crate.x, crate.y, crate.width, crate.height, 2, false);
	} else {
		drop.update();
		drop.draw();
		drawLocator(drop.x, drop.y, drop.width, drop.height, 2, false);
	}

	player.update();
	player.draw();

	camera.follow(player.x+player.width/2, player.y+player.height/2, 54, 27); // make the camera follow the player

	if (player.collide(crate.type, 0, crate.cbox))
	{
		// TODO make this more exciting for the player
		drop = Drop(); // move the drop to a new spot
	}

	if (player.collide(drop.type, 0, drop.cbox))
	{
		// TODO make this more exciting for the player
		crate = Crate(); // move the crate to a new spot
	}

	// increase the score just for surviving
	if (player.health && arduboy.everyXFrames(60))
	{
		SCORE++;
	}

	// handle dust
	for (uint8_t i = 0; i < dust.size(); i++)
	{
		if (dust[i].ttl)
		{
			dust[i].update();
			dust[i].draw();
		}
		else
		{
			dust.erase(i);
			i--;
		}
	}

	// TODO spawn cops randomly or based on player performance
	if (!cops.full()) {
		cops.add(Cop());
	}

	// handle cops
	for (uint8_t i = 0; i < cops.size(); i++)
	{
		// TODO maybe do this inside the cop class...?
		// erase cops if they have no health
		if (cops[i].health == 0) {
			if (player.health) {
				SCORE += 3; // award the player for destroying a cop
			}

			dust.add(Dust(cops[i].x + cops[i].width / 2 - 4, cops[i].y + cops[i].height / 2 - 4, cops[i].angle, cops[i].speed / 2));
			cops.erase(i);
			i--;
			continue;
		}

		cops[i].update();
		cops[i].draw();

		uint8_t locatorRadius = 150/distanceBetween(player.x, player.y, cops[i].x, cops[i].y);
		drawLocator(cops[i].x, cops[i].y, cops[i].width, cops[i].height, locatorRadius);

		// only collide with the player if it still exists
		if (player.health) {
			player.collide(cops[i].type, cops[i].damage, cops[i].cbox);
		}

		cops[i].follow(player.x, player.y);

		for (uint8_t j = 0; j < cops.size(); j++)
		{
			if (j != i) {
				cops[i].collide(cops[j].type, cops[j].damage, cops[j].cbox);
			}
		}
	}

	drawNumber(2, 2, SCORE);

	if (player.health == 0) {
		busted.gameOver();
	}

	arduboy.display(CLEAR_BUFFER); // draw everything to the screen
}
