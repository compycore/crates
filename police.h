struct Police: Car
{
	bool braking = false;
	bool flashing = false;
	float followTurnRate = 0.05;

	void follow(uint16_t const X, uint16_t const Y)
	{
		if (speed > turnSpeed)
		{
			// randomly toggle brake on occasion
			if (arduboy.everyXFrames(10))
			{
				uint8_t chance = random(10);

				if (chance < 3)
				{
					braking = !braking;
				}
			}

			if (braking && speed > maxSpeed / 2)
			{
				speed -= accel * 2; // multiply to override the constant police acceleration
			}

			int16_t angleToTarget = findAngle(x, y, X, Y) * 57296 / 1000 + 180;
			float shortest_angle = ((((angleToTarget - int16_t(angle)) % 360) + 540) % 360) - 180;
			angle += shortest_angle * (followTurnRate + speed / 50);
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

	// flash the lights
	void flash(uint8_t const xOffset, uint8_t const yOffset)
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
