struct Car: Entity
{
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

	void update()
	{
		control();
		physics();
		updateCollide();
	}

	void draw()
	{
		sketch(car_plus_mask);
	}
};
