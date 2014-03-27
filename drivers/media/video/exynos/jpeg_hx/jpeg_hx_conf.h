/* linux/drivers/media/video/exynos/jpeg_hx/jpeg_hx_conf.h
 *
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 * http://www.samsung.com/
 *
 * Definition Quantization Table for Jpeg encoder/docoder
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __JPEG_HX_CONF_H__
#define __JPEG_HX_CONF_H__

#define JPEG_COEF1 0x002E9D10
#define JPEG_COEF2 0x00195670
#define JPEG_COEF3 0x00706609

static const unsigned char qtbl[6][2][64] = {
	{ /* QF : 97 */
	{/* Y */
		0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04,
		0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x03,
		0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x03,
		0x01, 0x01, 0x01, 0x02, 0x03, 0x05, 0x05, 0x04,
		0x01, 0x01, 0x02, 0x03, 0x04, 0x07, 0x06, 0x05,
		0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x06,
		0x03, 0x04, 0x05, 0x05, 0x06, 0x07, 0x07, 0x06,
		0x04, 0x06, 0x06, 0x06, 0x07, 0x06, 0x06, 0x06,
	},
	{/* CbCr */
		0x01, 0x01, 0x01, 0x03, 0x06, 0x06, 0x06, 0x06,
		0x01, 0x01, 0x02, 0x04, 0x06, 0x06, 0x06, 0x06,
		0x01, 0x02, 0x03, 0x06, 0x06, 0x06, 0x06, 0x06,
		0x03, 0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
		0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
		0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
		0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
		0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
	},
	},
	{ /* QF : 92 */
	{/* Y */
		0x03, 0x02, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0a,
		0x02, 0x02, 0x02, 0x03, 0x04, 0x09, 0x0a, 0x09,
		0x02, 0x02, 0x03, 0x04, 0x06, 0x09, 0x0b, 0x09,
		0x02, 0x03, 0x04, 0x05, 0x08, 0x0e, 0x0d, 0x0a,
		0x03, 0x04, 0x06, 0x09, 0x0b, 0x11, 0x10, 0x0c,
		0x04, 0x06, 0x09, 0x0a, 0x0d, 0x11, 0x12, 0x0f,
		0x08, 0x0a, 0x0c, 0x0e, 0x10, 0x13, 0x13, 0x10,
		0x0c, 0x0f, 0x0f, 0x10, 0x12, 0x10, 0x10, 0x10,
	},
	{/* CbCr */
		0x03, 0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10,
		0x03, 0x03, 0x04, 0x0b, 0x10, 0x10, 0x10, 0x10,
		0x04, 0x04, 0x09, 0x10, 0x10, 0x10, 0x10, 0x10,
		0x08, 0x0b, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
		0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
		0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
		0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
		0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
	},
	},
	{ /* QF : 88 */
	{/* Y */
		0x04, 0x03, 0x02, 0x04, 0x06, 0x0a, 0x0c,	0x0f,
		0x03, 0x03, 0x03, 0x05, 0x06, 0x0e, 0x0e, 0x0d,
		0x03, 0x03, 0x04, 0x06, 0x0a, 0x0e, 0x11, 0x0d,
		0x03, 0x04, 0x05, 0x07, 0x0c, 0x15, 0x13,	0x0f,
		0x04, 0x05, 0x09, 0x0d, 0x10, 0x1a, 0x19, 0x12,
		0x06, 0x08, 0x0d, 0x0f, 0x13, 0x19, 0x1b, 0x16,
		0x0c, 0x0f, 0x13, 0x15, 0x19, 0x1d, 0x1d,	0x18,
		0x11, 0x16, 0x17, 0x18, 0x1b, 0x18, 0x19, 0x18,
	},
	{/* CbCr */
		0x04, 0x04, 0x06, 0x0b, 0x18, 0x18, 0x18, 0x18,
		0x04, 0x05, 0x06, 0x10, 0x18, 0x18, 0x18,	0x18,
		0x06, 0x06, 0x0d, 0x18, 0x18, 0x18, 0x18,	0x18,
		0x0b, 0x10, 0x18, 0x18, 0x18, 0x18, 0x18,	0x18,
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,	0x18,
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,	0x18,
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,	0x18,
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,	0x18,
	},
	},
	{ /* QF : 38 */
	{/* Y */
		0x15, 0x0e, 0x0d, 0x15, 0x1f, 0x34, 0x43, 0x50,
		0x10, 0x10, 0x12, 0x19, 0x22, 0x4c, 0x4f, 0x48,
		0x12, 0x11, 0x15, 0x1f, 0x34, 0x4b, 0x5a, 0x49,
		0x12, 0x16, 0x1d, 0x26, 0x43, 0x72, 0x69, 0x51,
		0x18, 0x1d, 0x30, 0x49, 0x59, 0x8f, 0x87, 0x65,
		0x1f, 0x2e, 0x48, 0x54, 0x6a, 0x88, 0x94, 0x79,
		0x40, 0x54, 0x66, 0x72, 0x87, 0x9f, 0x9d, 0x84,
		0x5e, 0x79, 0x7c, 0x80, 0x93, 0x83, 0x87, 0x82,
	},
	{/* CbCr */
		0x16, 0x18, 0x1f, 0x3e, 0x82, 0x82, 0x82, 0x82,
		0x18, 0x1c, 0x22, 0x56, 0x82, 0x82, 0x82, 0x82,
		0x1f, 0x22, 0x49, 0x82, 0x82, 0x82, 0x82, 0x82,
		0x3e, 0x56, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,
		0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,
		0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,
		0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,
		0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,
	},
	},
	{ /* QF : 30 */
	{/* Y */
		0x1b, 0x12, 0x11, 0x1b, 0x28, 0x42, 0x55, 0x65,
		0x14, 0x14, 0x17, 0x20, 0x2b, 0x60, 0x64, 0x5b,
		0x17, 0x16, 0x1b, 0x28, 0x42, 0x5f, 0x73, 0x5d,
		0x17, 0x1c, 0x25, 0x30, 0x55, 0x90, 0x85, 0x67,
		0x1e, 0x25, 0x3d, 0x5d, 0x71, 0xb5, 0xab, 0x80,
		0x28, 0x3a, 0x5b, 0x6a, 0x86, 0xad, 0xbc, 0x99,
		0x51, 0x6a, 0x81, 0x90, 0xab, 0xc9, 0xc7, 0xa8,
		0x78, 0x99, 0x9e, 0xa3, 0xba, 0xa6, 0xab, 0xa4,
	},
	{/* CbCr */
		0x1c, 0x1e, 0x28, 0x4e, 0xa4, 0xa4, 0xa4, 0xa4,
		0x1e, 0x23, 0x2b, 0x6e, 0xa4, 0xa4, 0xa4, 0xa4,
		0x28, 0x2b, 0x5d, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
		0x4e, 0x6e, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
		0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
		0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
		0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
		0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
	},
	},
	{ /* QF : 10 */
	{/* Y */
		0x50, 0x37, 0x32, 0x50, 0x78, 0xc8, 0xff, 0xff,
		0x3c, 0x3c, 0x46, 0x5f, 0x82, 0xff, 0xff, 0xff,
		0x46, 0x41, 0x50, 0x78, 0xc8, 0xff, 0xff, 0xff,
		0x46, 0x55, 0x6e, 0x91, 0xff, 0xff, 0xff, 0xff,
		0x5a, 0x6e, 0xb9, 0xff, 0xff, 0xff, 0xff, 0xff,
		0x78, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	},
	{/* CbCr */
		0x55, 0x5a, 0x78, 0xeb, 0xff, 0xff, 0xff, 0xff,
		0x5a, 0x69, 0x82, 0xff, 0xff, 0xff, 0xff, 0xff,
		0x78, 0x82, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	},
	}
};

