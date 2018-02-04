struct Simple
{
	float x = 0, y = 0;

	int ttl = 0;

	int frameCount = 0;
	int curFrame = 0;
	int animFreq = 0;

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
