

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