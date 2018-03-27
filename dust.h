struct Dust: Simple
{
	Dust(float X, float Y, float Angle, float Speed)
	{
		x = X, y = Y;
		angle = Angle;
		speed = Speed;

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
		physics();
	}

	void draw()
	{
		// sketch(dust_plus_mask);
	}
};
