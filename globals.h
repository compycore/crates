// general global variables
uint16_t SCORE = 0;
char VISUAL_SCORE[6];
uint8_t const PROGMEM ANGLES = 25;
uint16_t const PROGMEM LEVEL_SIZE = 400;
uint8_t const PROGMEM GRID_SIZE = LEVEL_SIZE / 5;

// library imports
#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <Sprites.h>

// library instantiation
Arduboy2Base arduboy;
// Arduboy2 arduboy; // for debug only
Arduboy2Audio audio;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites;  // Use this to optimize for execution speed
// SpritesB sprites; // Use this to (likely) optimize for code size

// #include "cactus-image.h"
// #include "cactus.h"

// general image imports
#include "numbers-image.h"
#include "qrcode-image.h"
#include "instructions-image.h"

// camera setup (used in in a couple functions in utils.h)
#include "camera.h"
Camera camera;

// general engine class imports
#include "simple.h"
#include "entity.h"
#include "solid.h"

// engine utility imports
#include "list.h"
#include "collisions.h"
#include "utils.h"

// specialty engine class imports
#include "car.h"
#include "police.h"

// piece import and instantiation
#include "compycore-image.h"
#include "compycore.h"
Compycore compycore;

#include "menu-image.h"
#include "menu.h"
Menu menu;

#include "dust-image.h"
#include "dust.h"
List<Dust, 11> dust; // same dust count as police with one additional for the player

#include "spike-image.h"
#include "spike.h"
List<Spike, 5> spikes;

#include "cop-image.h"
#include "cop.h"
List<Cop, 5> cops;

#include "swat-image.h"
#include "swat.h"
List<Swat, 5> swat;

// #include "skid-image.h"
// #include "skid.h"

// player needs to be after dust because it can create dust
#include "player-image.h"
#include "player.h"
Player player;

#include "crate-image.h"
#include "crate.h"
Crate crate;

#include "drop-image.h"
#include "drop.h"
Drop drop;

#include "busted-image.h"
#include "busted.h"
Busted busted;
