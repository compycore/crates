struct Car: Entity
{
	Vector<Dust, 2> dust;

	float turnRate = 3.5;
	float turnSpeed = 0.5;
	float accel = 0.02;
	float maxReverseSpeed = -1;

	void accelerate()
	{
		if (speed > 0)
		{
			speed += accel;
		}
		else
		{
			speed += accel * 4;
		}

		if (speed > maxSpeed) speed = maxSpeed;
	}

	void decelerate()
	{
		if (speed > maxReverseSpeed) speed -= accel * 2;
	}

	void updateAngle()
	{
		angle = normalizeAngle(angle);
		curFrame = angleToFrame(angle, frameCount);
	}

	void follow(int X, int Y)
	{
		if (speed > turnSpeed)
		{
			int angleToTarget = findAngle(x, y, X, Y) * 57296 / 1000 + 180;
			float shortest_angle = ((((angleToTarget - int(angle)) % 360) + 540) % 360) - 180;
			angle += shortest_angle * 0.05;
		}
	}

	void control()
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
