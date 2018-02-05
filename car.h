struct Car: Entity
{
	float turnSpeed = 3;
	float accel = 0.02;

	void accelerate()
	{
		speed += accel;

		if (speed > maxSpeed) speed = maxSpeed;
	}

	void decelerate()
	{
		speed -= accel * 2;

		if (speed < 0) speed = 0;
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
		curFrame = angleToFrame(angle, frameCount);

		if (arduboy.pressed(A_BUTTON))
		{
			accelerate();
		}
		else if (arduboy.pressed(B_BUTTON))
		{
			decelerate();
		}
	}
};
