#include <ArduinoSTL.h>
#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <Sprites.h>

Arduboy2Base arduboy;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites;

int ground = HEIGHT - 12;
