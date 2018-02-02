#include <ArduinoSTL.h>
#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <Sprites.h>
#include "camera.h"

Arduboy2Base arduboy;
// Arduboy2 arduboy;
Arduboy2Audio audio;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites;
Camera camera;

bool debug = false;
int rotationAngles = 25;
