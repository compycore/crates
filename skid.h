struct Skid: Entity
{
	Skid(float X, float Y, float Angle)
	{
		angle = Angle;
		x = X, y = Y;
		width = 8, height = 8;

		frameCount = rotationAngles - 1;
		curFrame = angleToFrame(angle, frameCount);

		ttl = 20;
	}

	void update()
	{
		ttl--;
	}

	void draw()
	{
		sketch(dust_plus_mask);
	}
};
