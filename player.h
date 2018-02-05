struct Player: Car
{
	Vector<Dust, 3> dust;
	Vector<Skid, 15> skids; // skid ttl and vector size should match

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

		// generate more dust
		if (random(100) < 2 && speed > 0)
		{
			dust.push_back(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
		}

		// handle skids
		for (int i = 0; i < skids.size(); i++)
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

		// generate more skids
		if (arduboy.pressed(B_BUTTON))
		{
			skids.push_back(Skid(x, y, curFrame));
		}
	}

	void draw(GfxBuffer &gfxBuffer)
	{
		buffer(gfxBuffer, car_plus_mask);
	}
};
