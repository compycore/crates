struct Car: Entity
{
	float turnSpeed = 3;
	float accel = 0.02;
	float maxReverseSpeed = -1;

	void accelerate()
	{
		speed += accel;

		if (speed > maxSpeed) speed = maxSpeed;
	}

	void decelerate()
	{
		if (speed > maxReverseSpeed) speed -= accel * 2;
	}

	void follow(int X, int Y)
	{
		angle = findAngle(x, y, X, Y) * 57296 / 1000 + 180;
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

		if (arduboy.pressed(A_BUTTON))
		{
			accelerate();
		}
		else if (arduboy.pressed(B_BUTTON))
		{
			decelerate();
		}
	}

	void updateAngle()
	{
		angle = normalizeAngle(angle);
		curFrame = angleToFrame(angle, frameCount);
	}
};
