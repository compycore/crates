typedef struct Menu
{
	bool selected = false;
	int currentSelection = 1;
	int buttonWidth = 21;
	int buttonPaddingLeft = 16;
	int buttonPadding = 4;
	int buttonY = 42;
	int selectionWidth = 23;
	int selectionHeight = 9;

	bool show()
	{
		if (selected)
		{
			return true;
		}

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


		if (arduboy.justPressed(A_BUTTON))
		{
			selected = true;
			return true;
		}

		sprites.drawOverwrite(10, 10, pablo, 0);

		// selection box
		int selectionX = buttonPaddingLeft - 1 + (currentSelection * buttonWidth) + (currentSelection * buttonPadding);
		arduboy.fillRect(selectionX, buttonY - 1, selectionWidth, selectionHeight);
		arduboy.drawRect(selectionX - 1, buttonY - 2, selectionWidth + 2, selectionHeight + 2, BLACK);

		// buttons
		sprites.drawPlusMask(buttonPaddingLeft, buttonY, help_plus_mask, 0);
		sprites.drawPlusMask(buttonPaddingLeft + buttonWidth + buttonPadding, buttonY, play_plus_mask, 0);
		sprites.drawPlusMask(buttonPaddingLeft + (buttonWidth * 2) + (buttonPadding * 2), buttonY, info_plus_mask, 0);
		sprites.drawPlusMask(buttonPaddingLeft + (buttonWidth * 3) + (buttonPadding * 3), buttonY, conf_plus_mask, 0);

		arduboy.display();
		return false;
	}
} Menu;
