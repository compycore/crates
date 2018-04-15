struct Camera
{
	float x = 0;
	float y = 0;

	float xShake = 0;
	float yShake = 0;

	// initiate screen shake
	void shake(uint8_t power = 15)
	{
		float angle = random(100) / 100; // a value between -1 and 1

		xShake = power * cos(angle);
		yShake = power * sin(angle);
	}

	// apply screen shake
	void update()
	{
		if ((abs(xShake) > 0.5) || (abs(yShake) > 0.5))
		{
			xShake *= -0.7 - random(20) / 100;
			yShake *= -0.7 - random(20) / 100;

			x += xShake;
			y += yShake;
		}
	}

	void follow(float followX, float followY, uint8_t xPadding, uint8_t yPadding)
	{
		if (x + xPadding > followX)
		{
			x = followX - xPadding;
		}
		else if (x + 128 - xPadding < followX)
		{
			x = followX + xPadding - 128;
		}

		if (x < 0)
		{
			x = 0;
		}
		else if (x + 128 > LEVEL_WIDTH)
		{
			x = LEVEL_WIDTH - 128;
		}

		if (y + yPadding > followY)
		{
			y = followY - yPadding;
		}
		else if (y + 64 - yPadding < followY)
		{
			y = followY + yPadding - 64;
		}

		if (y < 0)
		{
			y = 0;
		}
		else if (y + 64 > LEVEL_HEIGHT)
		{
			y = LEVEL_HEIGHT - 64;
		}
	}
};
