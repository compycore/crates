struct SVG
{
	void diamond(float x, float y, int scale)
	{
		// start from the top of the shape
		arduboy.drawLine(x + 1 * scale, y + 0 * scale, x + 2 * scale, y + 1 * scale);
		arduboy.drawLine(x + 2 * scale, y + 1 * scale, x + 1 * scale, y + 2 * scale);
		arduboy.drawLine(x + 1 * scale, y + 2 * scale, x + 0 * scale, y + 1 * scale);
		arduboy.drawLine(x + 0 * scale, y + 1 * scale, x + 1 * scale, y + 0 * scale);
	}

	void map(float x, float y, int scale)
	{
		arduboy.drawLine(x + 20 * scale, y + 20 * scale, x + 40 * scale, y + 25 * scale);
		arduboy.drawLine(x + 40 * scale, y + 25 * scale, x + 60 * scale, y + 40 * scale);
		arduboy.drawLine(x + 60 * scale, y + 40 * scale, x + 80 * scale, y + 120 * scale);
		arduboy.drawLine(x + 80 * scale, y + 120 * scale, x + 120 * scale, y + 140 * scale);
		arduboy.drawLine(x + 120 * scale, y + 140 * scale, x + 200 * scale, y + 180 * scale);
	}
};
