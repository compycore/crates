#include "globals.h"

void setup()
{
	arduboy.boot(); // raw hardware
	arduboy.safeMode(); // light the RGB LED and screen if UP button is being held.
	arduboy.audio.begin();
}

void loop()
{
	// arduboy setup for each frame
	if (!(arduboy.nextFrame())) return;
	arduboy.pollButtons();

	if (!(compycore.introduce())) return; // draw the intro logo if we haven't finished that already

	if (!(menu.show())) return; // show the menu if we haven't already picked an option

	drawGrid();

	if (!player.hasCrate) {
		crate.update();
		crate.draw();
		drawLocator(crate, 2, false);
	} else {
		drop.update();
		drop.draw();
		drawLocator(drop, 2, false);
	}

	player.update();
	player.draw();

	camera.follow(player.x+player.width/2, player.y+player.height/2, 54, 27); // make the camera follow the player

	if (collide(player.cbox, crate.cbox) && player.callback(crate))
	{
		// TODO make this more exciting for the player
		drop = Drop(); // move the drop to a new spot
	}

	if (collide(player.cbox, drop.cbox) && player.callback(drop))
	{
		// TODO make this more exciting for the player
		crate = Crate(); // move the crate to a new spot
	}

	// increase the score just for surviving
	if (arduboy.everyXFrames(60))
	{
		player.increaseScore(1);
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

	// handle spikes
	for (uint8_t i = 0; i < spikes.size(); i++)
	{
		// delete the spike if the player collides with it
		// TODO make the player react to hitting a spike
		if (collide(player.cbox, spikes[i].cbox) && player.callback(spikes[i])) {
			spikes.erase(i);
			i--;
			continue;
		}

		spikes[i].update();
		spikes[i].draw();
	}

	// TODO spawn cops randomly or based on player performance
	if (!cops.full()) cops.add(Cop());

	// handle cops
	for (uint8_t i = 0; i < cops.size(); i++)
	{
		// check for collisions with other cops
		for (uint8_t j = 0; j < cops.size(); j++)
		{
			if (j != i) {
				if (collide(cops[i].cbox, cops[j].cbox)) {
					if (cops[i].callback(cops[j])) {
						if (!dust.full()) dust.add(Dust(cops[i].x + cops[i].width / 2 - 4, cops[i].y + cops[i].height / 2 - 4, cops[i].angle, cops[i].speed / 2)); // generate a dust cloud
						player.increaseScore(3); // award the player for destroying a cop
						cops.erase(i);
						i--;
						continue;
					} else {
						separate(cops[i], cops[j]);
					}
				}
			}
		}

		// only collide with the player if it still exists
		if (player.health) {
			if (collide(player.cbox, cops[i].cbox)) player.callback(cops[i]);
		}

		cops[i].update();
		cops[i].draw();
		cops[i].follow(player.x, player.y);

		// the magic number here represents the distance at which the indicator starts to grow
		uint8_t locatorRadius = 200 / distanceBetween(player.x, player.y, cops[i].x, cops[i].y);
		drawLocator(cops[i], locatorRadius);
	}

	drawNumber(2, 2, SCORE);

	if (player.health == 0) {
		busted.gameOver();
	}

	arduboy.display(CLEAR_BUFFER); // draw everything to the screen
}
