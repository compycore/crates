#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <Sprites.h>
#include "vector.h"
#include "camera.h"

Arduboy2Base arduboy;
//Arduboy2 arduboy; // for debug only
Arduboy2Audio audio;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites;
Camera camera;

bool DEBUG = false;
int ANGLES = 25;
