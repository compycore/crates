typedef struct Entity
{
	float x, y;
	int width, height;
	Rect cbox; // used for cbox offset and size
	Rect collide; // used to actually calculate collisions

	float momY;
	float weight;
	float movementSpeed;
	float jumpStrength;

	int frames;
	int curFrame;
	int animationFrequency;

	void jump()
	{
		if (y + height == ground)
		{
			momY -= jumpStrength;
		}
	}

	void updateCollide()
	{
		// if we haven't defined cbox, make it a default one
		if (!cbox.x)
		{
			cbox = {.x = 0, .y = 0, .width = width, .height = height};
		}

		collide = {.x = x + cbox.x, .y = y + cbox.y, .width = cbox.width, .height = cbox.height};
	}

	void physics()
	{
		y += momY;

		gravity();
	}

	void gravity()
	{
		if (y + height < ground)
		{
			momY += weight;
		}
		else
		{
			momY = 0;
			y = ground - height;
		}
	}

	void animate()
	{
		if (arduboy.everyXFrames(animationFrequency))
		{
			if (curFrame < frames - 1)
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
