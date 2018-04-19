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

	void sketch(uint8_t const sprite[], uint8_t const frame = 0)
	{
		sprites.drawSelfMasked((int16_t) (x - camera.x), (int16_t) (y - camera.y), sprite, frame);
	}
};
