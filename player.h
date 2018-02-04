struct Player: Car
{
	Player()
	{
		angle = random(360);
		x = 20, y = 20;
		width = 20, height = 16;
		cbox_conf = {.x = 6, .y = 5, .width = 8, .height = 8};

		frameCount = rotationAngles - 1;
	}

	void update()
	{
		control();
		physics();
		updateCbox();
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		//buffer(gfxBuffer, car_plus_mask);
		buffer(gfxBuffer, skid_plus_mask);
	}
};
