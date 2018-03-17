struct Police: Car
{
	Vector<Flash, 1> flash;

	Police()
	{
		x = 50, y = 50;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		accel = 0.005;
		maxSpeed = 1.8;

		frameCount = ANGLES - 1;
	}

	void update()
	{
		physics();
		updateCbox();
		updateAngle();
		accelerate();

		// generate more flash
		if (random(100) < 2 && speed > 0)
		{
			flash.push_back(Flash(x + width / 2 - 4, y + height / 2 - 4, angle, speed));
		}
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		buffer(gfxBuffer, car_plus_mask);

		// TODO Make this a helper function
		// handle flash
		for (int i = 0; i < flash.size(); i++)
		{
			if (flash[i].ttl > 0)
			{
				flash[i].update();
				flash[i].draw();
			}
			else
			{
				flash.erase(i);
				i--;
			}
		}
	}
};
