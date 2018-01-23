typedef struct Menu
{
	bool selected = false;

	bool show()
	{
		if (selected)
		{
			return true;
		}

		if (arduboy.pressed(A_BUTTON))
		{
			selected = true;
			return true;
		}

		sprites.drawOverwrite(10, 10, pablo, 0);

		arduboy.display();
		return false;
	}
} Menu;
