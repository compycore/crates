struct Player: Car
{
	// List<Skid, 5> skids; // skid count * everyXFrame (below) should be skid ttl
	bool hasCrate = false;
	uint8_t spiked = 0;
	float turnRate = 3.5;
	float maxReverseSpeed = -1;

	Player()
	{
		angle = random(360);
		x = random(LEVEL_SIZE), y = random(LEVEL_SIZE);
		width = 20, height = 16;
		cbox_conf = {.x = 5, .y = 4, .width = 10, .height = 10};
		frameCount = ANGLES - 1;
		health = 20;
		contain = true;
		type = 'P';
	}

	void increaseScore(uint8_t const &increase)
	{
		if (health) SCORE += increase;
	}

	void control()
	{
		if (health)
		{
			if (abs(speed) > turnSpeed)
			{
				// TODO does this need to be a local variable?
				float turnRateModifier = speed / maxSpeed - 1;

				if (arduboy.pressed(LEFT_BUTTON))
				{
					angle += turnRate + turnRateModifier;
				}
				else if (arduboy.pressed(RIGHT_BUTTON))
				{
					angle -= turnRate + turnRateModifier;
				}
			}

			// the arduboy has its butons flipped in my opinion
			if (arduboy.pressed(B_BUTTON))
			{
				accelerate();
			}
			else if (arduboy.pressed(A_BUTTON))
			{
				decelerate();
			}
		}
	}

	void decelerate()
	{
		if (speed > maxReverseSpeed)
		{
			speed -= accel * 2;

			/*
			// generate more skids
			if (arduboy.everyXFrames(2))
			{
			    if (!skids.full())
			    {
			        skids.add(Skid(x, y, curFrame));
			    }
			}
			*/
		}
	}

	bool callback(Solid const &other)
	{
		if (other.type == 'E') // normal police
		{
			SCORE = other.damage;

			if (health > other.damage)
			{
				health -= other.damage;
			}
			else
			{
				health = 0;
				speed = 0;
				// TODO maybe move this to .ino
				if (!dust.full()) dust.add(Dust(x + width / 2 - 4, y + height / 2 - 4, angle, speed / 2));
			}

			return false;
		}
		else if (other.type == 'C')
		{
			hasCrate = true;
			increaseScore(5);
			return true; // delete the crate
		}
		else if (other.type == 'D')
		{
			hasCrate = false;
			increaseScore(15);
			return true; // delete the drop point
		}
		else if (other.type == 'S') // spikes
		{
			spiked += 3; // seconds
			maxSpeed = 1; // cut max speed in half
			return true; // delete the spike
		}

		return false;
	}

	void update()
	{
		control();
		physics();
		updateCbox();
		updateAngle();

		// decrease the spike effect ttl 1 per second
		if (spiked && arduboy.everyXFrames(60))
		{
			spiked--;
		}
		else
		{
			maxSpeed = 2;
		};
	}

	void draw() const
	{
		/*
		// handle skids
		for (uint8_t i = 0; i < skids.size(); i++)
		{
		    if (skids[i].ttl)
		    {
		        skids[i].update();
		        skids[i].draw();
		    }
		    else
		    {
		        skids.erase(i);
		        if (i) i--;
		    }
		}
		*/

		if (health)
		{
			// TODO add flashing for when we get hit by an enemy
			arduboy.fillRect(int16_t(x - camera.x + 4), int16_t(y - camera.y + 4), width - 8, height - 7, BLACK); // ghetto mask
			sketch(PLAYER, curFrame);
		}
	}
};
