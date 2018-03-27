struct Police: Car
{
	Vector<Flash, 1> flash;

	Police()
	{
		x = 50, y = 50;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		accel = 0.01;

		frameCount = ANGLES - 1;
	}

	void update()
	{
		physics();
		updateCbox();
		updateAngle();
		accelerate();

		// flash the lights
		if (arduboy.everyXFrames(22))
		{
			flash.push_back(Flash(x + width / 2 - 5, y + height / 2 - 7, angle, speed));
		}

		// generate more dust
		if (random(100) < 2 && speed > 0)
		{
			dust.push_back(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
		}
	}

	void draw()
	{
		// handle dust
		for (int i = 0; i < dust.size(); i++)
		{
			if (dust[i].ttl > 0)
			{
				dust[i].update();
				dust[i].draw();
			}
			else
			{
				dust.erase(i);
				i--;
			}
		}

		// TODO move this to the car class
		if (angle > 90 && angle < 270)
		{
			ardbitmap.drawCompressed(x - camera.x, y - camera.y, POLICE[curFrame], WHITE, ALIGN_NONE, MIRROR_HORIZONTAL);
		}
		else
		{
			ardbitmap.drawCompressed(x - camera.x, y - camera.y, POLICE[curFrame], WHITE, ALIGN_NONE, MIRROR_NONE);
		}

		// TODO maybe don't use a vector for this
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
