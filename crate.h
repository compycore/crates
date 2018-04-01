struct Crate: Entity
{
	Crate()
	{
		x = 80, y = 40;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};
	}

	void update()
	{
		updateCbox();
	}

	void draw()
	{
		// sketch(CRATE);
	}
};
