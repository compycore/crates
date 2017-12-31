typedef struct Entity
{
	float angle;
	float x, y;
	int width, height;
	Rect cbox; // used for cbox offset and size
	Rect collide; // used to actually calculate collisions

	float momX, momY;
	float turnSpeed;
	float accel;

	int frameCount;
	int curFrame;
	int animFreq;

	void updateCollide()
	{
		// if we haven't defined cbox, make it a default one
		if (!cbox.x)
		{
			cbox = {.x = 0, .y = 0, .width = width, .height = height};
		}

		collide = {.x = x + cbox.x, .y = y + cbox.y, .width = cbox.width, .height = cbox.height};
	}

	void accelerate()
	{
		float visualAngle = angle / 360 * frameCount * (360 / frameCount);

		momX += accel * cos(visualAngle * 1000 / 57296);
		momY -= accel * sin(visualAngle * 1000 / 57296);
	}

	void physics()
	{
		x += momX;
		y += momY;
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
