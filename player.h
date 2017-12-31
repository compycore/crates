const unsigned char PROGMEM car_plus_mask[] =
{
// width, height,
	20, 16,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x10, 0xf0, 0xa0, 0xe0, 0x38, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x88, 0xf8, 0x18, 0xf8, 0xa0, 0xe0, 0x20, 0xe0, 0x60, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x10, 0x1f, 0x36, 0x3f, 0x22, 0x3f, 0x63, 0x7f, 0x63, 0x7f, 0x37, 0x3f, 0x17, 0x1f,
	0x17, 0x1f, 0x37, 0x3f, 0x23, 0x3f, 0x62, 0x7f, 0x62, 0x7f, 0x22, 0x3f, 0x10, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,

// FRAME 01
	0x00, 0x00, 0xc0, 0xc0, 0xe0, 0xe0, 0x40, 0xc0, 0x70, 0xf0, 0x18, 0xf8, 0xc8, 0xf8, 0xa8, 0xf8, 0x28, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0x90, 0xf0, 0x30, 0xf0, 0x20, 0xe0, 0x60, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x08, 0x0f, 0x1b, 0x1f, 0x36, 0x3f, 0x20, 0x3f, 0x2d, 0x3f, 0x46, 0x7f, 0x43, 0x7f, 0x42, 0x7f,
	0x26, 0x3f, 0x17, 0x1f, 0x13, 0x1f, 0x13, 0x1f, 0x21, 0x3f, 0x31, 0x3f, 0x10, 0x1f, 0x0f, 0x0f, 0x06, 0x06, 0x00, 0x00,

// FRAME 02
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x30, 0xf0, 0xd0, 0xf0, 0x88, 0xf8, 0xa8, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0xb0, 0xf0, 0x20, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x1f, 0x1f, 0x30, 0x3f, 0x2e, 0x3f, 0x2e, 0x3f, 0x2c, 0x3f, 0x6c, 0x7f, 0x41, 0x7f,
	0x46, 0x7f, 0x42, 0x7f, 0x73, 0x7f, 0x13, 0x1f, 0x10, 0x1f, 0x18, 0x1f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 03
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0x08, 0xf8, 0xa8, 0xf8, 0xa8, 0xf8,
	0xa8, 0xf8, 0xa8, 0xf8, 0x08, 0xf8, 0x78, 0xf8, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x40, 0x7f, 0x4c, 0x7f, 0x4c, 0x7f, 0x4c, 0x7f,
	0x44, 0x7f, 0x4c, 0x7f, 0x4c, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 04
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x20, 0xe0, 0xb0, 0xf0, 0x18, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0xa8, 0xf8, 0xa8, 0xf8, 0x88, 0xf8, 0xd0, 0xf0, 0x30, 0xf0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x18, 0x1f, 0x10, 0x1f, 0x13, 0x1f, 0x73, 0x7f, 0x42, 0x7f, 0x46, 0x7f,
	0x41, 0x7f, 0x6c, 0x7f, 0x2c, 0x3f, 0x26, 0x3f, 0x2e, 0x3f, 0x30, 0x3f, 0x1f, 0x1f, 0x1c, 0x1c, 0x00, 0x00, 0x00, 0x00,

// FRAME 05
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0xe0, 0x20, 0xe0, 0x30, 0xf0, 0x90, 0xf0, 0x18, 0xf8, 0x08, 0xf8, 0x28, 0xf8,
	0xa8, 0xf8, 0x28, 0xf8, 0xa8, 0xf8, 0xc8, 0xf8, 0x18, 0xf8, 0x70, 0xf0, 0x40, 0xc0, 0xe0, 0xe0, 0xc0, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x0f, 0x0f, 0x10, 0x1f, 0x31, 0x3f, 0x21, 0x3f, 0x13, 0x1f, 0x13, 0x1f, 0x17, 0x1f, 0x26, 0x3f,
	0x42, 0x7f, 0x43, 0x7f, 0x44, 0x7f, 0x2c, 0x3f, 0x20, 0x3f, 0x36, 0x3f, 0x1b, 0x1f, 0x08, 0x0f, 0x07, 0x07, 0x00, 0x00,

// FRAME 06
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0xe0, 0x20, 0xe0, 0xa0, 0xe0, 0x18, 0xf8, 0x88, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x38, 0xf8, 0xa0, 0xe0, 0x10, 0xf0, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x10, 0x1f, 0x22, 0x3f, 0x62, 0x7f, 0x62, 0x7f, 0x23, 0x3f, 0x37, 0x3f, 0x17, 0x1f,
	0x17, 0x1f, 0x37, 0x3f, 0x63, 0x7f, 0x62, 0x7f, 0x22, 0x3f, 0x36, 0x3f, 0x10, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,

// FRAME 07
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0xc0, 0x60, 0xe0, 0x38, 0xf8, 0x48, 0xf8, 0xc8, 0xf8, 0x08, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0x1c, 0xfc, 0x48, 0xf8, 0x08, 0xf8, 0x10, 0xf0, 0x10, 0xf0, 0x20, 0xe0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x0b, 0x0f, 0x18, 0x1f, 0x30, 0x3f, 0x20, 0x3f, 0x6d, 0x7f, 0x46, 0x7f, 0x42, 0x7f, 0x67, 0x7f,
	0x36, 0x3f, 0x17, 0x1f, 0x13, 0x1f, 0x23, 0x3f, 0x21, 0x3f, 0x31, 0x3f, 0x1b, 0x1f, 0x0d, 0x0f, 0x07, 0x07, 0x00, 0x00,

// FRAME 08
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x70, 0xf0, 0x90, 0xf0, 0xc8, 0xf8, 0xc8, 0xf8, 0xb4, 0xfc,
	0x2c, 0xfc, 0x28, 0xf8, 0x48, 0xf8, 0x88, 0xf8, 0x98, 0xf8, 0x10, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x3f, 0x3f, 0x20, 0x3f, 0x28, 0x3f, 0x2c, 0x3f, 0x40, 0x7f, 0x40, 0x7f, 0x40, 0x7f,
	0x46, 0x7f, 0x43, 0x7f, 0x73, 0x7f, 0x13, 0x1f, 0x10, 0x1f, 0x18, 0x1f, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 09
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0x08, 0xf8, 0xb8, 0xf8, 0xb8, 0xf8,
	0xb8, 0xf8, 0xb8, 0xf8, 0x08, 0xf8, 0x78, 0xf8, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x4c, 0x7f,
	0x4c, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 10
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x10, 0xf0, 0x98, 0xf8, 0x88, 0xf8, 0x48, 0xf8, 0x28, 0xf8, 0x2c, 0xfc,
	0xb4, 0xfc, 0xc8, 0xf8, 0xc8, 0xf8, 0x90, 0xf0, 0x70, 0xf0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x1f, 0x10, 0x1f, 0x13, 0x1f, 0x73, 0x7f, 0x43, 0x7f, 0x44, 0x7f,
	0x40, 0x7f, 0x48, 0x7f, 0x40, 0x7f, 0x2c, 0x3f, 0x28, 0x3f, 0x20, 0x3f, 0x3f, 0x3f, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,

// FRAME 11
	0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x20, 0xe0, 0x50, 0xf0, 0x10, 0xf0, 0x08, 0xf8, 0x48, 0xf8, 0x1c, 0xfc, 0x28, 0xf8,
	0xa8, 0xf8, 0x08, 0xf8, 0xc8, 0xf8, 0x48, 0xf8, 0x38, 0xf8, 0x60, 0xe0, 0x40, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x0d, 0x0f, 0x1b, 0x1f, 0x31, 0x3f, 0x21, 0x3f, 0x23, 0x3f, 0x13, 0x1f, 0x17, 0x1f, 0x36, 0x3f,
	0x67, 0x7f, 0x42, 0x7f, 0x46, 0x7f, 0x6d, 0x7f, 0x20, 0x3f, 0x30, 0x3f, 0x18, 0x1f, 0x0b, 0x0f, 0x07, 0x07, 0x00, 0x00,
};

typedef struct Player: Entity
{
	Player()
	{
		angle = 0;
		x = WIDTH / 2, y = HEIGHT / 2;
		width = 16, height = 16;
		cbox = {.x = 4, .y = 8, .width = 8, .height = 8};

		momX = 0, momY = 0;
		turnSpeed = 3;
		accel = 0.05;

		frameCount = 12;
		curFrame = 0;
		animFreq = 3;
	}

	void update()
	{
		control();
		physics();
		updateCollide();
	}

	void draw()
	{
		sketch(car_plus_mask);
	}

	void control()
	{
		if (arduboy.pressed(LEFT_BUTTON))
		{
			angle += turnSpeed;
		}
		else if (arduboy.pressed(RIGHT_BUTTON))
		{
			angle -= turnSpeed;
		}

		angle = normalizeAngle(angle);

		if (arduboy.pressed(A_BUTTON))
		{
			accelerate();
		}

		curFrame = angleToFrame(angle, frameCount);
	}
};
