struct Crate: Entity
{
	Crate()
	{
		// x = random(LEVEL_WIDTH), y = random(LEVEL_HEIGHT);
		x = 50, y = 50;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};
	}

	void update()
	{
		updateCbox();
	}

	void draw()
	{
		sketch(CRATE);
	}
};
