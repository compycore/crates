struct Player: Car
{
	Player()
	{
		angle = random(360);
		width = 20, height = 16;
		x = WIDTH / 2 - width / 2, y = HEIGHT / 2 - height / 2;
		cbox_conf = {.x = 6, .y = 5, .width = 8, .height = 8};

		speed = 0;
		maxSpeed = 3;
		turnSpeed = 3;
		accel = 0.03;

		frameCount = rotationAngles - 1;
		curFrame = 0;
		animFreq = 0;
	}

	void update()
	{
		control();
		physics();
		updateCbox();
	}

	void sketchSpeedometer()
	{
		// outline
		arduboy.drawRect(1, 1, 3, 62);
		// black fill
		arduboy.drawFastVLine(2, 2, 59, BLACK);
		// current speed
		float speedHeight = speed / maxSpeed * 60;
		arduboy.drawFastVLine(2, 63 - speedHeight, speedHeight);
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		buffer(gfxBuffer, car_plus_mask);
	}
};
