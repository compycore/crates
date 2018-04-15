#include "globals.h"
#include "utils.h"
#include "compycore-image.h"
#include "compycore.h"
#include "qrcode-image.h"
#include "instructions-image.h"
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
#include "skid-image.h"
#include "skid.h"
#include "player-image.h"
#include "player.h"
#include "police-image.h"
#include "police.h"

Compycore compycore;
Menu menu;
Player player;
List<Police, 0> police;
Crate crate;

void setup()
{
	arduboy.boot(); // raw hardware
	arduboy.safeMode(); // light the RGB LED and screen if UP button is being held.
	arduboy.audio.begin();
}

void loop()
{
	// arduboy.setCursor(0,0);

	// arduboy setup for each frame
	if (!(arduboy.nextFrame())) return;
	arduboy.pollButtons();

	if (!(compycore.introduce())) return; // draw the intro logo if we haven't finished that already

	if (!(menu.show())) return; // show the menu if we haven't already picked an option

	// TODO spawn randomly or based on player performance
	if (!police.full()) {
		police.add(Police());
	}

	drawGrid();

	crate.update();
	crate.draw();

	drawLocator(crate.x, crate.y);

	player.update();
	player.draw();
	player.collide(crate.type, 0, crate.cbox);

	// handle police
	for (unsigned char i = 0; i < police.size(); i++)
	{
		// erase police if they have no health
		if (police[i].health == 0) {
			camera.shake();
			police.erase(i);
			i--;
			continue;
		}

		police[i].update();
		police[i].follow(player.x, player.y);
		police[i].draw();
		player.collide(police[i].type, police[i].damage, police[i].cbox);

		for (unsigned char j = 0; j < police.size(); j++)
		{
			if (j != i) {
				police[i].collide(police[j].type, police[j].damage, police[j].cbox);
			}
		}
	}

	camera.follow(player.x+player.width/2, player.y+player.height/2, 32, 24); // make the camera follow the player
	camera.update(); // apply camera shake

	arduboy.display(CLEAR_BUFFER); // draw everything to the screen
}
