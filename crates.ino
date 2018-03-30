#include "globals.h"
#include "utils.h"
#include "svg.h"
#include "compycore-image.h"
#include "compycore.h"
#include "qrcode-image.h"
#include "menu-image.h"
#include "menu.h"
#include "simple.h"
#include "entity.h"
#include "dust-image.h"
#include "dust.h"
#include "car.h"
#include "cactus-image.h"
#include "cactus.h"
#include "crate-image.h"
#include "crate.h"
#include "flash-image.h"
#include "flash.h"
#include "skid-image.h"
#include "skid.h"
#include "player-image.h"
#include "player-mask.h"
#include "player.h"
#include "police-image.h"
#include "police-mask.h"
#include "police.h"

Compycore compycore;
Menu menu;
SVG svg;
Player player;
Vector<Police, 5> police;
Cactus cactus;
Crate crate;

void setup()
{
	arduboy.boot(); // raw hardware
	arduboy.safeMode(); // light the RGB LED and screen if UP button is being held.
	arduboy.audio.begin();
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

	// TODO don't use a magic number
	// TODO spawn randomly or based on player performance
	if (police.size() < police.capacity()) {
		police.push_back(Police());
	}

	// draw the map lines
	svg.map(0,0,1);

	cactus.draw();

	crate.update();
	crate.draw();

	player.update();
	player.draw();
	player.collide(crate.cbox);

	// handle police
	for (int i = 0; i < police.size(); i++)
	{
		police[i].update();
		police[i].follow(player.x, player.y);
		police[i].draw();
		police[i].collide(player.cbox);

		for (int j = 0; j < police.size(); j++)
		{
			if (j != i) {
				police[i].collide(police[j].cbox);
			}
		}
	}

	// make the camera follow the player
	camera.follow(player.x+player.width/2, player.y+player.height/2, 32, 24);

	// draw everything to the screen
	arduboy.display(CLEAR_BUFFER);
}