/* Huffman Table0 */
static unsigned char len_dc_luminance[16] = { 0, 1, 5, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 };
static unsigned char val_dc_luminance[12] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static unsigned char len_ac_luminance[16] = { 0, 2, 1, 3, 3, 2, 4, 3, 5, 5, 4, 4, 0, 0, 1, 0x7d };
static unsigned char val_ac_luminance[162] = {
	0x01, 0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12,
	0x21, 0x31, 0x41, 0x06, 0x13, 0x51, 0x61, 0x07,
	0x22, 0x71, 0x14, 0x32, 0x81, 0x91, 0xa1, 0x08,
	0x23, 0x42, 0xb1, 0xc1, 0x15, 0x52, 0xd1, 0xf0,
	0x24, 0x33, 0x62, 0x72, 0x82, 0x09, 0x0a, 0x16,
	0x17, 0x18, 0x19, 0x1a, 0x25, 0x26, 0x27, 0x28,
	0x29, 0x2a, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
	0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
	0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
	0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69,
	0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79,
	0x7a, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89,
	0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98,
	0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7,
	0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6,
	0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5,
	0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4,
	0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe1, 0xe2,
	0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea,
	0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8,
	0xf9, 0xfa
};


/* Huffman Table1 */
static unsigned char len_dc_chrominance[16] = { 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 };
static unsigned char val_dc_chrominance[12] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static unsigned char len_ac_chrominance[16] = { 0, 2, 1, 2, 4, 4, 3, 4, 7, 5, 4, 4, 0, 1, 2, 0x77 };
static unsigned char val_ac_chrominance[162] = {
	0x00, 0x01, 0x02, 0x03, 0x11, 0x04, 0x05, 0x21,
	0x31, 0x06, 0x12, 0x41, 0x51, 0x07, 0x61, 0x71,
	0x13, 0x22, 0x32, 0x81, 0x08, 0x14, 0x42, 0x91,
	0xa1, 0xb1, 0xc1, 0x09, 0x23, 0x33, 0x52, 0xf0,
	0x15, 0x62, 0x72, 0xd1, 0x0a, 0x16, 0x24, 0x34,
	0xe1, 0x25, 0xf1, 0x17, 0x18, 0x19, 0x1a, 0x26,
	0x27, 0x28, 0x29, 0x2a, 0x35, 0x36, 0x37, 0x38,
	0x39, 0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48,
	0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58,
	0x59, 0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
	0x69, 0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
	0x79, 0x7a, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
	0x88, 0x89, 0x8a, 0x92, 0x93, 0x94, 0x95, 0x96,
	0x97, 0x98, 0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5,
	0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4,
	0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3,
	0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2,
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda,
	0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9,
	0xea, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8,
	0xf9, 0xfa
};

#endif /* __JPEG_HX_CONF_H__ */
