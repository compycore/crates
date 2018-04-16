// general global variables
uint8_t ANGLES = 25;
uint16_t LEVEL_WIDTH = 500;
uint16_t LEVEL_HEIGHT = 500;
uint16_t SCORE = 0;

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

// general image imports
#include "numbers-image.h"
#include "qrcode-image.h"
#include "instructions-image.h"

// camera setup (used in in a couple functions in utils.h)
#include "camera.h"
Camera camera;

// general engine imports
#include "utils.h"
#include "list.h"
#include "simple.h"
#include "entity.h"
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
List<Dust, 4> dust; // same dust count as police with one additional for the player

#include "cop-image.h"
#include "cop.h"
List<Cop, 3> cops;

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
