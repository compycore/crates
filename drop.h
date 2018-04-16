struct Drop: Entity
{
	Point spawnPoint = randomOffScreen(LEVEL_WIDTH, LEVEL_HEIGHT);
	Drop()
	{
		x = spawnPoint.x, y = spawnPoint.y;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};
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
