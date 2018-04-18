struct Crate: Entity
{
	Point spawnPoint = randomPointOffCamera(LEVEL_SIZE);
	Crate()
	{
		x = spawnPoint.x, y = spawnPoint.y;
		width = 16, height = 16;
		cbox_conf = {.x = 0, .y = 8, .width = 16, .height = 8};
		type = 'C';
	}

	void update()
	{
		updateCbox();
	}

	void draw()
	{
		sketch(CRATE);
	}
};
