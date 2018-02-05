struct Simple
{
	float x = 0, y = 0;

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

	void sketch(unsigned char sprite[])
	{
		sprites.drawPlusMask(x - camera.x, y - camera.y, sprite, curFrame);
	}
};
