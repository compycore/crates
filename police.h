struct Police: Car
{
	bool flashing = false;

	Police()
	{
		// TODO generate anywhere off the current screen
		x = random(LEVEL_WIDTH), y = random(LEVEL_HEIGHT);
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		accel = 0.01 + (1 / (5 + random(5)));
		followTurnRate = followTurnRate + (1 / (40 + random(10)));

		frameCount = ANGLES - 1;

		type = 'E';
	}

	void follow(int X, int Y)
	{
		if (speed > turnSpeed)
		{
			int angleToTarget = findAngle(x, y, X, Y) * 57296 / 1000 + 180;
			float shortest_angle = ((((angleToTarget - int(angle)) % 360) + 540) % 360) - 180;
			angle += shortest_angle * followTurnRate;
		}
	}

	bool callback(char type, uint8_t damage)
	{
		if (type == 'E') // only take damage from other cops
		{
			if (health > damage)
			{
				health -= damage;
				return false;
			}

			health = 0;
			return true; // delete if the cop has taken all the damage it can
		}
	}

	void update()
	{
		physics();
		updateCbox();
		updateAngle();
		accelerate();

		/*
		// generate more dust
		if (random(100) < 2 && speed > 0)
		{
		    if (!dust.full())
		    {
		        dust.add(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
		    }
		}
		*/
	}

	void draw()
	{
		/*
		// handle dust
		for (uint8_t i = 0; i < dust.size(); i++)
		{
		    if (dust[i].ttl > 0)
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
		*/

		arduboy.fillRect((int16_t) (x - camera.x + 4), (int16_t) (y - camera.y + 4), width - 8, height - 7, BLACK);
		sketch(POLICE, curFrame);

		// flash the lights
		if (arduboy.everyXFrames(10))
		{
			flashing = !flashing;
		}

		if (flashing)
		{
			arduboy.fillRect(x - camera.x + width / 2 - 4, y - camera.y + height / 2 - 6, 7, 3, WHITE);
		}
	}
};
