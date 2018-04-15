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
#include "police.h"
#include "cop-image.h"
#include "cop.h"

Compycore compycore;
Menu menu;
Player player;
List<Cop, 3> cops;
List<Dust, 3> dust; // same dust count as police
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
	if (!cops.full()) {
		cops.add(Cop());
	}

	drawGrid();

	crate.update();
	crate.draw();

	player.update();
	player.draw();
	player.collide(crate.type, 0, crate.cbox);


	// handle dust
	for (uint8_t i = 0; i < dust.size(); i++)
	{
		if (dust[i].ttl > 0)
		{
			dust[i].update();
			dust[i].draw();
		}
		else
		{
			dust.erase(i);
			i--;
		}
	}

	// handle cop
	for (unsigned char i = 0; i < cops.size(); i++)
	{
		// erase cops if they have no health
		if (cops[i].health == 0) {
			camera.shake();
			dust.add(Dust(cops[i].x + cops[i].width / 2 - 4, cops[i].y + cops[i].height / 2 - 4, cops[i].angle, cops[i].speed / 2));
			cops.erase(i);
			i--;
			continue;
		}

		cops[i].update();
		cops[i].follow(player.x, player.y);
		cops[i].draw();
		drawLocator(cops[i].x, cops[i].y, cops[i].width, cops[i].height);
		player.collide(cops[i].type, cops[i].damage, cops[i].cbox);

		for (unsigned char j = 0; j < cops.size(); j++)
		{
			if (j != i) {
				cops[i].collide(cops[j].type, cops[j].damage, cops[j].cbox);
			}
		}
	}

	drawLocator(crate.x, crate.y, crate.width, crate.height, 2);

	camera.follow(player.x+player.width/2, player.y+player.height/2, 54, 27); // make the camera follow the player
	camera.update(); // apply camera shake

	arduboy.display(CLEAR_BUFFER); // draw everything to the screen
}
