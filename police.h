struct Police: Car
{
	Police()
	{
		angle = random(360);
		width = 20, height = 16;
		x = 100, y = 50;
		cbox_conf = {.x = 6, .y = 5, .width = 8, .height = 8};

		speed = 0;
		maxSpeed = 2;
		turnSpeed = 2;
		accel = 0.05;

		frameCount = rotationAngles - 1;
		curFrame = 0;
		animFreq = 0;
	}

	void update()
	{
		physics();
		updateCbox();
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		buffer(gfxBuffer, car_plus_mask);
	}
};
