struct Skid: Simple
{
	Skid(float X, float Y, int CurFrame)
	{
		x = X, y = Y;

		curFrame = CurFrame;

		ttl = 15;
	}

	void update()
	{
		ttl--;
	}

	void draw()
	{
		if (angle > 90 && angle < 270)
		{
			sketch(SKID[curFrame], WHITE, MIRROR_HORIZONTAL);
		}
		else
		{
			sketch(SKID[curFrame]);
		}
	}
};
