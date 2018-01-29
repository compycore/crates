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
};
