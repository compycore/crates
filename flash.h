struct Flash: Simple
{
	Flash(float X, float Y, float Angle, float Speed)
	{
		x = X, y = Y;
		angle = Angle;
		speed = Speed;

		frameCount = 2;
		animFreq = 5;

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
		sketch(flash_plus_mask);
	}
};
