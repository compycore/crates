typedef struct Menu
{
	bool selected = false;

	uint8_t currentSelection = 1;

	uint8_t selectionWidth = 23;
	uint8_t selectionHeight = 10;

	uint8_t buttonWidth = 21;
	uint8_t buttonPaddingLeft = 16;
	uint8_t buttonPadding = 4;
	uint8_t buttonY = 56;

	bool submenu = false;
	uint8_t currentSubmenu = 0;

	void sketchSelectionBox(uint8_t x, uint8_t y, uint8_t width, uint8_t height)
	{
		arduboy.fillRect(x, y, width, height);
		arduboy.drawRect(x - 1, y - 1, width + 2, height + 1, BLACK);
	}

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

		if (!submenu) // default menu
		{
			arduboy.drawCompressed(0, 0, MENU, WHITE);

			// selection box
			uint8_t selectionX = buttonPaddingLeft - 1 + (currentSelection * buttonWidth) + (currentSelection * buttonPadding);
			arduboy.fillRect(selectionX, buttonY - 1, selectionWidth, selectionHeight);
			arduboy.drawRect(selectionX - 1, buttonY - 2, selectionWidth + 2, selectionHeight + 1, BLACK);

			sketchSelectionBox(selectionX, buttonY - 1, selectionWidth, selectionHeight);

			// TODO Use magic numbers
			// buttons
			sprites.drawPlusMask(buttonPaddingLeft, buttonY, MENU_INFO, 0);
			sprites.drawPlusMask(buttonPaddingLeft + buttonWidth + buttonPadding, buttonY, MENU_PLAY, 0);
			sprites.drawPlusMask(buttonPaddingLeft + (buttonWidth * 2) + (buttonPadding * 2), buttonY, MENU_HELP, 0);
			sprites.drawPlusMask(buttonPaddingLeft + (buttonWidth * 3) + (buttonPadding * 3), buttonY, MENU_FX, 0);
			sprites.drawPlusMask(buttonPaddingLeft + (buttonWidth * 3) + (buttonPadding * 3) + 15, buttonY, MENU_FX_NY, audio.enabled());
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
