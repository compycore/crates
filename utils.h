uint8_t angleToFrame(float const &angle, uint8_t const &frameCount)
{
	return (uint8_t)(angle / 360 * frameCount);
}

Point randomPoint(uint16_t const &size)
{
	Point point;

	point.x = random(size - 30) + 15;
	point.y = random(size - 30) + 15;

	return point;
}

Point randomPointOffCamera(uint16_t const &size)
{
	Point point = randomPoint(size);

	if (camera.canSee(point.x, point.y, 1, 1))
	{
		point = randomPoint(size);
	}

	return point;
}

float distanceBetween(float const &x1, float const &y1, float const &x2, float const &y2)
{
	float xDiff = x2 - x1;
	float yDiff = y2 - y1;

	return sqrt(xDiff * xDiff + yDiff * yDiff);
}

float normalizeAngle(float const &angle)
{
	int16_t normalized = int16_t(angle) % 360;

	if (normalized < 0) normalized += 360;

	return normalized;
}

float findAngle(int16_t const &x1, int16_t const &y1, int16_t const &x2, int16_t const &y2)
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

void drawNumber(uint8_t x, uint8_t const &y, uint16_t const &number)
{
	itoa(number, VISUAL_SCORE, 10);

	// pad the score with zeroes
	for (uint8_t i = 0; i < 6 - strlen(VISUAL_SCORE); i++)
	{
		sprites.drawPlusMask(x, y, NUMBERS, 0);
		x += 5;
	}

	for (uint8_t i = 0; i < strlen(VISUAL_SCORE); i++)
	{
		sprites.drawPlusMask(x, y, NUMBERS, uint8_t(VISUAL_SCORE[i]) - 48);
		x += 5;
	}
}

void drawLocator(Entity const &target, uint8_t radius = 1, bool const &filled = true)
{
	if (!camera.canSee(target.x, target.y, target.width, target.height))
	{
		int16_t x;
		int16_t y;

		// don't make the indicators too big
		if (radius > 2)
		{
			radius = 2;
		}

		// change coordinate space again to center of screen
		float xCenter = target.x - camera.x - 64;
		float yCenter = target.y - camera.y - 32;

		float slope = yCenter / xCenter;

		// calculate indicator position if above or below
		if (yCenter < 0) // top of screen
		{
			x = (-31) / slope;
			y = -31;
		}
		else // bottom of screen
		{
			x = (31) / slope;
			y = 31 - 1;
		}

		//calculate indicator position if left or right
		if (x < -63) // left side
		{
			x = -63;
			y = slope * -63;
		}
		else if (x > 63) // right side
		{
			x = 63 - 1;
			y = slope * 63;
		}

		// apply position after changing the coordinate system back to normal
		if (filled)
		{
			arduboy.fillCircle(x + 64, y + 32, radius, WHITE);
		}
		else
		{
			arduboy.drawCircle(x + 64, y + 32, radius, WHITE);
		}
	}
}
