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
		arduboy.drawLine(x + 20 * scale - camera.x, y + 20 * scale - camera.y, x + 40 * scale - camera.x, y + 25 * scale - camera.y);
		arduboy.drawLine(x + 40 * scale - camera.x, y + 25 * scale - camera.y, x + 60 * scale - camera.x, y + 40 * scale - camera.y);
		arduboy.drawLine(x + 60 * scale - camera.x, y + 40 * scale - camera.y, x + 80 * scale - camera.x, y + 120 * scale - camera.y);
		arduboy.drawLine(x + 80 * scale - camera.x, y + 120 * scale - camera.y, x + 120 * scale - camera.x, y + 140 * scale - camera.y);
		arduboy.drawLine(x + 120 * scale - camera.x, y + 140 * scale - camera.y, x + 200 * scale - camera.x, y + 180 * scale - camera.y);
	}
};
