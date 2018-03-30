// TODO minimize this code
typedef struct Menu
{
	bool selected = false;

	unsigned char currentSelection = 0;

	unsigned char selectionWidth = 23;
	unsigned char selectionHeight = 9;

	unsigned char buttonWidth = 21;
	unsigned char buttonPaddingLeft = 16;
	unsigned char buttonPadding = 4;
	unsigned char buttonY = 55;

	bool submenu = false;
	unsigned char currentSubmenu = 0;
	unsigned char currentSubmenuSelection = 0;

	void sketchSelectionBox(unsigned char x, unsigned char y, unsigned char width, unsigned char height)
	{
		arduboy.fillRect(x, y, width, height);
		arduboy.drawRect(x - 1, y - 1, width + 2, height + 2, BLACK);
	}

	bool show()
	{
		// return if we've already selected "play"
		if (selected)
		{
			return true;
		}

		// load the current audio state when we're on the default menu
		if (!submenu)
		{
			currentSubmenuSelection = 1 - audio.enabled();
		}

		// selection movement
		if (arduboy.justPressed(LEFT_BUTTON))
		{
			if (!submenu)
			{
				if (currentSelection > 0)
				{
					currentSelection--;
				}
			}
			else
			{
				if (currentSubmenuSelection > 0)
				{
					currentSubmenuSelection--;
				}
			}
		}
		else if (arduboy.justPressed(RIGHT_BUTTON))
		{
			if (!submenu)
			{
				if (currentSelection < 2)
				{
					currentSelection++;
				}
			}
			else
			{
				if (currentSubmenuSelection < 1)
				{
					currentSubmenuSelection++;
				}
			}
		}

		// selection with a and b
		if (arduboy.justPressed(B_BUTTON))
		{
			if (!submenu) // default menu
			{
				// the play button
				if (currentSelection == 0)
				{
					arduboy.initRandomSeed();
					selected = true;
					return true;
				}
				else
				{
					currentSubmenu = currentSelection;
					submenu = true;
				}
			}
			else if (currentSubmenu == 2)   // configuration menu
			{
				if (currentSubmenuSelection == 0)
				{
					audio.on();
				}
				else if (currentSubmenuSelection == 1)
				{
					audio.off();
				}

				audio.saveOnOff();
				submenu = false;
			}
		}
		else if (arduboy.justPressed(A_BUTTON))
		{
			submenu = false;
		}

		if (!submenu) // default menu
		{
			ardbitmap.drawCompressed(10, 2, MENU, WHITE, ALIGN_NONE, MIRROR_NONE);

			// selection box
			unsigned char selectionX = buttonPaddingLeft - 1 + (currentSelection * buttonWidth) + (currentSelection * buttonPadding);
			arduboy.fillRect(selectionX, buttonY - 1, selectionWidth, selectionHeight);
			arduboy.drawRect(selectionX - 1, buttonY - 2, selectionWidth + 2, selectionHeight + 2, BLACK);

			sketchSelectionBox(selectionX, buttonY - 1, selectionWidth, selectionHeight);

			// buttons
			// sprites.drawPlusMask(buttonPaddingLeft, buttonY, play_plus_mask, 0);
			// sprites.drawPlusMask(buttonPaddingLeft + buttonWidth + buttonPadding, buttonY, info_plus_mask, 0);
			// sprites.drawPlusMask(buttonPaddingLeft + (buttonWidth * 2) + (buttonPadding * 2), buttonY, conf_plus_mask, 0);
		}
		else if (currentSubmenu == 1) // info menu
		{
			// sprites.drawOverwrite(32, 0, qrcode, 0);
			ardbitmap.drawCompressed(32, 0, QRCODE, WHITE, ALIGN_NONE, MIRROR_NONE);
		}
		else if (currentSubmenu == 2) // configuration menu
		{
			// sprites.drawOverwrite(10, 2, menu_without_mask, 0);

			unsigned char selectionX = 0;
			unsigned char selectionWidthSubmenu = 0;

			// selection box configuration
			if (currentSubmenuSelection == 0)
			{
				// on
				selectionX = 37 + 19 + 4 - 1;
				selectionWidthSubmenu = 13;
			}
			else if (currentSubmenuSelection == 1)
			{
				// off
				selectionX = 37 + 19 + 4 + 11 + 4 - 1;
				selectionWidthSubmenu = 18;
			}

			sketchSelectionBox(selectionX, buttonY - 1, selectionWidthSubmenu, selectionHeight);

			// sprites.drawPlusMask(37, buttonY, sfx_plus_mask, 0);
			// sprites.drawPlusMask(37 + 19 + 4, buttonY, on_plus_mask, 0);
			// sprites.drawPlusMask(37 + 19 + 4 + 11 + 4, buttonY, off_plus_mask, 0);
		}

		arduboy.display(CLEAR_BUFFER);
		return false;
	}
} Menu;
