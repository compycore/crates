uint8_t angleToFrame(float angle, uint8_t frameCount)
{
	return (uint8_t)(angle / 360 * frameCount);
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
	uint8_t spacing = 100;

	// horizontal lines
	for (uint8_t y = 0; y < LEVEL_HEIGHT / spacing; y++)
	{
		arduboy.drawFastHLine(0, y * spacing - camera.y, 128, WHITE);
	}

	// vertical lines
	for (uint8_t x = 0; x < LEVEL_WIDTH / spacing; x++)
	{
		arduboy.drawFastVLine(x * spacing - camera.x, 0, 64, WHITE);
	}
}

void drawLocator(float x, float y)
{
	float slope = y / x;
	uint8_t padding = 5; // cannot be zero

	if (x < camera.x) // left edge
	{
		arduboy.fillCircle(padding, slope * padding, 3, WHITE);
	}
	else if (x > camera.x + 128) // right edge
	{
		arduboy.fillCircle(128 - padding, slope * (128 - padding), 3, WHITE);
	}

	if (y < camera.y) // top edge
	{
		arduboy.fillCircle(padding / slope, padding, 3, WHITE);
	}
	else if (y > camera.y + 64) // bottom edge
	{
		arduboy.fillCircle((64 - padding) / slope, 64 - padding, 3, WHITE);
	}
}
