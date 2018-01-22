#include <ArduinoSTL.h>
#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <Sprites.h>

Arduboy2Base arduboy;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites;

int rotationAngles = 13;

struct BufferEntity
{
	int x;
	int y;
	unsigned char sprite;
	int curFrame;

	BufferEntity(int X, int Y, unsigned char Sprite[], int CurFrame)
	{
		x = X;
		y = Y;
		sprite = Sprite;
		curFrame = CurFrame;
	}

	bool operator < (const BufferEntity& other) const
	{
		return (y < other.y);
	}

	void draw()
	{
		sprites.drawPlusMask(x, y, sprite, curFrame);
	}
};

std::vector<BufferEntity> buffer;
