typedef struct Compycore
{
	bool introduced = false;
	bool winked = false;
	char x = 29;
	char y = -46;

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
			arduboy.drawCompressed(x, y, MICHAEL, WHITE);
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

			arduboy.drawCompressed(x, y, MICHAEL, WHITE);
			arduboy.fillRect(x + 32, y + 25, 8, 6, BLACK);
			sprites.drawSelfMasked(x + 32, y + 25, WINK, 0);
			arduboy.fillRect(30, 47, WIDTH, 5, BLACK);
			arduboy.drawCompressed(30, 46, COMPYCORE, WHITE);
		}

		arduboy.display(CLEAR_BUFFER);
		return false;
	}
} Compycore;
