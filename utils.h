uint8_t angleToFrame(float angle, uint8_t frameCount)
{
	return (uint8_t)(angle / 360 * frameCount);
}

Point randomOffScreen(uint16_t size)
{
	Point point;
	point.x = random(size);
	point.y = random(size);

	while (camera.canSee(point.x, point.y, 0, 0))
	{
		point.x = random(size);
		point.y = random(size);
	}

	return point;
}

float distanceBetween(float x1, float y1, float x2, float y2)
{
	float xDiff = x2 - x1;
	float yDiff = y2 - y1;
	return sqrt(xDiff * xDiff + yDiff * yDiff);
}

float normalizeAngle(float angle)
{
	angle = int(angle) % 360;

	if (angle < 0) angle += 360;

	return angle;
}

float findAngle(int x1, int y1, int x2, int y2)
{
	return atan2(y2 - y1, x1 - x2);
}

void drawGrid()
{
	// horizontal lines
	for (uint8_t y = 0; y <= LEVEL_SIZE / GRID_SIZE; y++)
	{
		arduboy.drawFastHLine(0, y * GRID_SIZE - camera.y, 128, WHITE);
	}

	// vertical lines
	for (uint8_t x = 0; x <= LEVEL_SIZE / GRID_SIZE; x++)
	{
		arduboy.drawFastVLine(x * GRID_SIZE - camera.x, 0, 64, WHITE);
	}
}

void drawNumber(uint8_t x, uint8_t y, uint16_t number, uint8_t maxDigits = 6)
{
	uint8_t visualWidth = 5;
	char chars[maxDigits];
	itoa(number, chars, 10);

	// pad the score with zeroes
	for (uint8_t i = 0; i < maxDigits - strlen(chars); i++)
	{
		sprites.drawPlusMask(x, y, NUMBERS, 0);
		x += visualWidth;
	}

	for (uint8_t i = 0; i < strlen(chars); i++)
	{
		sprites.drawPlusMask(x, y, NUMBERS, uint8_t(chars[i]) - 48);
		x += visualWidth;
	}
}

void drawLocator(float xTarget, float yTarget, uint8_t width, uint8_t height, uint8_t radius = 1, bool filled = true)
{
	if (!camera.canSee(xTarget, yTarget, width, height))
	{
		int16_t xLocator;
		int16_t yLocator;

		// change coordinate space again to center of screen
		float xTargetCenter = xTarget - camera.x - 64;
		float yTargetCenter = yTarget - camera.y - 32;

		float slope = yTargetCenter / xTargetCenter;

		int8_t paddedWidth = 126;
		int8_t paddedHeight = 62;

		// calculate indicator position if above or below
		if (yTargetCenter < 0) // top of screen
		{
			xLocator = (-paddedHeight / 2) / slope;
			yLocator = -paddedHeight / 2;
		}
		else // bottom of screen
		{
			xLocator = (paddedHeight / 2) / slope;
			yLocator = paddedHeight / 2 - 1;
		}

		//calculate indicator position if left or right
		if (xLocator < -paddedWidth / 2) // left side
		{
			xLocator = -paddedWidth / 2;
			yLocator = slope * -paddedWidth / 2;
		}
		else if (xLocator > paddedWidth / 2) // right side
		{
			xLocator = paddedWidth / 2 - 1;
			yLocator = slope * paddedWidth / 2;
		}

		// apply position after changing the coordinate system back to normal
		if (filled)
		{
			arduboy.fillCircle(xLocator + 64, yLocator + 32, radius, WHITE);
		}
		else
		{
			arduboy.drawCircle(xLocator + 64, yLocator + 32, radius, WHITE);
		}
	}
}
