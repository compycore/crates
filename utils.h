int angleToFrame(float angle, int frameCount)
{
	return int(angle / 360 * frameCount);
}

float normalizeAngle(float angle)
{
	angle = int(angle) % 360;

	if (angle < 0)
	{
		angle += 360;
	}

	return angle;
}
