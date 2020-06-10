

/* ---- 8x8 font definition ---- */

/*  ZLIB (c) A. Schiffler 2012 */

#define GFX_FONTDATAMAX (8*256)

static unsigned char gfxPrimitivesFontdata[GFX_FONTDATAMAX] = {

	/*
	* 0 0x00 '^@' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 1 0x01 '^A' 
	*/
	0x7e,			/* 01111110 */
	0x81,			/* 10000001 */
	0xa5,			/* 10100101 */
	0x81,			/* 10000001 */
	0xbd,			/* 10111101 */
	0x99,			/* 10011001 */
	0x81,			/* 10000001 */
	0x7e,			/* 01111110 */

	/*
	* 2 0x02 '^B' 
	*/
	0x7e,			/* 01111110 */
	0xff,			/* 11111111 */
	0xdb,			/* 11011011 */
	0xff,			/* 11111111 */
	0xc3,			/* 11000011 */
	0xe7,			/* 11100111 */
	0xff,			/* 11111111 */
	0x7e,			/* 01111110 */

	/*
	* 3 0x03 '^C' 
	*/
	0x6c,			/* 01101100 */
	0xfe,			/* 11111110 */
	0xfe,			/* 11111110 */
	0xfe,			/* 11111110 */
	0x7c,			/* 01111100 */
	0x38,			/* 00111000 */
	0x10,			/* 00010000 */
	0x00,			/* 00000000 */

	/*
	* 4 0x04 '^D' 
	*/
	0x10,			/* 00010000 */
	0x38,			/* 00111000 */
	0x7c,			/* 01111100 */
	0xfe,			/* 11111110 */
	0x7c,			/* 01111100 */
	0x38,			/* 00111000 */
	0x10,			/* 00010000 */
	0x00,			/* 00000000 */

	/*
	* 5 0x05 '^E' 
	*/
	0x38,			/* 00111000 */
	0x7c,			/* 01111100 */
	0x38,			/* 00111000 */
	0xfe,			/* 11111110 */
	0xfe,			/* 11111110 */
	0xd6,			/* 11010110 */
	0x10,			/* 00010000 */
	0x38,			/* 00111000 */

	/*
	* 6 0x06 '^F' 
	*/
	0x10,			/* 00010000 */
	0x38,			/* 00111000 */
	0x7c,			/* 01111100 */
	0xfe,			/* 11111110 */
	0xfe,			/* 11111110 */
	0x7c,			/* 01111100 */
	0x10,			/* 00010000 */
	0x38,			/* 00111000 */

	/*
	* 7 0x07 '^G' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 8 0x08 '^H' 
	*/
	0xff,			/* 11111111 */
	0xff,			/* 11111111 */
	0xe7,			/* 11100111 */
	0xc3,			/* 11000011 */
	0xc3,			/* 11000011 */
	0xe7,			/* 11100111 */
	0xff,			/* 11111111 */
	0xff,			/* 11111111 */

	/*
	* 9 0x09 '^I' 
	*/
	0x00,			/* 00000000 */
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0x42,			/* 01000010 */
	0x42,			/* 01000010 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 10 0x0a '^J' 
	*/
	0xff,			/* 11111111 */
	0xc3,			/* 11000011 */
	0x99,			/* 10011001 */
	0xbd,			/* 10111101 */
	0xbd,			/* 10111101 */
	0x99,			/* 10011001 */
	0xc3,			/* 11000011 */
	0xff,			/* 11111111 */

	/*
	* 11 0x0b '^K' 
	*/
	0x0f,			/* 00001111 */
	0x07,			/* 00000111 */
	0x0f,			/* 00001111 */
	0x7d,			/* 01111101 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x78,			/* 01111000 */

	/*
	* 12 0x0c '^L' 
	*/
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0x18,			/* 00011000 */

	/*
	* 13 0x0d '^M' 
	*/
	0x3f,			/* 00111111 */
	0x33,			/* 00110011 */
	0x3f,			/* 00111111 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x70,			/* 01110000 */
	0xf0,			/* 11110000 */
	0xe0,			/* 11100000 */

	/*
	* 14 0x0e '^N' 
	*/
	0x7f,			/* 01111111 */
	0x63,			/* 01100011 */
	0x7f,			/* 01111111 */
	0x63,			/* 01100011 */
	0x63,			/* 01100011 */
	0x67,			/* 01100111 */
	0xe6,			/* 11100110 */
	0xc0,			/* 11000000 */

	/*
	* 15 0x0f '^O' 
	*/
	0x18,			/* 00011000 */
	0xdb,			/* 11011011 */
	0x3c,			/* 00111100 */
	0xe7,			/* 11100111 */
	0xe7,			/* 11100111 */
	0x3c,			/* 00111100 */
	0xdb,			/* 11011011 */
	0x18,			/* 00011000 */

	/*
	* 16 0x10 '^P' 
	*/
	0x80,			/* 10000000 */
	0xe0,			/* 11100000 */
	0xf8,			/* 11111000 */
	0xfe,			/* 11111110 */
	0xf8,			/* 11111000 */
	0xe0,			/* 11100000 */
	0x80,			/* 10000000 */
	0x00,			/* 00000000 */

	/*
	* 17 0x11 '^Q' 
	*/
	0x02,			/* 00000010 */
	0x0e,			/* 00001110 */
	0x3e,			/* 00111110 */
	0xfe,			/* 11111110 */
	0x3e,			/* 00111110 */
	0x0e,			/* 00001110 */
	0x02,			/* 00000010 */
	0x00,			/* 00000000 */

	/*
	* 18 0x12 '^R' 
	*/
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x7e,			/* 01111110 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */

	/*
	* 19 0x13 '^S' 
	*/
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x00,			/* 00000000 */
	0x66,			/* 01100110 */
	0x00,			/* 00000000 */

	/*
	* 20 0x14 '^T' 
	*/
	0x7f,			/* 01111111 */
	0xdb,			/* 11011011 */
	0xdb,			/* 11011011 */
	0x7b,			/* 01111011 */
	0x1b,			/* 00011011 */
	0x1b,			/* 00011011 */
	0x1b,			/* 00011011 */
	0x00,			/* 00000000 */

	/*
	* 21 0x15 '^U' 
	*/
	0x3e,			/* 00111110 */
	0x61,			/* 01100001 */
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0x86,			/* 10000110 */
	0x7c,			/* 01111100 */