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
	unsigned char *sprite;
	int curFrame;

	BufferEntity(int X, int Y, unsigned char Sprite[], int CurFrame)
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

std::vector<BufferEntity> buffer;

bool sort(const BufferEntity& e1, const BufferEntity& e2)
{
	return e1.y < e2.y;
}
