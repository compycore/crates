struct Car: Entity
{
	float turnSpeed = 3;
	float accel = 0.03;

	void accelerate()
	{
		speed += accel;

		if (speed > maxSpeed)
		{
			speed = maxSpeed;
		}
	}

	void decelerate()
	{
		speed -= accel;

		if (speed < 0)
		{
			speed = 0;
		}
	}

	void follow(int x, int y)
	{
		// do stuff
	}

	void control()
	{
		if (speed > 0)
		{
			if (arduboy.pressed(LEFT_BUTTON))
			{
				angle += turnSpeed;
			}
			else if (arduboy.pressed(RIGHT_BUTTON))
			{
				angle -= turnSpeed;
			}
		}

		angle = normalizeAngle(angle);

		if (arduboy.pressed(A_BUTTON))
		{
			accelerate();
		}
		else if (arduboy.pressed(B_BUTTON))
		{
			decelerate();
		}

		curFrame = angleToFrame(angle, frameCount);
	}
};
