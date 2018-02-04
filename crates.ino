#include "globals.h"
#include "images.h"
#include "utils.h"
#include "svg.h"
#include "buffer.h"
#include "compycore.h"
#include "menu.h"
#include "entity.h"
#include "car.h"
#include "player.h"
#include "police.h"
#include "cactus.h"
#include "dust.h"

Compycore compycore;
Menu menu;
Player player;
GfxBuffer gfxBuffer;
SVG svg;
Police police;
Cactus cactus;

Vector<Dust> dust;

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

	// handle dust
	for (int i=0; i < dust.size(); i++) {
		if (dust[i].ttl>0) {
			dust[i].update();
			dust[i].draw();
		} else {
			dust.erase(i);
			i--;
		}
	}

	// generate more dust
	if (random(100)<4 && player.speed > 0) {
		dust.push_back(Dust(player.x+player.width/2-4, player.y+player.height/2-4, player.angle, player.speed/2));
	}

	cactus.update();
	cactus.draw(gfxBuffer);

	player.update();
	player.draw(gfxBuffer);
	player.collide(cactus.cbox);

	police.update();
	police.draw(gfxBuffer);
	police.collide(cactus.cbox);

	// make the camera follow the player
	camera.follow(player.x+player.width/2, player.y+player.height/2, 32, 24);

	// sort the draw buffer
	// gfxBuffer.sort();

	svg.map(0,0,2);

	// draw the draw buffer
	gfxBuffer.draw();

	// draw everything to the screen
	arduboy.display(CLEAR_BUFFER);
}
