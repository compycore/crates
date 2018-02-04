struct Dust: Simple
{
	Dust(float X, float Y, float Angle)
	{
		angle = Angle;
		x = X, y = Y;
		width = 8, height = 8;

		frameCount = 4;
		animFreq = 8;

		ttl = frameCount;
	}

	void update()
	{
		if (arduboy.everyXFrames(animFreq))
		{
			ttl--;
		}

		animate();
	}

	void draw()
	{
		sketch(dust_plus_mask);
	}
};
