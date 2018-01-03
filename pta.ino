#include "globals.h"
#include "images.h"
#include "utils.h"
#include "compycore.h"
#include "entity.h"
#include "car.h"
#include "player.h"
#include "dust.h"

Compycore compycore;
Player player;

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
	if (!(arduboy.nextFrame())) return;

	arduboy.pollButtons();

	arduboy.clear();

	if (!(compycore.introduce())) return;

	for (int i=0; i < dust.size(); i++) {
		if (dust[i].ttl>0) {
			dust[i].update();
			dust[i].draw();
		} else {
			dust.erase(dust.begin()+i);
			i--;
		}
	}

	if (random(100)<2) {
		dust.push_back(Dust(player.x, player.y, player.angle, player.speed/2));
	}

	player.update();
	player.draw();
	// player.debug();

	arduboy.display();
}
