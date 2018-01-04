struct Box: Entity
{
	Box()
	{
		angle = 0;
		width = 16, height = 16;
		x = 30, y = 30;

		speed = 0;
		maxSpeed = 0;

		frameCount = 0;
		curFrame = 0;
		animFreq = 0;
	}

	void update()
	{
		physics();
		updateCollide();
	}

	void draw()
	{
		debug();
	}
};
