struct Cactus: Entity
{
	Cactus()
	{
		angle = random(360);
		width = 14, height = 16;
		x = 30, y = 30;
		cbox_conf = {.x = 2, .y = 6, .width = 10, .height = 10};

		speed = 0;
		maxSpeed = 0;

		frameCount = 0;
		curFrame = 0;
		animFreq = 0;
	}

	void update()
	{
		updateCbox();
	}

	void draw()
	{
		sketch(cactus_plus_mask);
	}
};
