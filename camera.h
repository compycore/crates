struct Camera
{
	float x = 0;
	float y = 0;

	void follow(float followX, float followY, int xPadding, int yPadding)
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
	}
};
