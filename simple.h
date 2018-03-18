struct Simple
{
	float x = 0, y = 0;
	int width = 0, height = 0;

	float angle = 0;
	float speed = 0;
	float maxSpeed = 2;

	unsigned int ttl = 0;

	unsigned int frameCount = 0;
	unsigned int curFrame = 0;
	unsigned int animFreq = 0;

	void animate()
	{
		if (arduboy.everyXFrames(animFreq))
		{
			if (curFrame < frameCount - 1)
			{
				curFrame += 1;
			}
			else
			{
				curFrame = 0;
			}
		}
	}

	void physics()
	{
		// apply momentum according to the current angle
		x += speed * cos(angle * 1000 / 57296);
		y -= speed * sin(angle * 1000 / 57296);

		// contain to the screen
		if (x < 0)
		{
			x = 0;
		}
		else if (x + width > camera.xMax)
		{
			x = camera.xMax - width;
		}

		// contain to the screen
		if (y < 0)
		{
			y = 0;
		}
		else if (y + height > camera.yMax)
		{
			y = camera.yMax - height;
		}
	}

	void sketch(unsigned char sprite[])
	{
		sprites.drawPlusMask(x - camera.x, y - camera.y, sprite, curFrame);
	}
};
