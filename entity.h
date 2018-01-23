struct Entity
{
	int ttl;

	float x, y;
	int width, height;
	Rect cbox_conf; // used for cbox offset and size
	Rect cbox; // used to actually calculate collisions

	float angle;
	float speed;
	float maxSpeed;

	int frameCount;
	int curFrame;
	int animFreq;

	void updateCbox()
	{
		// if we haven't defined cbox, make a default one
		if (!cbox_conf.x)
		{
			cbox_conf = {.x = 0, .y = 0, .width = width, .height = height};
		}

		cbox = {.x = x + cbox_conf.x, .y = y + cbox_conf.y, .width = cbox_conf.width, .height = cbox_conf.height};
	}

	void collide(Rect other)
	{
		// preliminary solid collisions
		if (arduboy.collide(cbox, other))
		{
			float translateX = 0;
			float translateY = 0;

			// find x translation distance
			if (cbox.x < other.x)
			{
				translateX = (other.x - cbox_conf.width - cbox_conf.x + 1) - x;
			}
			else
			{
				translateX = (other.x + other.width - cbox_conf.x) - x;
			}

			// find y translation distance
			if (cbox.y < other.y)
			{
				translateY = (other.y - cbox_conf.height - cbox_conf.y + 1) - y;
			}
			else
			{
				translateY = (other.y + other.height - cbox_conf.y) - y;
			}

			// apply the translation
			if (abs(translateX) < abs(translateY))
			{
				x += translateX;
			}
			else
			{
				y += translateY;
			}
		}
	}

	void physics()
	{
		float visualAngle = angle / 360 * rotationAngles * (360 / rotationAngles);

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
		sprites.drawPlusMask(x, y, sprite, curFrame);
		cboxDebug();
	}

	void buffer(GfxBuffer &gfxBuffer, unsigned char sprite[])
	{
		// add the entity to the draw buffer
		gfxBuffer.add(GfxBufferEntity(int(x), int(y), sprite, curFrame));
		cboxDebug();
	}

	void cboxDebug()
	{
		if (debug)
		{
			arduboy.drawRect(x + cbox_conf.x - 1, y + cbox_conf.y - 1, cbox_conf.width + 2, cbox_conf.height + 2, BLACK);
			arduboy.drawRect(x + cbox_conf.x + 1, y + cbox_conf.y + 1, cbox_conf.width - 2, cbox_conf.height - 2, BLACK);
			arduboy.drawRect(x + cbox_conf.x, y + cbox_conf.y, cbox_conf.width, cbox_conf.height);
		}
	}
};
