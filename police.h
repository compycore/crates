struct Police: Car
{
	bool flashing = false;

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

	// flash the lights
	void flash(uint8_t xOffset, uint8_t yOffset)
	{
		if (arduboy.everyXFrames(10))
		{
			flashing = !flashing;
		}

		if (flashing)
		{
			arduboy.fillRect(x - camera.x + width / 2 - xOffset, y - camera.y + height / 2 - yOffset, 7, 3, WHITE);
		}
	}
};
