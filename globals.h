uint8_t ANGLES = 25;
uint16_t LEVEL_WIDTH = 500;
uint16_t LEVEL_HEIGHT = 500;

uint16_t score = 0;

#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <Sprites.h>
#include "list.h"
#include "camera.h"

Arduboy2Base arduboy;
// Arduboy2 arduboy; // for debug only
Arduboy2Audio audio;
ArduboyTones sound(arduboy.audio.enabled);
Camera camera;
Sprites sprites;  // Use this to optimize for execution speed
// SpritesB sprites; // Use this to (likely) optimize for code size
