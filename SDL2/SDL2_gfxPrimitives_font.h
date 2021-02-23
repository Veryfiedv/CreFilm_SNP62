

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

	/*
	* 22 0x16 '^V' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0x7e,			/* 01111110 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */

	/*
	* 23 0x17 '^W' 
	*/
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x7e,			/* 01111110 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0xff,			/* 11111111 */

	/*
	* 24 0x18 '^X' 
	*/
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x7e,			/* 01111110 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 25 0x19 '^Y' 
	*/
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 26 0x1a '^Z' 
	*/
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0xfe,			/* 11111110 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 27 0x1b '^[' 
	*/
	0x00,			/* 00000000 */
	0x30,			/* 00110000 */
	0x60,			/* 01100000 */
	0xfe,			/* 11111110 */
	0x60,			/* 01100000 */
	0x30,			/* 00110000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 28 0x1c '^\' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 29 0x1d '^]' 
	*/
	0x00,			/* 00000000 */
	0x24,			/* 00100100 */
	0x66,			/* 01100110 */
	0xff,			/* 11111111 */
	0x66,			/* 01100110 */
	0x24,			/* 00100100 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 30 0x1e '^^' 
	*/
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x7e,			/* 01111110 */
	0xff,			/* 11111111 */
	0xff,			/* 11111111 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 31 0x1f '^_' 
	*/
	0x00,			/* 00000000 */
	0xff,			/* 11111111 */
	0xff,			/* 11111111 */
	0x7e,			/* 01111110 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 32 0x20 ' ' 
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
	* 33 0x21 '!' 
	*/
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 34 0x22 '"' 
	*/
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x24,			/* 00100100 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 35 0x23 '#' 
	*/
	0x6c,			/* 01101100 */
	0x6c,			/* 01101100 */
	0xfe,			/* 11111110 */
	0x6c,			/* 01101100 */
	0xfe,			/* 11111110 */
	0x6c,			/* 01101100 */
	0x6c,			/* 01101100 */
	0x00,			/* 00000000 */

	/*
	* 36 0x24 '$' 
	*/
	0x18,			/* 00011000 */
	0x3e,			/* 00111110 */
	0x60,			/* 01100000 */
	0x3c,			/* 00111100 */
	0x06,			/* 00000110 */
	0x7c,			/* 01111100 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 37 0x25 '%' 
	*/
	0x00,			/* 00000000 */
	0xc6,			/* 11000110 */
	0xcc,			/* 11001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x66,			/* 01100110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 38 0x26 '&' 
	*/
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0x38,			/* 00111000 */
	0x76,			/* 01110110 */
	0xdc,			/* 11011100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 39 0x27 ''' 
	*/
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 40 0x28 '(' 
	*/
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x00,			/* 00000000 */

	/*
	* 41 0x29 ')' 
	*/
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x00,			/* 00000000 */

	/*
	* 42 0x2a '*' 
	*/
	0x00,			/* 00000000 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0xff,			/* 11111111 */
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 43 0x2b '+' 
	*/
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 44 0x2c ',' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */

	/*
	* 45 0x2d '-' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 46 0x2e '.' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 47 0x2f '/' 
	*/
	0x06,			/* 00000110 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x60,			/* 01100000 */
	0xc0,			/* 11000000 */
	0x80,			/* 10000000 */
	0x00,			/* 00000000 */

	/*
	* 48 0x30 '0' 
	*/
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0xd6,			/* 11010110 */
	0xc6,			/* 11000110 */
	0x6c,			/* 01101100 */
	0x38,			/* 00111000 */
	0x00,			/* 00000000 */

	/*
	* 49 0x31 '1' 
	*/
	0x18,			/* 00011000 */
	0x38,			/* 00111000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */

	/*
	* 50 0x32 '2' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0x06,			/* 00000110 */
	0x1c,			/* 00011100 */
	0x30,			/* 00110000 */
	0x66,			/* 01100110 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */

	/*
	* 51 0x33 '3' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0x06,			/* 00000110 */
	0x3c,			/* 00111100 */
	0x06,			/* 00000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 52 0x34 '4' 
	*/
	0x1c,			/* 00011100 */
	0x3c,			/* 00111100 */
	0x6c,			/* 01101100 */
	0xcc,			/* 11001100 */
	0xfe,			/* 11111110 */
	0x0c,			/* 00001100 */
	0x1e,			/* 00011110 */
	0x00,			/* 00000000 */

	/*
	* 53 0x35 '5' 
	*/
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0xfc,			/* 11111100 */
	0x06,			/* 00000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 54 0x36 '6' 
	*/
	0x38,			/* 00111000 */
	0x60,			/* 01100000 */
	0xc0,			/* 11000000 */
	0xfc,			/* 11111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 55 0x37 '7' 
	*/
	0xfe,			/* 11111110 */
	0xc6,			/* 11000110 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x00,			/* 00000000 */

	/*
	* 56 0x38 '8' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 57 0x39 '9' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7e,			/* 01111110 */
	0x06,			/* 00000110 */
	0x0c,			/* 00001100 */
	0x78,			/* 01111000 */
	0x00,			/* 00000000 */

	/*
	* 58 0x3a ':' 
	*/
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 59 0x3b ';' 
	*/
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */

	/*
	* 60 0x3c '<' 
	*/
	0x06,			/* 00000110 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x06,			/* 00000110 */
	0x00,			/* 00000000 */

	/*
	* 61 0x3d '=' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 62 0x3e '>' 
	*/
	0x60,			/* 01100000 */
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0x60,			/* 01100000 */
	0x00,			/* 00000000 */

	/*
	* 63 0x3f '?' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 64 0x40 '@' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xde,			/* 11011110 */
	0xde,			/* 11011110 */
	0xde,			/* 11011110 */
	0xc0,			/* 11000000 */
	0x78,			/* 01111000 */
	0x00,			/* 00000000 */

	/*
	* 65 0x41 'A' 
	*/
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 66 0x42 'B' 
	*/
	0xfc,			/* 11111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x7c,			/* 01111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0xfc,			/* 11111100 */
	0x00,			/* 00000000 */

	/*
	* 67 0x43 'C' 
	*/
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 68 0x44 'D' 
	*/
	0xf8,			/* 11111000 */
	0x6c,			/* 01101100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x6c,			/* 01101100 */
	0xf8,			/* 11111000 */
	0x00,			/* 00000000 */

	/*
	* 69 0x45 'E' 
	*/
	0xfe,			/* 11111110 */
	0x62,			/* 01100010 */
	0x68,			/* 01101000 */
	0x78,			/* 01111000 */
	0x68,			/* 01101000 */
	0x62,			/* 01100010 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */

	/*
	* 70 0x46 'F' 
	*/
	0xfe,			/* 11111110 */
	0x62,			/* 01100010 */
	0x68,			/* 01101000 */
	0x78,			/* 01111000 */
	0x68,			/* 01101000 */
	0x60,			/* 01100000 */
	0xf0,			/* 11110000 */
	0x00,			/* 00000000 */

	/*
	* 71 0x47 'G' 
	*/
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0xce,			/* 11001110 */
	0x66,			/* 01100110 */
	0x3a,			/* 00111010 */
	0x00,			/* 00000000 */

	/*
	* 72 0x48 'H' 
	*/
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 73 0x49 'I' 
	*/
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 74 0x4a 'J' 
	*/
	0x1e,			/* 00011110 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x78,			/* 01111000 */
	0x00,			/* 00000000 */

	/*
	* 75 0x4b 'K' 
	*/
	0xe6,			/* 11100110 */
	0x66,			/* 01100110 */
	0x6c,			/* 01101100 */
	0x78,			/* 01111000 */
	0x6c,			/* 01101100 */
	0x66,			/* 01100110 */
	0xe6,			/* 11100110 */
	0x00,			/* 00000000 */

	/*
	* 76 0x4c 'L' 
	*/
	0xf0,			/* 11110000 */
	0x60,			/* 01100000 */
	0x60,			/* 01100000 */
	0x60,			/* 01100000 */
	0x62,			/* 01100010 */
	0x66,			/* 01100110 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */

	/*
	* 77 0x4d 'M' 
	*/
	0xc6,			/* 11000110 */
	0xee,			/* 11101110 */
	0xfe,			/* 11111110 */
	0xfe,			/* 11111110 */
	0xd6,			/* 11010110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 78 0x4e 'N' 
	*/
	0xc6,			/* 11000110 */
	0xe6,			/* 11100110 */
	0xf6,			/* 11110110 */
	0xde,			/* 11011110 */
	0xce,			/* 11001110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 79 0x4f 'O' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 80 0x50 'P' 
	*/
	0xfc,			/* 11111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x7c,			/* 01111100 */
	0x60,			/* 01100000 */
	0x60,			/* 01100000 */
	0xf0,			/* 11110000 */
	0x00,			/* 00000000 */

	/*
	* 81 0x51 'Q' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xce,			/* 11001110 */
	0x7c,			/* 01111100 */
	0x0e,			/* 00001110 */

	/*
	* 82 0x52 'R' 
	*/
	0xfc,			/* 11111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x7c,			/* 01111100 */
	0x6c,			/* 01101100 */
	0x66,			/* 01100110 */
	0xe6,			/* 11100110 */
	0x00,			/* 00000000 */

	/*
	* 83 0x53 'S' 
	*/
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 84 0x54 'T' 
	*/
	0x7e,			/* 01111110 */
	0x7e,			/* 01111110 */
	0x5a,			/* 01011010 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 85 0x55 'U' 
	*/
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 86 0x56 'V' 
	*/
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x6c,			/* 01101100 */
	0x38,			/* 00111000 */
	0x00,			/* 00000000 */

	/*
	* 87 0x57 'W' 
	*/
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xd6,			/* 11010110 */
	0xd6,			/* 11010110 */
	0xfe,			/* 11111110 */
	0x6c,			/* 01101100 */
	0x00,			/* 00000000 */

	/*
	* 88 0x58 'X' 
	*/
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x6c,			/* 01101100 */
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 89 0x59 'Y' 
	*/
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 90 0x5a 'Z' 
	*/
	0xfe,			/* 11111110 */
	0xc6,			/* 11000110 */
	0x8c,			/* 10001100 */
	0x18,			/* 00011000 */
	0x32,			/* 00110010 */
	0x66,			/* 01100110 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */

	/*
	* 91 0x5b '[' 
	*/
	0x3c,			/* 00111100 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 92 0x5c '\' 
	*/
	0xc0,			/* 11000000 */
	0x60,			/* 01100000 */
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x06,			/* 00000110 */
	0x02,			/* 00000010 */
	0x00,			/* 00000000 */

	/*
	* 93 0x5d ']' 
	*/
	0x3c,			/* 00111100 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x0c,			/* 00001100 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 94 0x5e '^' 
	*/
	0x10,			/* 00010000 */
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 95 0x5f '_' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xff,			/* 11111111 */

	/*
	* 96 0x60 '`' 
	*/
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x0c,			/* 00001100 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 97 0x61 'a' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x78,			/* 01111000 */
	0x0c,			/* 00001100 */
	0x7c,			/* 01111100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 98 0x62 'b' 
	*/
	0xe0,			/* 11100000 */
	0x60,			/* 01100000 */
	0x7c,			/* 01111100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0xdc,			/* 11011100 */
	0x00,			/* 00000000 */

	/*
	* 99 0x63 'c' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc0,			/* 11000000 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 100 0x64 'd' 
	*/
	0x1c,			/* 00011100 */
	0x0c,			/* 00001100 */
	0x7c,			/* 01111100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 101 0x65 'e' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 102 0x66 'f' 
	*/
	0x3c,			/* 00111100 */
	0x66,			/* 01100110 */
	0x60,			/* 01100000 */
	0xf8,			/* 11111000 */
	0x60,			/* 01100000 */
	0x60,			/* 01100000 */
	0xf0,			/* 11110000 */
	0x00,			/* 00000000 */

	/*
	* 103 0x67 'g' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x76,			/* 01110110 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x7c,			/* 01111100 */
	0x0c,			/* 00001100 */
	0xf8,			/* 11111000 */

	/*
	* 104 0x68 'h' 
	*/
	0xe0,			/* 11100000 */
	0x60,			/* 01100000 */
	0x6c,			/* 01101100 */
	0x76,			/* 01110110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0xe6,			/* 11100110 */
	0x00,			/* 00000000 */

	/*
	* 105 0x69 'i' 
	*/
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x38,			/* 00111000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 106 0x6a 'j' 
	*/
	0x06,			/* 00000110 */
	0x00,			/* 00000000 */
	0x06,			/* 00000110 */
	0x06,			/* 00000110 */
	0x06,			/* 00000110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x3c,			/* 00111100 */

	/*
	* 107 0x6b 'k' 
	*/
	0xe0,			/* 11100000 */
	0x60,			/* 01100000 */
	0x66,			/* 01100110 */
	0x6c,			/* 01101100 */
	0x78,			/* 01111000 */
	0x6c,			/* 01101100 */
	0xe6,			/* 11100110 */
	0x00,			/* 00000000 */

	/*
	* 108 0x6c 'l' 
	*/
	0x38,			/* 00111000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 109 0x6d 'm' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xec,			/* 11101100 */
	0xfe,			/* 11111110 */
	0xd6,			/* 11010110 */
	0xd6,			/* 11010110 */
	0xd6,			/* 11010110 */
	0x00,			/* 00000000 */

	/*
	* 110 0x6e 'n' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xdc,			/* 11011100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x00,			/* 00000000 */

	/*
	* 111 0x6f 'o' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 112 0x70 'p' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xdc,			/* 11011100 */
	0x66,			/* 01100110 */
	0x66,			/* 01100110 */
	0x7c,			/* 01111100 */
	0x60,			/* 01100000 */
	0xf0,			/* 11110000 */

	/*
	* 113 0x71 'q' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x76,			/* 01110110 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x7c,			/* 01111100 */
	0x0c,			/* 00001100 */
	0x1e,			/* 00011110 */

	/*
	* 114 0x72 'r' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xdc,			/* 11011100 */
	0x76,			/* 01110110 */
	0x60,			/* 01100000 */
	0x60,			/* 01100000 */
	0xf0,			/* 11110000 */
	0x00,			/* 00000000 */

	/*
	* 115 0x73 's' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0xc0,			/* 11000000 */
	0x7c,			/* 01111100 */
	0x06,			/* 00000110 */
	0xfc,			/* 11111100 */
	0x00,			/* 00000000 */

	/*
	* 116 0x74 't' 
	*/
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0xfc,			/* 11111100 */
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x36,			/* 00110110 */
	0x1c,			/* 00011100 */
	0x00,			/* 00000000 */

	/*
	* 117 0x75 'u' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 118 0x76 'v' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x6c,			/* 01101100 */
	0x38,			/* 00111000 */
	0x00,			/* 00000000 */

	/*
	* 119 0x77 'w' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xc6,			/* 11000110 */
	0xd6,			/* 11010110 */
	0xd6,			/* 11010110 */
	0xfe,			/* 11111110 */
	0x6c,			/* 01101100 */
	0x00,			/* 00000000 */

	/*
	* 120 0x78 'x' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xc6,			/* 11000110 */
	0x6c,			/* 01101100 */
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 121 0x79 'y' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7e,			/* 01111110 */
	0x06,			/* 00000110 */
	0xfc,			/* 11111100 */

	/*
	* 122 0x7a 'z' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0x4c,			/* 01001100 */
	0x18,			/* 00011000 */
	0x32,			/* 00110010 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */

	/*
	* 123 0x7b '{' 
	*/
	0x0e,			/* 00001110 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x70,			/* 01110000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x0e,			/* 00001110 */
	0x00,			/* 00000000 */

	/*
	* 124 0x7c '|' 
	*/
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */

	/*
	* 125 0x7d '}' 
	*/
	0x70,			/* 01110000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x0e,			/* 00001110 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x70,			/* 01110000 */
	0x00,			/* 00000000 */

	/*
	* 126 0x7e '~' 
	*/
	0x76,			/* 01110110 */
	0xdc,			/* 11011100 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */

	/*
	* 127 0x7f '' 
	*/
	0x00,			/* 00000000 */
	0x10,			/* 00010000 */
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */

	/*
	* 128 0x80 '�' 
	*/
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x0c,			/* 00001100 */
	0x78,			/* 01111000 */

	/*
	* 129 0x81 '�' 
	*/
	0xcc,			/* 11001100 */
	0x00,			/* 00000000 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 130 0x82 '�' 
	*/
	0x0c,			/* 00001100 */
	0x18,			/* 00011000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 131 0x83 '�' 
	*/
	0x7c,			/* 01111100 */
	0x82,			/* 10000010 */
	0x78,			/* 01111000 */
	0x0c,			/* 00001100 */
	0x7c,			/* 01111100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 132 0x84 '�' 
	*/
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */
	0x78,			/* 01111000 */
	0x0c,			/* 00001100 */
	0x7c,			/* 01111100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 133 0x85 '�' 
	*/
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x78,			/* 01111000 */
	0x0c,			/* 00001100 */
	0x7c,			/* 01111100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 134 0x86 '�' 
	*/
	0x30,			/* 00110000 */
	0x30,			/* 00110000 */
	0x78,			/* 01111000 */
	0x0c,			/* 00001100 */
	0x7c,			/* 01111100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 135 0x87 '�' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0xc0,			/* 11000000 */
	0xc0,			/* 11000000 */
	0x7e,			/* 01111110 */
	0x0c,			/* 00001100 */
	0x38,			/* 00111000 */

	/*
	* 136 0x88 '�' 
	*/
	0x7c,			/* 01111100 */
	0x82,			/* 10000010 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 137 0x89 '�' 
	*/
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 138 0x8a '�' 
	*/
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 139 0x8b '�' 
	*/
	0x66,			/* 01100110 */
	0x00,			/* 00000000 */
	0x38,			/* 00111000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 140 0x8c '�' 
	*/
	0x7c,			/* 01111100 */
	0x82,			/* 10000010 */
	0x38,			/* 00111000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 141 0x8d '�' 
	*/
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x00,			/* 00000000 */
	0x38,			/* 00111000 */
	0x18,			/* 00011000 */
	0x18,			/* 00011000 */
	0x3c,			/* 00111100 */
	0x00,			/* 00000000 */

	/*
	* 142 0x8e '�' 
	*/
	0xc6,			/* 11000110 */
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 143 0x8f '�' 
	*/
	0x38,			/* 00111000 */
	0x6c,			/* 01101100 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xfe,			/* 11111110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */

	/*
	* 144 0x90 '�' 
	*/
	0x18,			/* 00011000 */
	0x30,			/* 00110000 */
	0xfe,			/* 11111110 */
	0xc0,			/* 11000000 */
	0xf8,			/* 11111000 */
	0xc0,			/* 11000000 */
	0xfe,			/* 11111110 */
	0x00,			/* 00000000 */

	/*
	* 145 0x91 '�' 
	*/
	0x00,			/* 00000000 */
	0x00,			/* 00000000 */
	0x7e,			/* 01111110 */
	0x18,			/* 00011000 */
	0x7e,			/* 01111110 */
	0xd8,			/* 11011000 */
	0x7e,			/* 01111110 */
	0x00,			/* 00000000 */

	/*
	* 146 0x92 '�' 
	*/
	0x3e,			/* 00111110 */
	0x6c,			/* 01101100 */
	0xcc,			/* 11001100 */
	0xfe,			/* 11111110 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xce,			/* 11001110 */
	0x00,			/* 00000000 */

	/*
	* 147 0x93 '�' 
	*/
	0x7c,			/* 01111100 */
	0x82,			/* 10000010 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 148 0x94 '�' 
	*/
	0xc6,			/* 11000110 */
	0x00,			/* 00000000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 149 0x95 '�' 
	*/
	0x30,			/* 00110000 */
	0x18,			/* 00011000 */
	0x7c,			/* 01111100 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0xc6,			/* 11000110 */
	0x7c,			/* 01111100 */
	0x00,			/* 00000000 */

	/*
	* 150 0x96 '�' 
	*/
	0x78,			/* 01111000 */
	0x84,			/* 10000100 */
	0x00,			/* 00000000 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0x76,			/* 01110110 */
	0x00,			/* 00000000 */

	/*
	* 151 0x97 '�' 
	*/
	0x60,			/* 01100000 */
	0x30,			/* 00110000 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */
	0xcc,			/* 11001100 */