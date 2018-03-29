struct Solid: Simple
{
	Rect cbox_conf = {.x = 0, .y = 0, .width = width, .height = height}; // used for cbox offset and size
	Rect cbox; // used to actually calculate collisions

	void updateCbox()
	{
		cbox = {.x = x + cbox_conf.x, .y = y + cbox_conf.y, .width = cbox_conf.width, .height = cbox_conf.height};
	}

	void collide(Rect other)
	{
		// preliminary solid collisions
		if (arduboy.collide(cbox, other))
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
	}
};
