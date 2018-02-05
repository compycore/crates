struct Entity: Solid
{
	float angle = 0;
	float speed = 0;
	float maxSpeed = 2;

	void physics()
	{
		x += speed * cos(angle * 1000 / 57296);
		y -= speed * sin(angle * 1000 / 57296);

		if (x < 0)
		{
			x = 0;
		}
		else if (x + width > camera.xMax)
		{
			x = camera.xMax - width;
		}

		if (y < 0)
		{
			y = 0;
		}
		else if (y + height > camera.yMax)
		{
			y = camera.yMax - height;
		}
	}
};
