struct Cactus: Simple
{
	Cactus()
	{
		x = random(camera.xMax), y = random(camera.yMax);
	}

	void draw()
	{
		sketch(CACTUS);
	}
};
