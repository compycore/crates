// TODO maybe move this into menu.h
typedef struct Busted
{
	uint8_t x = 31;
	int8_t y = -46;

	void gameOver()
	{
		if (y < 26)
		{
			y++;
			sprites.drawPlusMask(x, y, BUSTED, 0);
		}
		else
		{
			// after a pause, return to the menu and reset the player to play again
			if (arduboy.everyXFrames(500))
			{
				// TODO maybe repopulate cops too
				menu = Menu();
				player = Player();
			}

			sprites.drawPlusMask(x, y, BUSTED, 0);
		}
	}
} Busted;
