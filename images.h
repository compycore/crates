const unsigned char PROGMEM car_plus_mask[] =
{
// width, height,
	20, 16,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x10, 0xf0, 0xa0, 0xe0, 0x38, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x88, 0xf8, 0x18, 0xf8, 0xa0, 0xe0, 0x20, 0xe0, 0x60, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x10, 0x1f, 0x36, 0x3f, 0x22, 0x3f, 0x63, 0x7f, 0x63, 0x7f, 0x37, 0x3f, 0x17, 0x1f,
	0x17, 0x1f, 0x37, 0x3f, 0x23, 0x3f, 0x60, 0x7f, 0x62, 0x7f, 0x22, 0x3f, 0x10, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,

// FRAME 01
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x20, 0xe0, 0xb0, 0xf0, 0x18, 0xf8, 0x48, 0xf8, 0x28, 0xf8, 0xa8, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x48, 0xf8, 0x30, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x60, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x03, 0x0f, 0x0f, 0x32, 0x3f, 0x10, 0x1f, 0x36, 0x3f, 0x62, 0x7f, 0x43, 0x7f, 0x42, 0x7f, 0x36, 0x3f,
	0x17, 0x1f, 0x17, 0x1f, 0x17, 0x1f, 0x23, 0x3f, 0x20, 0x3f, 0x21, 0x3f, 0x10, 0x1f, 0x0b, 0x0f, 0x0f, 0x0f, 0x00, 0x00,

// FRAME 02
	0x00, 0x00, 0xc0, 0xc0, 0xe0, 0xe0, 0x40, 0xc0, 0x70, 0xf0, 0x18, 0xf8, 0xc8, 0xf8, 0xa8, 0xf8, 0x28, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0x90, 0xf0, 0x30, 0xf0, 0x20, 0xe0, 0x60, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x08, 0x0f, 0x1b, 0x1f, 0x36, 0x3f, 0x20, 0x3f, 0x2d, 0x3f, 0x46, 0x7f, 0x43, 0x7f, 0x42, 0x7f,
	0x26, 0x3f, 0x17, 0x1f, 0x13, 0x1f, 0x13, 0x1f, 0x21, 0x3f, 0x31, 0x3f, 0x10, 0x1f, 0x0f, 0x0f, 0x06, 0x06, 0x00, 0x00,

// FRAME 03
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0xc0, 0x70, 0xf0, 0x10, 0xf0, 0xd0, 0xf0, 0xa8, 0xf8, 0xa8, 0xf8, 0x28, 0xf8,
	0xa8, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0xd0, 0xf0, 0xb0, 0xf0, 0xa0, 0xe0, 0x20, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x10, 0x1f, 0x16, 0x1f, 0x2e, 0x3f, 0x2e, 0x3f, 0x20, 0x3f, 0x4d, 0x7f, 0x46, 0x7f,
	0x42, 0x7f, 0x67, 0x7f, 0x1b, 0x1f, 0x13, 0x1f, 0x11, 0x1f, 0x10, 0x1f, 0x18, 0x1f, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00,

// FRAME 04
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x30, 0xf0, 0xd0, 0xf0, 0x88, 0xf8, 0xa8, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0xb0, 0xf0, 0x20, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x1f, 0x1f, 0x30, 0x3f, 0x2e, 0x3f, 0x2e, 0x3f, 0x2c, 0x3f, 0x6c, 0x7f, 0x41, 0x7f,
	0x46, 0x7f, 0x42, 0x7f, 0x73, 0x7f, 0x13, 0x1f, 0x10, 0x1f, 0x18, 0x1f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 05
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x10, 0xf0, 0x88, 0xf8, 0xa8, 0xf8, 0xa8, 0xf8,
	0xa8, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x88, 0xf8, 0x18, 0xf8, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x20, 0x3f, 0x2e, 0x3f, 0x2c, 0x3f, 0x6c, 0x7f, 0x4c, 0x7f,
	0x4d, 0x7f, 0x40, 0x7f, 0x43, 0x7f, 0x79, 0x7f, 0x08, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 06
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0x08, 0xf8, 0xa8, 0xf8, 0xa8, 0xf8,
	0xa8, 0xf8, 0xa8, 0xf8, 0x08, 0xf8, 0x78, 0xf8, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x40, 0x7f, 0x4c, 0x7f, 0x4c, 0x7f, 0x4c, 0x7f,
	0x48, 0x7f, 0x4c, 0x7f, 0x4c, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 07
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x18, 0xf8, 0x88, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0xa8, 0xf8,
	0xa8, 0xf8, 0xa8, 0xf8, 0x88, 0xf8, 0x10, 0xf0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x08, 0x0f, 0x79, 0x7f, 0x43, 0x7f, 0x40, 0x7f, 0x4d, 0x7f,
	0x44, 0x7f, 0x6c, 0x7f, 0x2c, 0x3f, 0x2a, 0x3f, 0x20, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 08
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x20, 0xe0, 0xb0, 0xf0, 0x18, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0xa8, 0xf8, 0xa8, 0xf8, 0x88, 0xf8, 0xd0, 0xf0, 0x30, 0xf0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x18, 0x1f, 0x10, 0x1f, 0x13, 0x1f, 0x73, 0x7f, 0x42, 0x7f, 0x46, 0x7f,
	0x41, 0x7f, 0x6c, 0x7f, 0x2c, 0x3f, 0x26, 0x3f, 0x2e, 0x3f, 0x30, 0x3f, 0x1f, 0x1f, 0x1c, 0x1c, 0x00, 0x00, 0x00, 0x00,

// FRAME 09
	0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x20, 0xe0, 0xa0, 0xe0, 0xb0, 0xf0, 0xd0, 0xf0, 0x08, 0xf8, 0x08, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0xa8, 0xf8, 0xa8, 0xf8, 0xd0, 0xf0, 0x10, 0xf0, 0x70, 0xf0, 0x40, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x1f, 0x10, 0x1f, 0x11, 0x1f, 0x13, 0x1f, 0x1b, 0x1f, 0x67, 0x7f, 0x42, 0x7f,
	0x46, 0x7f, 0x4d, 0x7f, 0x20, 0x3f, 0x2e, 0x3f, 0x2e, 0x3f, 0x12, 0x1f, 0x10, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,

// FRAME 10
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0xe0, 0x20, 0xe0, 0x30, 0xf0, 0x90, 0xf0, 0x18, 0xf8, 0x08, 0xf8, 0x28, 0xf8,
	0xa8, 0xf8, 0x28, 0xf8, 0xa8, 0xf8, 0xc8, 0xf8, 0x18, 0xf8, 0x70, 0xf0, 0x40, 0xc0, 0xe0, 0xe0, 0xc0, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x0f, 0x0f, 0x10, 0x1f, 0x31, 0x3f, 0x21, 0x3f, 0x13, 0x1f, 0x13, 0x1f, 0x17, 0x1f, 0x26, 0x3f,
	0x42, 0x7f, 0x43, 0x7f, 0x44, 0x7f, 0x2c, 0x3f, 0x20, 0x3f, 0x36, 0x3f, 0x1b, 0x1f, 0x08, 0x0f, 0x07, 0x07, 0x00, 0x00,

// FRAME 11
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0xe0, 0x30, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x48, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0xa8, 0xf8, 0x28, 0xf8, 0x48, 0xf8, 0x18, 0xf8, 0xb0, 0xf0, 0x20, 0xe0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x0f, 0x0b, 0x0f, 0x10, 0x1f, 0x21, 0x3f, 0x21, 0x3f, 0x23, 0x3f, 0x17, 0x1f, 0x17, 0x1f, 0x17, 0x1f,
	0x36, 0x3f, 0x42, 0x7f, 0x43, 0x7f, 0x62, 0x7f, 0x36, 0x3f, 0x10, 0x1f, 0x32, 0x3f, 0x0f, 0x0f, 0x03, 0x03, 0x00, 0x00,

// FRAME 12
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0xe0, 0x20, 0xe0, 0xa0, 0xe0, 0x18, 0xf8, 0x88, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x38, 0xf8, 0xa0, 0xe0, 0x10, 0xf0, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x10, 0x1f, 0x22, 0x3f, 0x62, 0x7f, 0x62, 0x7f, 0x23, 0x3f, 0x37, 0x3f, 0x17, 0x1f,
	0x17, 0x1f, 0x37, 0x3f, 0x63, 0x7f, 0x61, 0x7f, 0x22, 0x3f, 0x36, 0x3f, 0x10, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,

// FRAME 13
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x60, 0xe0, 0xa0, 0xe0, 0xb0, 0xf0, 0x58, 0xf8, 0x48, 0xf8, 0xa8, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x10, 0xf0, 0x18, 0xf8, 0x20, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x03, 0x0f, 0x0f, 0x30, 0x3f, 0x30, 0x3f, 0x66, 0x7f, 0x42, 0x7f, 0x42, 0x7f, 0x67, 0x7f, 0x36, 0x3f,
	0x17, 0x1f, 0x17, 0x1f, 0x33, 0x3f, 0x23, 0x3f, 0x20, 0x3f, 0x33, 0x3f, 0x1b, 0x1f, 0x09, 0x0f, 0x0f, 0x0f, 0x00, 0x00,

// FRAME 14
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0xc0, 0x60, 0xe0, 0x38, 0xf8, 0x48, 0xf8, 0xc8, 0xf8, 0x08, 0xf8, 0xa8, 0xf8,
	0x28, 0xf8, 0x1c, 0xfc, 0x48, 0xf8, 0x08, 0xf8, 0x10, 0xf0, 0x10, 0xf0, 0x20, 0xe0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x0b, 0x0f, 0x18, 0x1f, 0x30, 0x3f, 0x20, 0x3f, 0x6d, 0x7f, 0x46, 0x7f, 0x42, 0x7f, 0x67, 0x7f,
	0x36, 0x3f, 0x17, 0x1f, 0x13, 0x1f, 0x23, 0x3f, 0x21, 0x3f, 0x31, 0x3f, 0x1b, 0x1f, 0x0d, 0x0f, 0x07, 0x07, 0x00, 0x00,

// FRAME 15
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x40, 0xc0, 0x30, 0xf0, 0xd0, 0xf0, 0xc8, 0xf8, 0xc8, 0xf8, 0x28, 0xf8,
	0xb4, 0xfc, 0x0c, 0xfc, 0x48, 0xf8, 0x08, 0xf8, 0x98, 0xf8, 0x90, 0xf0, 0x30, 0xf0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x10, 0x1f, 0x30, 0x3f, 0x26, 0x3f, 0x20, 0x3f, 0x40, 0x7f, 0x44, 0x7f, 0x42, 0x7f,
	0x47, 0x7f, 0x37, 0x3f, 0x13, 0x1f, 0x13, 0x1f, 0x11, 0x1f, 0x11, 0x1f, 0x0c, 0x0f, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00,

// FRAME 16
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x70, 0xf0, 0x90, 0xf0, 0xc8, 0xf8, 0xc8, 0xf8, 0xb4, 0xfc,
	0x2c, 0xfc, 0x28, 0xf8, 0x48, 0xf8, 0x88, 0xf8, 0x98, 0xf8, 0x10, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x3f, 0x3f, 0x20, 0x3f, 0x28, 0x3f, 0x2c, 0x3f, 0x40, 0x7f, 0x40, 0x7f, 0x40, 0x7f,
	0x46, 0x7f, 0x43, 0x7f, 0x73, 0x7f, 0x13, 0x1f, 0x10, 0x1f, 0x18, 0x1f, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 17
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x10, 0xf0, 0xc8, 0xf8, 0xc4, 0xfc, 0xac, 0xfc,
	0xa8, 0xf8, 0x28, 0xf8, 0x08, 0xf8, 0x88, 0xf8, 0x18, 0xf8, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x60, 0x7f, 0x60, 0x7f, 0x48, 0x7f, 0x4c, 0x7f, 0x40, 0x7f,
	0x40, 0x7f, 0x40, 0x7f, 0x43, 0x7f, 0x78, 0x7f, 0x18, 0x1f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 18
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0x08, 0xf8, 0xb8, 0xf8, 0xb8, 0xf8,
	0xb8, 0xf8, 0xb8, 0xf8, 0x08, 0xf8, 0x78, 0xf8, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x4c, 0x7f,
	0x4c, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x40, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 19
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x18, 0xf8, 0x88, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0xa8, 0xf8,
	0xac, 0xfc, 0xc4, 0xfc, 0xc8, 0xf8, 0x10, 0xf0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x18, 0x1f, 0x78, 0x7f, 0x43, 0x7f, 0x40, 0x7f, 0x40, 0x7f,
	0x40, 0x7f, 0x4c, 0x7f, 0x48, 0x7f, 0x60, 0x7f, 0x60, 0x7f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 20
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x10, 0xf0, 0x98, 0xf8, 0x88, 0xf8, 0x48, 0xf8, 0x28, 0xf8, 0x2c, 0xfc,
	0xb4, 0xfc, 0xc8, 0xf8, 0xc8, 0xf8, 0x90, 0xf0, 0x70, 0xf0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x1f, 0x10, 0x1f, 0x13, 0x1f, 0x73, 0x7f, 0x43, 0x7f, 0x44, 0x7f,
	0x40, 0x7f, 0x48, 0x7f, 0x40, 0x7f, 0x2c, 0x3f, 0x28, 0x3f, 0x20, 0x3f, 0x3f, 0x3f, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,

// FRAME 21
	0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x30, 0xf0, 0x90, 0xf0, 0x98, 0xf8, 0x08, 0xf8, 0x48, 0xf8, 0x0c, 0xfc, 0xb4, 0xfc,
	0x28, 0xf8, 0xc8, 0xf8, 0x48, 0xf8, 0xd0, 0xf0, 0x30, 0xf0, 0x40, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0c, 0x0f, 0x11, 0x1f, 0x11, 0x1f, 0x13, 0x1f, 0x13, 0x1f, 0x37, 0x3f, 0x47, 0x7f,
	0x42, 0x7f, 0x44, 0x7f, 0x40, 0x7f, 0x20, 0x3f, 0x26, 0x3f, 0x30, 0x3f, 0x10, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,

// FRAME 22
	0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x20, 0xe0, 0x50, 0xf0, 0x10, 0xf0, 0x08, 0xf8, 0x48, 0xf8, 0x1c, 0xfc, 0x28, 0xf8,
	0xa8, 0xf8, 0x08, 0xf8, 0xc8, 0xf8, 0x48, 0xf8, 0x38, 0xf8, 0x60, 0xe0, 0x40, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x07, 0x0d, 0x0f, 0x1b, 0x1f, 0x31, 0x3f, 0x21, 0x3f, 0x23, 0x3f, 0x13, 0x1f, 0x17, 0x1f, 0x36, 0x3f,
	0x67, 0x7f, 0x42, 0x7f, 0x46, 0x7f, 0x6d, 0x7f, 0x20, 0x3f, 0x30, 0x3f, 0x18, 0x1f, 0x0b, 0x0f, 0x07, 0x07, 0x00, 0x00,

// FRAME 23
	0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x20, 0xe0, 0x18, 0xf8, 0x10, 0xf0, 0x08, 0xf8, 0x08, 0xf8, 0x28, 0xf8, 0x28, 0xf8,
	0x28, 0xf8, 0xa8, 0xf8, 0x48, 0xf8, 0x58, 0xf8, 0xb0, 0xf0, 0xa0, 0xe0, 0x60, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x0f, 0x09, 0x0f, 0x1b, 0x1f, 0x33, 0x3f, 0x21, 0x3f, 0x23, 0x3f, 0x33, 0x3f, 0x17, 0x1f, 0x17, 0x1f,
	0x36, 0x3f, 0x67, 0x7f, 0x42, 0x7f, 0x42, 0x7f, 0x66, 0x7f, 0x30, 0x3f, 0x30, 0x3f, 0x0f, 0x0f, 0x03, 0x03, 0x00, 0x00,
};

