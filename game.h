typedef struct Game
{
	bool play() {
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

		if (!player.hasCrate && collide(player.cbox, crate.cbox) && player.callback(crate))
		{
			// TODO make this more exciting for the player
			drop = Drop(randomPointOffCamera(LEVEL_SIZE)); // move the drop to a new spot
		} else if (player.hasCrate && collide(player.cbox, drop.cbox) && player.callback(drop)) {
			// TODO make this more exciting for the player
			crate = Crate(randomPointOffCamera(LEVEL_SIZE)); // move the crate to a new spot
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
				if (i) i--;
			}
		}

		// handle spikes
		for (uint8_t i = 0; i < spikes.size(); i++)
		{
			// delete the spike if the player collides with it
			// TODO make the player react to hitting a spike
			if (collide(player.cbox, spikes[i].cbox) && player.callback(spikes[i])) {
				spikes.erase(i);
				if (i) i--;
				continue;
			}

			spikes[i].update();
			spikes[i].draw();
		}

		// TODO spawn cops randomly or based on player performance
		if (!cops.full()) cops.add(Cop(randomPointOffCamera(LEVEL_SIZE)));

		// handle cops
		for (uint8_t i = 0; i < cops.size(); i++)
		{
			// only collide with the player if it still exists
			if (player.health) {
				// if (collide(player.cbox, cops[i].cbox)) player.callback(cops[i]);
			}

			// check for collisions with other cops
			for (uint8_t j = 0; j < cops.size(); j++)
			{
				if (j != i) {
					if (collide(cops[i].cbox, cops[j].cbox)) {
						if (cops[i].callback(cops[j])) {
							if (!dust.full()) dust.add(Dust(cops[i].x + cops[i].width / 2 - 4, cops[i].y + cops[i].height / 2 - 4, cops[i].angle, cops[i].speed / 2)); // generate a dust cloud
							player.increaseScore(3); // award the player for destroying a cop
							cops.erase(i);
							break; // break instead of continuing because we don't want the nested for loops to get out of sync
						} else {
							separate(cops[i], cops[j]);
						}
					}
				}
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
			return true;
		}

		arduboy.display(CLEAR_BUFFER); // draw everything to the screen
		return false;
	}
} Game;
