struct Police: Car
{
	Flash flash;

	Police()
	{
		// TODO generate anywhere off the current screen
		x = random(300), y = random(300);
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		accel = 0.01 + (1 / (5 + random(5)));
		followTurnRate = followTurnRate + (1 / (40 + random(10)));

		frameCount = ANGLES - 1;

		flash = Flash();
	}

	void update()
	{
		physics();
		updateCbox();
		updateAngle();
		accelerate();

		// position the light flash
		flash.x = x + width / 2 - 8;
		flash.y = y + height / 2 - 6;

		// generate more dust
		if (random(100) < 2 && speed > 0)
		{
			if (dust.size() < dust.capacity())
			{
				dust.push_back(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
			}
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

		if (angle > 90 && angle < 270)
		{
			sketch(POLICE[curFrame], WHITE, MIRROR_HORIZONTAL);
			sketch(POLICE_MASK[curFrame], BLACK, MIRROR_HORIZONTAL);
		}
		else
		{
			sketch(POLICE[curFrame]);
			sketch(POLICE_MASK[curFrame], BLACK);
		}

		flash.update();
		flash.draw();
	}
};
