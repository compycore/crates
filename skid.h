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
		// sprites.drawPlusMask(x - camera.x, y - camera.y, skid_plus_mask, curFrame);
	}
};
