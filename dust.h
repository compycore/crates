struct Dust: Entity
{
	Dust(float x, float y, float angle, float speed)
	{
		ttl = 0;
		angle = angle || 0;
		x = x, y = y;
		width = 8, height = 8;
		cbox = {.x = 4, .y = 8, .width = 8, .height = 8};

		speed = speed / 2 || 0;

		frameCount = 12;
		curFrame = 0;
		animFreq = 3;
	}

	void update()
	{
		ttl--;
		physics();
	}

	void draw()
	{
		sketch(dust_plus_mask);
	}
};
