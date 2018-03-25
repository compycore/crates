#include <Arduboy2.h>
#include <ArduboyTones.h>
#include "vector.h"
#include "camera.h"

Arduboy2Base arduboy;
//Arduboy2 arduboy; // for debug only
Arduboy2Audio audio;
ArduboyTones sound(arduboy.audio.enabled);
Camera camera;

// make an ArdBitmap instance that will use the given the screen buffer and dimensions
#define ARDBITMAP_SBUF arduboy.getBuffer()
#include <ArdBitmap.h>
ArdBitmap<WIDTH, HEIGHT> ardbitmap;

int ANGLES = 25;
