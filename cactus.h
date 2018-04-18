struct Cactus: Simple
{
	Cactus()
	{
		x = random(LEVEL_SIZE), y = random(LEVEL_SIZE);
	}

	void draw()
	{
		sketch(CACTUS);
	}
};
