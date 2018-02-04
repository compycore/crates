struct SVG
{
	void map(float x, float y, int scale)
	{
		arduboy.drawLine(x + 0 * scale - camera.x, y + 0 * scale - camera.y, x + 40 * scale - camera.x, y + 25 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 40 * scale - camera.x, y + 25 * scale - camera.y, x + 60 * scale - camera.x, y + 40 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 60 * scale - camera.x, y + 40 * scale - camera.y, x + 80 * scale - camera.x, y + 120 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 80 * scale - camera.x, y + 120 * scale - camera.y, x + 120 * scale - camera.x, y + 140 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 120 * scale - camera.x, y + 140 * scale - camera.y, x + 200 * scale - camera.x, y + 180 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 200 * scale - camera.x, y + 180 * scale - camera.y, x + 300 * scale - camera.x, y + 300 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 300 * scale - camera.x, y + 300 * scale - camera.y, x + 500 * scale - camera.x, y + 300 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 500 * scale - camera.x, y + 300 * scale - camera.y, x + 800 * scale - camera.x, y + 350 * scale - camera.y, BLACK);
		arduboy.drawLine(x + 800 * scale - camera.x, y + 350 * scale - camera.y, x + 1000 * scale - camera.x, y + 500 * scale - camera.y, BLACK);
	}
};
