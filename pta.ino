#include "globals.h"
#include "images.h"
#include "utils.h"
#include "compycore.h"
#include "entity.h"
#include "car.h"
#include "player.h"
#include "box.h"
#include "dust.h"

Compycore compycore;
Player player;
Box box;

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
			// dust[i].debug();
		} else {
			dust.erase(dust.begin()+i);
			i--;
		}
	}

	if (random(100)<8 && player.speed > 0) {
		dust.push_back(Dust(player.x+player.width/2, player.y+player.height/2, player.angle, player.speed/2));
	}

	box.update();
	box.draw();

	player.update();
	player.draw();
	player.debug();

	// preliminary solid collisions
	if (arduboy.collide(player.collide, box.collide)) {
		float translateX = 0;
		float translateY = 0;

		// find x translation distance
		if (player.collide.x<box.collide.x) {
			translateX=(box.collide.x-player.cbox.width-player.cbox.x+1)-player.x;
		} else {
			translateX=(box.collide.x+box.cbox.width-player.cbox.x)-player.x;
		}

		// find y translation distance
		if (player.collide.y<box.collide.y) {
			translateY=(box.collide.y-player.cbox.height-player.cbox.y+1)-player.y;
		} else {
			translateY=(box.collide.y+box.cbox.height-player.cbox.y)-player.y;
		}

		// apply the translation
		if (abs(translateX) < abs(translateY)) {
			player.x+=translateX;
		} else {
			player.y+=translateY;
		}
	}

	arduboy.display();
}
