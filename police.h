struct Police: Car
{
	Police()
	{
		x = 50, y = 50;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		accel = 0.005;
		maxSpeed = 1.8;

		frameCount = ANGLES - 1;
	}

	void update()
	{
		physics();
		updateCbox();
		updateAngle();
		accelerate();
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		buffer(gfxBuffer, car_plus_mask);
	}
};
