struct Player: Car
{
	Player()
	{
		angle = random(360);
		width = 20, height = 16;
		x = WIDTH / 2 - width / 2, y = HEIGHT / 2 - height / 2;
		cbox = {.x = 6, .y = 5, .width = 8, .height = 8};

		speed = 0;
		maxSpeed = 1.5;
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
