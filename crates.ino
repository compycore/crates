#include "globals.h"
// #include "cactus-image.h"
// #include "cactus.h"
// #include "skid-image.h"
// #include "skid.h"

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

	// TODO spawn randomly or based on player performance
	if (!cops.full()) {
		cops.add(Cop());
	}

	drawGrid();

	crate.update();
	crate.draw();

	drop.update();
	drop.draw();

	player.update();
	player.draw();

	if (player.collide(crate.type, 0, crate.cbox))
	{
		// TODO make this more exciting for the player
		crate = Crate(); // move the crate to a new spot
	}

	if (player.collide(drop.type, 0, drop.cbox))
	{
		// TODO make this more exciting for the player
		drop = Drop(); // move the drop to a new spot
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

	// handle cop
	for (uint8_t i = 0; i < cops.size(); i++)
	{
		// TODO maybe do this inside the cop class...?
		// erase cops if they have no health
		if (cops[i].health == 0) {
			SCORE += 3; // award the player for destroying a cop
			dust.add(Dust(cops[i].x + cops[i].width / 2 - 4, cops[i].y + cops[i].height / 2 - 4, cops[i].angle, cops[i].speed / 2));
			cops.erase(i);
			i--;
			continue;
		}

		cops[i].update();
		cops[i].draw();
		drawLocator(cops[i].x, cops[i].y, cops[i].width, cops[i].height);

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

	drawLocator(crate.x, crate.y, crate.width, crate.height, 2);
	drawLocator(drop.x, drop.y, drop.width, drop.height, 2, false);
	drawNumber(2, 2, SCORE);

	camera.follow(player.x+player.width/2, player.y+player.height/2, 54, 27); // make the camera follow the player

	if (player.health == 0) {
		busted.gameOver();
	}

	arduboy.display(CLEAR_BUFFER); // draw everything to the screen
}
