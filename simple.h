struct Simple
{
	float x = 0, y = 0;

	uint8_t frameCount = 0;
	uint8_t curFrame = 0;
	uint8_t animFreq = 0;

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

	void sketch(const uint8_t *sprite, uint8_t color = WHITE, uint8_t mirror = MIRROR_NONE, uint8_t align = ALIGN_NONE)
	{
		ardbitmap.drawCompressed((int16_t) (x - camera.x), (int16_t) (y - camera.y), sprite, color, align, mirror);
	}
};
