struct Spike: Entity
{
	uint8_t damage = 1;

	Spike() = default;

	Spike(float X, float Y)
	{
		x = X, y = Y;
		width = 7, height = 8;
		cbox_conf = {.x = 0, .y = 4, .width = 7, .height = 4};
		type = 'S';
	}

	void update()
	{
		updateCbox();
	}

	void draw()
	{
		sketch(SPIKE);
	}
};
