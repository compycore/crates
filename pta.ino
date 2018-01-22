#include "globals.h"
#include "images.h"
#include "utils.h"
#include "compycore.h"
#include "entity.h"
#include "car.h"
#include "player.h"
#include "cactus.h"
#include "dust.h"

Compycore compycore;
Player player;
Cactus cactus;

std::vector<Dust> dust;

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
	arduboy.clear();

	// draw the intro logo if we haven't finished that already
	if (!(compycore.introduce())) return;

	// clear the draw buffer
	buffer.clear();

	// handle dust
	for (int i=0; i < dust.size(); i++) {
		if (dust[i].ttl>0) {
			dust[i].update();
			dust[i].draw();
			// dust[i].debug();
		} else {
			dust.erase(dust.begin()+i);
			i--;
		}
	}

	// generate more dust
	if (random(100)<8 && player.speed > 0) {
		dust.push_back(Dust(player.x+player.width/2, player.y+player.height/2, player.angle, player.speed/2));
	}

	cactus.update();
	cactus.draw();
	// cactus.debug();

	player.update();
	player.draw();
	player.collide(cactus.cbox);
	// player.debug();

	// sort the draw buffer
	std::sort(buffer.begin(), buffer.end(), sort);

	// draw the draw buffer
	for (int i=0; i < buffer.size(); i++) {
		buffer[i].draw();
	}

	// draw everything to the screen
	arduboy.display();
}
