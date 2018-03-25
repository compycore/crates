typedef struct Compycore
{
	bool introduced = false;
	bool winked = false;
	int x = 29;
	int y = -46;

	bool introduce()
	{
		// skip the intro if the right button is pressed
		if (introduced || arduboy.pressed(RIGHT_BUTTON))
		{
			introduced = true;
			return true;
		}
		else if (y < 5)
		{
			y++;
			ardbitmap.drawCompressed(x, y, MICHAEL, WHITE, ALIGN_NONE, MIRROR_NONE);
		}
		else
		{
			if (arduboy.everyXFrames(150))
			{
				introduced = true;
				return true;
			}

			if (!winked)
			{
				sound.tone(1046, 50, 2093, 100);
				winked = true;
			}

			ardbitmap.drawCompressed(x, y, MICHAEL, WHITE, ALIGN_NONE, MIRROR_NONE);
			// TODO add a black box over Michael's usual eye
			ardbitmap.drawCompressed(x + 32, y + 25, WINK, WHITE, ALIGN_NONE, MIRROR_NONE);
			ardbitmap.drawCompressed(30, 46, COMPYCORE, WHITE, ALIGN_NONE, MIRROR_NONE);
		}

		arduboy.display(CLEAR_BUFFER);
		return false;
	}
} Compycore;
