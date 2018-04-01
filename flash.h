struct Flash: Simple
{
	Flash()
	{
		frameCount = 2;
		animFreq = 5;
	}

	void update()
	{
		animate();
	}

	void draw()
	{
		// sketch(FLASH[curFrame]);
	}
};
