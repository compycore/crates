struct SVG
{
	void map(float x, float y, int scale)
	{
		arduboy.drawTriangle(x + 0 * scale - camera.x, y + 250 * scale - camera.y, x + 100 * scale - camera.x, y + 0 * scale - camera.y, x + 250 * scale - camera.x, y + 200 * scale - camera.y, WHITE);
		arduboy.drawTriangle(x + 250 * scale - camera.x, y + 200 * scale - camera.y, x + 400 * scale - camera.x, y + 0 * scale - camera.y, x + 500 * scale - camera.x, y + 350 * scale - camera.y, WHITE);
		arduboy.drawTriangle(x + 500 * scale - camera.x, y + 350 * scale - camera.y, x + 550 * scale - camera.x, y + 0 * scale - camera.y, x + 750 * scale - camera.x, y + 250 * scale - camera.y, WHITE);
	}
};
