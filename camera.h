struct Camera
{
	float x = 0;
	float y = 0;

	// TODO maybe move this to use Points and Rects (the issue is that I use floats for all the x and y coords and a Point is int16_t
	bool canSee(float xTarget, float yTarget, uint8_t width, uint8_t height)
	{
		if (xTarget + width > x && xTarget < x + 127)
		{
			if (yTarget + height > y && yTarget < y + 63)
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
		else if (x + 127 - xPadding < followX)
		{
			x = followX + xPadding - 127;
		}

		if (x < 0)
		{
			x = 0;
		}
		else if (x + 127 > LEVEL_SIZE)
		{
			x = LEVEL_SIZE - 127;
		}

		if (y + yPadding > followY)
		{
			y = followY - yPadding;
		}
		else if (y + 63 - yPadding < followY)
		{
			y = followY + yPadding - 63;
		}

		if (y < 0)
		{
			y = 0;
		}
		else if (y + 63 > LEVEL_SIZE)
		{
			y = LEVEL_SIZE - 63;
		}
	}
};
