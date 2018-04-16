// TODO maybe move this into menu.h
typedef struct Busted
{
	uint8_t x = 31;
	int8_t y = -46;

	void gameOver()
	{
		if (y < 25)
		{
			y++;
		}
		else
		{
			// after a pause, return to the menu and reset the player to play again
			if (arduboy.everyXFrames(250))
			{
				// TODO maybe repopulate cops too
				SCORE = 0;
				menu = Menu();
				player = Player();
			}
		}

		sprites.drawPlusMask(x, y, BUSTED, 0);
	}
} Busted;
