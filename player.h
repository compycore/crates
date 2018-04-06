struct Player: Car
{
	List<Skid, 5> skids; // skid count * everyXFrame (below) should be skid ttl

	Player()
	{
		angle = random(360);
		x = 20, y = 20;
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};
		frameCount = ANGLES - 1;
	}

	void update()
	{
		control();
		physics();
		updateCbox();
		updateAngle();

		// generate more dust
		if (random(100) < 2 && speed > 0)
		{
			if (dust.size() < dust.capacity())
			{
				dust.add(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
			}
		}

		// generate more skids
		if (arduboy.pressed(A_BUTTON) && speed > 0)
		{
			if (arduboy.everyXFrames(2))
			{
				if (skids.size() < skids.capacity())
				{
					skids.add(Skid(x, y, curFrame));
				}
			}
		}
	}

	void draw()
	{
		// handle skids
		for (uint8_t i = 0; i < skids.size(); i++)
		{
			if (skids[i].ttl > 0)
			{
				skids[i].update();
				skids[i].draw();
			}
			else
			{
				skids.erase(i);
				i--;
			}
		}

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

		arduboy.fillRect((int16_t) (x - camera.x + 4), (int16_t) (y - camera.y + 4), width - 8, height - 7, BLACK);
		sketch(PLAYER, curFrame);
	}
};
