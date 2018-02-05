#include "globals.h"
#include "images.h"
#include "utils.h"
#include "svg.h"
#include "buffer.h"
#include "compycore.h"
#include "menu.h"
#include "simple.h"
#include "entity.h"
#include "car.h"
#include "cactus.h"
#include "dust.h"
#include "skid.h"
#include "player.h"
#include "police.h"

Compycore compycore;
Menu menu;
Player player;
Police police;
GfxBuffer gfxBuffer;
SVG svg;
Cactus cactus;

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
	// arduboy setup for each frame
	if (!(arduboy.nextFrame())) return;
	arduboy.pollButtons();

	// draw the intro logo if we haven't finished that already
	if (!(compycore.introduce())) return;

	// show the menu if we haven't already picked an option
	if (!(menu.show())) return;

	arduboy.fillScreen();

	// clear the draw buffer
	gfxBuffer.clear();

	cactus.update();
	cactus.draw(gfxBuffer);

	player.update();
	player.draw(gfxBuffer);
	player.collide(cactus.cbox);

	police.update();
	police.follow(player.x, player.y);
	police.draw(gfxBuffer);

	// make the camera follow the player
	camera.follow(player.x+player.width/2, player.y+player.height/2, 32, 24);

	// draw the map lines
	svg.map(0,0,2);

	// draw the draw buffer
	gfxBuffer.draw();

	// draw everything to the screen
	arduboy.display(CLEAR_BUFFER);
}
