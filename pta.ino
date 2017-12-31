#include "globals.h"
#include "utils.h"
#include "compycore.h"
#include "entity.h"
#include "player.h"

Compycore compycore;
Player player;

void setup()
{
	arduboy.boot(); // raw hardware
	arduboy.blank(); // blank the display

	arduboy.flashlight(); // light the RGB LED and screen if UP button is being held.

	// check for and handle buttons held during start up for system control
	arduboy.systemButtons();

	arduboy.audio.begin();

	// wait for all buttons to be released
	do
	{
		arduboy.delayShort(50);
	}
	while (arduboy.buttonsState());

	arduboy.initRandomSeed();
}

void loop()
{
	if (!(arduboy.nextFrame())) return;

	arduboy.pollButtons();

	arduboy.clear();

	if (!(compycore.introduce())) return;

	player.update();
	player.draw();
	// player.debug();

	arduboy.display();
}
