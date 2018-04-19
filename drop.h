struct Drop: Solid
{
	Point spawnPoint = randomPointOffCamera(LEVEL_SIZE);
	Drop()
	{
		x = spawnPoint.x, y = spawnPoint.y;
		width = 16, height = 16;
		cbox_conf = {.x = 0, .y = 8, .width = 16, .height = 8};
		type = 'D';
	}

	void update()
	{
		updateCbox();
	}

	void draw()
	{
		sketch(DROP);
	}
};
