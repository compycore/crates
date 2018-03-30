unsigned char angleToFrame(float angle, unsigned char frameCount)
{
	return (unsigned char)(angle / 360 * frameCount);
}

float normalizeAngle(float angle)
{
	angle = int(angle) % 360;

	if (angle < 0) angle += 360;

	return angle;
}

double findAngle(int x1, int y1, int x2, int y2)
{
	return atan2(y2 - y1, x1 - x2);
}
