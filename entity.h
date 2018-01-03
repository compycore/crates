struct Entity
{
	int ttl;

	float x, y;
	int width, height;
	Rect cbox; // used for cbox offset and size
	Rect collide; // used to actually calculate collisions

	float angle;
	float speed;

	int frameCount;
	int curFrame;
	int animFreq;

	void updateCollide()
	{
		// if we haven't defined cbox, make a default one
		if (!cbox.x)
		{
			cbox = {.x = 0, .y = 0, .width = width, .height = height};
		}

		collide = {.x = x + cbox.x, .y = y + cbox.y, .width = cbox.width, .height = cbox.height};
	}

	void physics()
	{
		int realFrameCount = frameCount + 1;
		float visualAngle = angle / 360 * realFrameCount * (360 / realFrameCount);

		x += speed * cos(visualAngle * 1000 / 57296);
		y -= speed * sin(visualAngle * 1000 / 57296);

		// temporarily keep inside the screen for testing
		if (x < 0)
		{
			x = 0;
		}
		else if (x + width > WIDTH)
		{
			x = WIDTH - width;
		}

		if (y < 0)
		{
			y = 0;
		}
		else if (y + height > HEIGHT)
		{
			y = HEIGHT - height;
		}
	}

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

	void sketch(unsigned char sprite[])
	{
		sprites.drawPlusMask(int(x), int(y), sprite, curFrame);
	}

	void debug()
	{
		arduboy.drawRect(x + cbox.x - 1, y + cbox.y - 1, cbox.width + 2, cbox.height + 2, BLACK);
		arduboy.drawRect(x + cbox.x + 1, y + cbox.y + 1, cbox.width - 2, cbox.height - 2, BLACK);
		arduboy.drawRect(x + cbox.x, y + cbox.y, cbox.width, cbox.height);
	}
};
