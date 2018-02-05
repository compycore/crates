struct GfxBufferEntity
{
	int x;
	int y;
	unsigned char *sprite;
	int curFrame;
	Rect cbox_conf;

	GfxBufferEntity(int X, int Y, unsigned char Sprite[], int CurFrame, Rect Cbox_conf)
	{
		x = X;
		y = Y;
		sprite = Sprite;
		curFrame = CurFrame;
		cbox_conf = Cbox_conf;
	}

	void draw()
	{
		sprites.drawPlusMask(x - camera.x, y - camera.y, sprite, curFrame);

		if (debug)
		{
			arduboy.drawRect(x + cbox_conf.x - 1 - camera.x, y + cbox_conf.y - 1 - camera.y, cbox_conf.width + 2, cbox_conf.height + 2, BLACK);
			arduboy.drawRect(x + cbox_conf.x + 1 - camera.x, y + cbox_conf.y + 1 - camera.y, cbox_conf.width - 2, cbox_conf.height - 2, BLACK);
			arduboy.drawRect(x + cbox_conf.x - camera.x, y + cbox_conf.y - camera.y, cbox_conf.width, cbox_conf.height);
		}
	}
};

// todo maybe make this an anonymous function in `sort()`
bool gfxBufferEntitySort(const GfxBufferEntity& e1, const GfxBufferEntity& e2)
{
	return e1.y < e2.y;
}

struct GfxBuffer
{
	Vector<GfxBufferEntity, 10> buffer;

	void add(GfxBufferEntity entity)
	{
		buffer.push_back(entity);
	}

	void sort()
	{
		// std::sort(buffer.begin(), buffer.end(), gfxBufferEntitySort);
	}

	void clear()
	{
		buffer.clear();
	}

	void draw()
	{
		for (int i = 0; i < buffer.size(); i++)
		{
			buffer[i].draw();
		}
	}
};
