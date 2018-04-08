typedef struct Menu
{
	bool selected = false;
	uint8_t currentSelection = 1;
	bool submenu = false;
	uint8_t currentSubmenu = 0;

	bool show()
	{
		// return if we've already selected "play"
		if (selected)
		{
			return true;
		}

		// selection movement
		if (!submenu)
		{
			if (arduboy.justPressed(LEFT_BUTTON))
			{
				if (currentSelection > 0)
				{
					currentSelection--;
				}
			}
			else if (arduboy.justPressed(RIGHT_BUTTON))
			{
				if (currentSelection < 3)
				{
					currentSelection++;
				}
			}
		}

		// selection with a and b
		if (arduboy.justPressed(B_BUTTON))
		{
			if (currentSelection == 1) // play button
			{
				arduboy.initRandomSeed();
				selected = true;
				return true;
			}
			else if (currentSubmenu == 3) // configuration menu
			{
				audio.toggle();
				audio.saveOnOff();
			}
			else
			{
				currentSubmenu = currentSelection;
				submenu = true;
			}
		}
		else if (arduboy.justPressed(A_BUTTON))
		{
			submenu = false;
		}

		// drawing
		if (!submenu) // default menu
		{
			arduboy.drawCompressed(0, 0, MENU, WHITE);

			// selection box
			uint8_t selectionX = currentSelection * 25 + 15;
			arduboy.fillRect(selectionX, 55, 23, 10);
			arduboy.drawRect(selectionX - 1, 54, 25, 11, BLACK);

			// TODO Use magic numbers
			// buttons
			sprites.drawPlusMask(16, 56, MENU_INFO, 0);
			sprites.drawPlusMask(41, 56, MENU_PLAY, 0);
			sprites.drawPlusMask(66, 56, MENU_HELP, 0);
			sprites.drawPlusMask(91, 56, MENU_FX, 0);
			sprites.drawPlusMask(106, 56, MENU_FX_NY, audio.enabled());
		}
		else if (currentSubmenu == 0) // info menu
		{
			arduboy.drawCompressed(32, 0, QRCODE, WHITE);
		}
		else if (currentSubmenu == 2) // help menu
		{
			arduboy.drawCompressed(0, 0, INSTRUCTIONS, WHITE);
		}

		arduboy.display(CLEAR_BUFFER);
		return false;
	}
} Menu;
