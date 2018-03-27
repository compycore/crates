#include "globals.h"
#include "images.h"
#include "utils.h"
#include "svg.h"
#include "compycore-image.h"
#include "compycore.h"
#include "menu-image.h"
#include "menu.h"
#include "simple.h"
#include "entity.h"
#include "dust.h"
#include "car.h"
#include "cactus.h"
#include "crate.h"
#include "flash.h"
#include "skid.h"
#include "player.h"
#include "police.h"

Compycore compycore;
Menu menu;
SVG svg;
Player player;
Police police;
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

	// draw the map lines
	svg.map(0,0,2);

	cactus.draw();

	crate.update();
	crate.draw();

	player.update();
	player.draw();
	player.collide(crate.cbox);

	police.update();
	police.follow(player.x, player.y);
	police.draw();
	police.collide(player.cbox);

	// make the camera follow the player
	camera.follow(player.x+player.width/2, player.y+player.height/2, 32, 24);

	// draw everything to the screen
	arduboy.display(CLEAR_BUFFER);
}
