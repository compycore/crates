struct Crate: Entity
{
	Crate()
	{
		angle = random(360);
		x = 80, y = 40;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		frameCount = 12 - 1;
	}

	void update()
	{
		physics();
		updateAngle();
	}

	void draw()
	{
		sketch(crate_plus_mask);
	}
};
