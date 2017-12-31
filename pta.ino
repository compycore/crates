#include "globals.h"
#include "utils.h"
#include "compycore.h"
#include "entity.h"
#include "player.h"
#include "enemy.h"

Compycore compycore;
Player player;

std::vector<Enemy> enemies;

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

	// ground
	arduboy.drawLine(0, ground,WIDTH,ground);
	arduboy.drawLine(0, ground+1,WIDTH,ground+1);
	fillRectPattern(0, ground+3, WIDTH, HEIGHT-ground-3);

	// spawn a new enemy
	if (random(100)<2) {
		enemies.push_back(Enemy());
	}

	player.drawScore();

	// do stuff with the enemies
	for(int i=0; i < enemies.size(); i++){
		if (enemies[i].x>(0-enemies[i].width)) {
			enemies[i].update();
			enemies[i].draw();
			// enemies[i].debug();

			if (arduboy.collide(player.collide, enemies[i].collide)) {
				player.score+=1000;
			}
		} else {
			// erase enemies when they're off the left of the screen
			enemies.erase(enemies.begin() + i);
			i--;
		}
	}

	player.update();
	player.draw();
	// player.debug();

	arduboy.display();
}
