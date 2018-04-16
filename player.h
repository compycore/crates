struct Player: Car
{
	// List<Skid, 5> skids; // skid count * everyXFrame (below) should be skid ttl
	bool hasCrate = false;

	Player()
	{
		angle = random(360);
		x = random(LEVEL_WIDTH), y = random(LEVEL_HEIGHT);
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};
		frameCount = ANGLES - 1;
		health = 20;
		type = 'P';
	}

	void control()
	{
		if (health)
		{
			if (speed > turnSpeed)
			{
				if (arduboy.pressed(LEFT_BUTTON))
				{
					angle += turnRate;
				}
				else if (arduboy.pressed(RIGHT_BUTTON))
				{
					angle -= turnRate;
				}
			}

			// the arduboy has its butons flipped in my opinion
			if (arduboy.pressed(B_BUTTON))
			{
				accelerate();
			}
			else if (arduboy.pressed(A_BUTTON))
			{
				decelerate();
			}
		}
	}

	bool callback(char type, uint8_t damage)
	{
		if (type == 'E')   // normal police
		{
			if (health > damage)
			{
				health -= damage;
			}
			else
			{
				// TODO game over condition
				health = 0;
				speed = 0;
				dust.add(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
			}

			return false;
		}
		else if (type == 'C')
		{
			hasCrate = true;
			SCORE += 5;
			return true; // delete the crate
		}
		else if (type == 'D')
		{
			hasCrate = false;
			SCORE += 10;
			return true; // delete the drop point
		}

		return false;
	}

	void update()
	{
		control();
		physics();
		updateCbox();
		updateAngle();

		/*
		// generate more skids
		if (arduboy.pressed(A_BUTTON) && speed > 0)
		{
		    if (arduboy.everyXFrames(2))
		    {
		        if (!skids.full())
		        {
		            skids.add(Skid(x, y, curFrame));
		        }
		    }
		}
		*/
	}

	void draw()
	{
		/*
		// handle skids
		for (uint8_t i = 0; i < skids.size(); i++)
		{
		    if (skids[i].ttl > 0)
		    {
		        skids[i].update();
		        skids[i].draw();
		    }
		    else
		    {
		        skids.erase(i);
		        i--;
		    }
		}
		*/

		if (health)
		{
			// TODO add flashing for when we get hit by an enemy
			arduboy.fillRect(int16_t(x - camera.x + 4), int16_t(y - camera.y + 4), width - 8, height - 7, BLACK); // ghetto mask
			sketch(PLAYER, curFrame);
		}
	}
};
