struct Cactus: Simple
{
	Cactus()
	{
		x = random(LEVEL_WIDTH), y = random(LEVEL_HEIGHT);
	}

	void draw()
	{
		sketch(CACTUS);
	}
};
