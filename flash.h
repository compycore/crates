struct Flash: Simple
{
	Flash(float X, float Y)
	{
		x = X, y = Y;

		frameCount = 2;
		animFreq = 5;
	}

	void update()
	{
		animate();
	}

	void draw()
	{
		sketch(FLASH[curFrame]);
	}
};
