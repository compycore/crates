struct Cactus: Entity
{
	Cactus()
	{
		width = 14, height = 16;
		x = 30, y = 30;
		cbox_conf = {.x = 2, .y = 5, .width = 10, .height = 10};
	}

	void update()
	{
		updateCbox();
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		buffer(gfxBuffer, cactus_plus_mask);
	}
};
