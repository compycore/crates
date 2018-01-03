struct Player: Car
{
	Player()
	{
		angle = 0;
		x = WIDTH / 2, y = HEIGHT / 2;
		width = 16, height = 16;
		cbox = {.x = 4, .y = 8, .width = 8, .height = 8};

		speed = 0;
		turnSpeed = 3;
		accel = 0.05;

		frameCount = 12;
		curFrame = 0;
		animFreq = 3;
	}

	void update()
	{
		control();
		physics();
		updateCollide();
	}

	void draw()
	{
		sketch(car_plus_mask);
	}
};
