struct GfxBufferEntity
{
	int x;
	int y;
	unsigned char *sprite;
	int curFrame;

	GfxBufferEntity(int X, int Y, unsigned char Sprite[], int CurFrame)
	{
		x = X;
		y = Y;
		sprite = Sprite;
		curFrame = CurFrame;
	}

	void draw()
	{
		sprites.drawPlusMask(x, y, sprite, curFrame);
	}
};

// todo maybe make this an anonymous function in `sort()`
bool gfxBufferEntitySort(const GfxBufferEntity& e1, const GfxBufferEntity& e2)
{
	return e1.y < e2.y;
}

struct GfxBuffer
{
	std::vector<GfxBufferEntity> buffer;

	void add(GfxBufferEntity entity)
	{
		buffer.push_back(entity);
	}

	void sort()
	{
		std::sort(buffer.begin(), buffer.end(), gfxBufferEntitySort);
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
