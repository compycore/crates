struct Cactus: Simple
{
	Cactus()
	{
		width = 10, height = 16;
		x = 30, y = 30;
	}

	void draw()
	{
		sketch(cactus_plus_mask);
	}
};
