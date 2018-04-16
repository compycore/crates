struct Camera
{
	float x = 0;
	float y = 0;

	bool canSee(float xTarget, float yTarget, uint8_t width, uint8_t height)
	{
		if (xTarget + width > x && xTarget < x + 128)
		{
			if (yTarget + height > y && yTarget < y + 64)
			{
				return true;
			}
		}

		return false;
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
