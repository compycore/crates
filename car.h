struct Car: Entity
{
	float turnRate = 3.5;
	float followTurnRate = 0.05;
	// the speed you must reach before turning is allowed
	float turnSpeed = 0.35;
	float accel = 0.02;
	float maxReverseSpeed = -1;

	void accelerate()
	{
		if (speed > 0)
		{
			speed += accel;
		}
		else
		{
			speed += accel * 4;
		}

		if (speed > maxSpeed) speed = maxSpeed;
	}

	void decelerate()
	{
		if (speed > maxReverseSpeed) speed -= accel * 2;
	}

	void updateAngle()
	{
		angle = normalizeAngle(angle);
		curFrame = angleToFrame(angle, frameCount);
	}
};
