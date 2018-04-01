struct Police: Car
{
	Police()
	{
		// TODO generate anywhere off the current screen
		x = random(300), y = random(300);
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};

		accel = 0.01 + (1 / (5 + random(5)));
		followTurnRate = followTurnRate + (1 / (40 + random(10)));

		frameCount = ANGLES - 1;
	}

	void update()
	{
		physics();
		updateCbox();
		updateAngle();
		accelerate();

		// generate more dust
		if (random(100) < 2 && speed > 0)
		{
			if (dust.size() < dust.capacity())
			{
				dust.add(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
			}
		}
	}

	void draw()
	{
		/*
		// handle dust
		for (uint8_t i = 0; i < dust.size(); i++)
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
		*/

		//if (angle > 90 && angle < 270)
		//{
		//sketch(POLICE[curFrame], WHITE, MIRROR_HORIZONTAL);
		//}
		//else
		//{
		// sketch(POLICE[curFrame]);
		//}

		// flash the lights
		if (arduboy.everyXFrames(5))
		{
			arduboy.fillRect(x - camera.x + width / 2 - 5, y - camera.y + height / 2 - 7, 10, 4, WHITE);
		}
	}
};
