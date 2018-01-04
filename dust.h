struct Dust: Entity
{
	Dust(float X, float Y, float Angle, float Speed)
	{
		angle = Angle;
		x = X, y = Y;
		width = 8, height = 8;

		speed = Speed;

		frameCount = 4;
		curFrame = 0;
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
		sketch(dust_plus_mask);
	}
};
