static const unsigned char battery_numbers_percentage_a_bits[] = {
0x1f,0x8b,0x08,0x00,0x1d,0x5f,0xdd,0x4a,0x02,0x03,0x63,0x88,0xff,0xdf,0xcf,0xc0,
0xf0,0x9f,0x01,0x88,0xcd,0xfe,0x33,0xbc,0x6a,0x01,0x31,0x18,0xfe,0x8b,0x83,0x04,
0x18,0xfe,0x3f,0xff,0xff,0x6d,0xf3,0xff,0xdf,0x9c,0x0c,0xdc,0x09,0xee,0xff,0xf7,
0x1c,0xfd,0x5f,0x0d,0x14,0xfb,0x63,0x71,0xe4,0xe0,0x7f,0xa0,0xaa,0x8c,0xff,0x0c,
0x6a,0xff,0xff,0x73,0x32,0x30,0x70,0xb3,0x33,0x30,0xf0,0xb0,0x31,0xd0,0x13,0x00,
0x00,0x54,0xf1,0xea,0x18,0xb4,0x00,0x00,0x00,
};

struct asset battery_numbers_percentage_a = {
	9, 20, battery_numbers_percentage_a_bits, sizeof(battery_numbers_percentage_a_bits) - 1, NULL };
static const unsigned char battery_numbers_percentage_i_bits[] = {
0x1f,0x8b,0x08,0x00,0x1d,0x5f,0xdd,0x4a,0x02,0x03,0xbd,0xcb,0x81,0x09,0x00,0x30,
0x08,0x03,0xc1,0xdf,0x3c,0x3f,0x7a,0x43,0xba,0x83,0x41,0x44,0x4e,0x45,0x85,0x16,
0x1a,0xdc,0xc0,0x6c,0x62,0x1a,0xd6,0x3f,0xd6,0x8a,0x10,0xb7,0x66,0x2f,0x3d,0xb9,
0xcc,0x03,0x09,0xc8,0xed,0x6e,0xb4,0x00,0x00,0x00,
};

struct asset battery_numbers_percentage_i = {
	9, 20, battery_numbers_percentage_i_bits, sizeof(battery_numbers_percentage_i_bits) - 1, NULL };