const unsigned char PROGMEM skid_plus_mask[] =
{
// width, height,
	20, 16,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 01
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 02
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 03
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x30,
	0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 04
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26,
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 05
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 06
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 07
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 08
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 09
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26,
	0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 10
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 11
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 12
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 13
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x38, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 14
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 15
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20,
	0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 16
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 17
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 18
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 19
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 20
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 21
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
	0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 22
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

// FRAME 23
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x38, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM dust_plus_mask[] =
{
// width, height,
	8, 8,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x48, 0x78,
	0x68, 0x78, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00,

// FRAME 01
	0x00, 0x00, 0x1c, 0x1c, 0x36, 0x3e, 0x2a, 0x3e,
	0x22, 0x3e, 0x36, 0x3e, 0x1c, 0x1c, 0x00, 0x00,

// FRAME 02
	0x7e, 0x7e, 0x4b, 0x7f, 0x51, 0x7f, 0x6b, 0x7f,
	0xc5, 0xff, 0x89, 0xff, 0xd7, 0xff, 0x7c, 0x7c,

// FRAME 03
	0x1c, 0x1c, 0xf4, 0xfc, 0xac, 0xfc, 0xd6, 0xfe,
	0xaa, 0xfe, 0xd6, 0xfe, 0x6c, 0x7c, 0x38, 0x38,
};

const unsigned char PROGMEM cactus_plus_mask[] =
{
// width, height,
	14, 16,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x18, 0xf8, 0xc8, 0xf8, 0x10, 0xf0, 0xe8, 0xf8,
	0xe8, 0xf8, 0x10, 0xf0, 0xb0, 0xf0, 0x20, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x1e, 0x1f, 0x11, 0x1f, 0x2f, 0x3f,
	0x2f, 0x3f, 0x11, 0x1f, 0x1e, 0x1f, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM play_plus_mask[] =
{
// width, height,
	21, 8,
// FRAME 00
	0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x12, 0x7f, 0x1e, 0x3f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x20, 0x7f, 0x20, 0x70, 0x00,
	0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x12, 0x7f, 0x3e, 0x7f, 0x00, 0x7f, 0x0e, 0x7f, 0x3e, 0x7f, 0x38, 0x7f, 0x0e, 0x7f, 0x00, 0x1f,
};

const unsigned char PROGMEM info_plus_mask[] =
{
// width, height,
	21, 8,
// FRAME 00
	0x00, 0x77, 0x22, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x22, 0x7f, 0x00, 0x7f, 0x3e, 0x7f, 0x0c, 0x7f, 0x18, 0x7f, 0x3e, 0x7f, 0x00,
	0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x0a, 0x7f, 0x02, 0x1f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x22, 0x7f, 0x3e, 0x7f, 0x00, 0x7f,
};

const unsigned char PROGMEM help_plus_mask[] =
{
// width, height,
	21, 8,
// FRAME 00
	0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x18, 0x7f, 0x3e, 0x7f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x2a, 0x7f, 0x22, 0x7f, 0x00,
	0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x20, 0x7f, 0x20, 0x70, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x12, 0x7f, 0x1e, 0x3f, 0x00, 0x3f,
};

const unsigned char PROGMEM conf_plus_mask[] =
{
// width, height,
	21, 8,
// FRAME 00
	0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x22, 0x7f, 0x22, 0x77, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x22, 0x7f, 0x3e, 0x7f, 0x00,
	0x7f, 0x3e, 0x7f, 0x0c, 0x7f, 0x18, 0x7f, 0x3e, 0x7f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x0a, 0x7f, 0x02, 0x1f, 0x00, 0x07,
};

const unsigned char PROGMEM sfx_plus_mask[] =
{
// width, height,
	19, 8,
// FRAME 00
	0x00, 0x7f, 0x2e, 0x7f, 0x2e, 0x7f, 0x3a, 0x7f, 0x3a, 0x7f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x0a, 0x7f, 0x02,
	0x1f, 0x00, 0x7f, 0x36, 0x7f, 0x3e, 0x7f, 0x08, 0x7f, 0x36, 0x7f, 0x00, 0x7f, 0x00, 0x7f, 0x36, 0x7f, 0x00, 0x7f,
};

const unsigned char PROGMEM on_plus_mask[] =
{
// width, height,
	11, 8,
// FRAME 00
	0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x22, 0x7f, 0x3e, 0x7f, 0x00,
	0x7f, 0x3e, 0x7f, 0x0c, 0x7f, 0x18, 0x7f, 0x3e, 0x7f, 0x00, 0x7f,
};

const unsigned char PROGMEM off_plus_mask[] =
{
// width, height,
	16, 8,
// FRAME 00
	0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x22, 0x7f, 0x3e, 0x7f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f,
	0x0a, 0x7f, 0x02, 0x1f, 0x00, 0x7f, 0x3e, 0x7f, 0x3e, 0x7f, 0x0a, 0x7f, 0x02, 0x1f, 0x00, 0x07,
};

const unsigned char PROGMEM menu_without_mask[] =
{
// width, height,
	108, 62,
// FRAME 00
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x0e, 0x0e, 0x0e, 0x7e, 0x7e, 0x7c, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x8e, 0x8e, 0x8e, 0xfe, 0xfe, 0xfc, 0x00, 0xd4, 0x00, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x0e, 0xee, 0x0e, 0xfe, 0xfe, 0xfc, 0x00, 0xea, 0xe0, 0xee, 0xee, 0x0e, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x0e, 0xee, 0xce, 0xc0, 0xd4, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x8e, 0x8e, 0xae, 0x0e, 0x0e, 0x0e, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x8e, 0x8e, 0x8e, 0x8e, 0x8e, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe8, 0xe0, 0xfc, 0xfc, 0x7c, 0x00, 0x98, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x7f, 0xff, 0xff, 0xfb, 0xf1, 0x04, 0x53, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 0x9c, 0x1c, 0xff, 0xff, 0xff, 0x00, 0xaa, 0x55, 0xa9, 0x55, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xbf, 0x3f, 0x9f, 0x9f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xeb, 0xe3, 0xe8, 0xeb, 0xe4, 0x08, 0x60, 0x00, 0xe9, 0xeb, 0xeb, 0xeb, 0xeb, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x4a, 0x4a, 0xaa, 0xda, 0xda, 0xea, 0xea, 0xf6, 0xfa, 0x7a, 0x3c, 0x3f, 0x18, 0x16, 0x96, 0xd6, 0x76, 0x16, 0x16, 0x16, 0x96, 0xf6, 0xf6, 0xf6, 0x30, 0x82, 0x15, 0x8a, 0x44, 0xaa, 0x54, 0xa2, 0x54, 0x22, 0x50, 0x2a, 0x50, 0x2a, 0x50, 0x28, 0x52, 0x28, 0x51, 0x2a, 0x51, 0x2a, 0x50, 0x22, 0x54, 0xa2, 0x54, 0xaa, 0x54, 0xaa, 0x14, 0x21, 0x07, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf0, 0xf0, 0xf2, 0xf6, 0xf6, 0xf6, 0xf8, 0xfe, 0xfc, 0xfa, 0xfa, 0xf6, 0xea, 0xea, 0xda, 0xda, 0xaa, 0x4a, 0x4a, 0x84, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xc0, 0x20, 0xd0, 0xe8, 0xf4, 0xb4, 0xfa, 0xba, 0xfd, 0xbe, 0xbe, 0xbf, 0xaf, 0xa7, 0xa7, 0xa3, 0xa1, 0xe1, 0xe0, 0xf0, 0x78, 0x5c, 0x4e, 0xc6, 0xc3, 0xc1, 0x40, 0x40, 0x40, 0xf0, 0xfe, 0xff, 0xff, 0x7f, 0x60, 0x15, 0x0a, 0x01, 0xe2, 0xf1, 0xf8, 0xfc, 0xfc, 0xf6, 0xe6, 0xe4, 0xf4, 0xfc, 0xc8, 0x80, 0x50, 0x50, 0x50, 0x80, 0xc8, 0xfc, 0xf4, 0xe4, 0xe6, 0xf6, 0xfc, 0xfc, 0xf8, 0xf1, 0xe2, 0x05, 0x0a, 0x14, 0x48, 0x63, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbe, 0xbe, 0xfd, 0xba, 0xfa, 0xb4, 0xf4, 0xe8, 0xd0, 0x20, 0xc0, 0x00, 0x00,
	0xe0, 0x1e, 0xe1, 0xfe, 0xff, 0xff, 0xff, 0x3f, 0x4f, 0xa7, 0x57, 0x07, 0xe4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xe7, 0x17, 0xa5, 0x55, 0xa5, 0x4d, 0xa9, 0x49, 0xa9, 0x49, 0x9f, 0x5f, 0x9f, 0x5f, 0x1f, 0x8f, 0x57, 0xa0, 0x47, 0xbf, 0x3f, 0xbf, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xbf, 0x3f, 0xbf, 0x4f, 0x80, 0x57, 0xaf, 0x1f, 0x5f, 0x9f, 0x5f, 0x9f, 0x5f, 0xaf, 0x4f, 0xaf, 0x4f, 0xaf, 0x57, 0xa7, 0x57, 0x07, 0xe7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xe7, 0x17, 0xa7, 0x57, 0x8f, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0xe1, 0x1e, 0xe0,
	0x01, 0x1e, 0xe1, 0x1f, 0xff, 0xff, 0xff, 0x3e, 0x5d, 0xbc, 0x39, 0x78, 0x53, 0x77, 0x6f, 0xef, 0xaf, 0x2f, 0x2f, 0x2f, 0x37, 0xf3, 0xf4, 0x12, 0x15, 0x92, 0x99, 0x4c, 0x46, 0x42, 0x42, 0x7e, 0x7e, 0x7e, 0x7e, 0x78, 0x22, 0x15, 0x0a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x15, 0x2a, 0x14, 0x2a, 0x14, 0x28, 0x95, 0x89, 0x95, 0x09, 0x05, 0x09, 0x05, 0x0a, 0x04, 0x02, 0x04, 0x02, 0x05, 0x0a, 0x05, 0x0a, 0x05, 0x0a, 0x15, 0x0a, 0x05, 0x38, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7d, 0xfa, 0xf5, 0xf2, 0xf5, 0xf0, 0xf3, 0xf7, 0xef, 0xef, 0xef, 0xef, 0xef, 0x6f, 0x77, 0x73, 0x78, 0xba, 0x3d, 0x9c, 0x3e, 0xff, 0xff, 0xff, 0x1f, 0xe1, 0x1e, 0x01,
	0x00, 0x00, 0x00, 0x0f, 0x30, 0x4f, 0xbf, 0xbf, 0x7c, 0x7a, 0xf5, 0xf2, 0x95, 0x92, 0x95, 0x92, 0x95, 0x9b, 0x8e, 0x80, 0x80, 0xff, 0x93, 0x91, 0x95, 0x92, 0x94, 0x92, 0x95, 0x92, 0x95, 0xf2, 0xf5, 0xf2, 0xf5, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf9, 0xf9, 0xfd, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf4, 0xf2, 0xf5, 0xf2, 0xf5, 0xf2, 0xf5, 0xf2, 0xf5, 0xf2, 0xf4, 0xf1, 0xf5, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf1, 0xf4, 0xf2, 0xf5, 0xf2, 0xf5, 0xf2, 0x79, 0x7c, 0xbf, 0xbf, 0x4f, 0x30, 0x0f, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x06, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x05, 0x05, 0x04, 0x00, 0x00, 0x00, 0x07, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x04, 0x05, 0x05, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x06, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM qrcode[] =
{
// width, height,
	64, 64,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xfe, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xfe, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xfe, 0xfe, 0xe6, 0xe6, 0x1e, 0x1e, 0x00, 0x00, 0x79, 0x79, 0x86, 0x86, 0x79, 0x79, 0xff, 0xff, 0x01, 0x01, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xfe, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xfe, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x60, 0x67, 0x67, 0xe6, 0xe6, 0x66, 0x66, 0x66, 0x66, 0xe7, 0xe7, 0x60, 0x60, 0xff, 0xff, 0x87, 0x87, 0x19, 0x19, 0xe6, 0xe6, 0xf8, 0xf8, 0x06, 0x06, 0x9f, 0x9f, 0x66, 0x66, 0x9f, 0x9f, 0x06, 0x06, 0xff, 0xff, 0x60, 0x60, 0xe7, 0xe7, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe7, 0xe7, 0x60, 0x60, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x86, 0x86, 0x86, 0x86, 0x19, 0x19, 0xe0, 0xe0, 0x86, 0x86, 0x1f, 0x1f, 0x66, 0x66, 0x87, 0x87, 0x61, 0x61, 0x66, 0x66, 0x79, 0x79, 0xff, 0xff, 0xe6, 0xe6, 0xff, 0xff, 0xfe, 0xfe, 0xe1, 0xe1, 0x60, 0x60, 0xe7, 0xe7, 0x06, 0x06, 0x19, 0x19, 0x81, 0x81, 0x9f, 0x9f, 0x81, 0x81, 0xf9, 0xf9, 0x06, 0x06, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 0xe1, 0xe1, 0x9e, 0x9e, 0x01, 0x01, 0x87, 0x87, 0x86, 0x86, 0x66, 0x66, 0x19, 0x19, 0x78, 0x78, 0x98, 0x98, 0x78, 0x78, 0x7f, 0x7f, 0x19, 0x19, 0x61, 0x61, 0xe1, 0xe1, 0x81, 0x81, 0x78, 0x78, 0x79, 0x79, 0x66, 0x66, 0x06, 0x06, 0x79, 0x79, 0x1f, 0x1f, 0x1f, 0x1f, 0x67, 0x67, 0xe6, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x06, 0x06, 0xe7, 0xe7, 0x67, 0x67, 0x66, 0x66, 0x67, 0x67, 0xe7, 0xe7, 0x06, 0x06, 0xfe, 0xfe, 0x78, 0x78, 0x81, 0x81, 0x60, 0x60, 0x18, 0x18, 0xe6, 0xe6, 0x1e, 0x1e, 0xe1, 0xe1, 0x1f, 0x1f, 0x00, 0x00, 0x7e, 0x7e, 0x66, 0x66, 0x7e, 0x7e, 0x00, 0x00, 0x18, 0x18, 0xe0, 0xe0, 0x78, 0x78, 0x67, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0x7f, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7f, 0x7f, 0x00, 0x00, 0xff, 0xff, 0x18, 0x18, 0xe1, 0xe1, 0x7e, 0x7e, 0x06, 0x06, 0x19, 0x19, 0x00, 0x00, 0xf9, 0xf9, 0xe0, 0xe0, 0x7e, 0x7e, 0x66, 0x66, 0xf8, 0xf8, 0x06, 0x06, 0xe6, 0xe6, 0x18, 0x18, 0x9f, 0x9f, 0x80, 0x80, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};
