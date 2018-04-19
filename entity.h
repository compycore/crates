struct Entity: Simple
{
	char type = 'G'; // a generic type indicator
	uint8_t width = 0, height = 0;

	Rect cbox_conf = {.x = 0, .y = 0, .width = width, .height = height}; // used for cbox offset and size
	Rect cbox; // used to actually calculate collisions

	uint8_t ttl = 0;

	float angle = 0;
	float speed = 0;
	float maxSpeed = 2;

	void physics()
	{
		// apply momentum according to the current angle
		x += speed * cos(angle * 1000 / 57296);
		y -= speed * sin(angle * 1000 / 57296);

		// contain to the screen
		if (x < 0)
		{
			x = 0;
		}
		else if (x + width > LEVEL_SIZE)
		{
			x = LEVEL_SIZE - width;
		}

		// contain to the screen
		if (y < 0)
		{
			y = 0;
		}
		else if (y + height > LEVEL_SIZE)
		{
			y = LEVEL_SIZE - height;
		}
	}

	void updateCbox()
	{
		cbox = {.x = x + cbox_conf.x, .y = y + cbox_conf.y, .width = cbox_conf.width, .height = cbox_conf.height};
	}

	// provide a skeleton collision callback function so there always is one
	virtual bool callback(char type, uint8_t damage)
	{
		return false;  // return false if the object isn't deleted because of the collision
	}

	bool collide(char const &type, uint8_t const &damage, Rect const &other)
	{
		if (arduboy.collide(cbox, other)) // preliminary solid collisions
		{
			bool cb = callback(type, damage);

			if (!cb) // don't go to the trouble of separating objects if the object in question gets deleted because of the simple collision check
			{
				float translateX = 0;
				float translateY = 0;

				// find x translation distance
				if (cbox.x < other.x)
				{
					translateX = (other.x - cbox_conf.width - cbox_conf.x + 1) - x;
				}
				else
				{
					translateX = (other.x + other.width - cbox_conf.x) - x;
				}

				// find y translation distance
				if (cbox.y < other.y)
				{
					translateY = (other.y - cbox_conf.height - cbox_conf.y + 1) - y;
				}
				else
				{
					translateY = (other.y + other.height - cbox_conf.y) - y;
				}

				// apply the translation
				if (abs(translateX) < abs(translateY))
				{
					x += translateX;
				}
				else
				{
					y += translateY;
				}
			}

			return cb;
		}

		return false; // return false if there wasn't a collision at all
	}
};
