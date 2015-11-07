/* Sean Dai
 * Exported with brandontools v1.0
 * Invocation command was brandontools -mode4 -resize=20,32 -start=0 -weights=25,25,25,25 -dither=1 -dither_level=80 image /home/waxwing/Downloads/GBA emulator/HW11/struggle.jpg
 * Time-stamp: Tuesday 11/11/2014, 22:25:33
 *
 * Image Information
 * -----------------
 * /home/waxwing/Downloads/GBA emulator/HW11/struggle.jpg 20@32
 *
 * Quote/Fortune of the Day!
 * -------------------------
 * A C program is like a fast dance on a newly waxed dance floor by people carrying razors. - Waldi Ravens.
 *
 * An inch of time is an inch of gold.
 *
 * All bug reports / feature requests are to be sent to Brandon (brandon.whitehead@gatech.edu)
 */

const unsigned short image_palette[182] =
{
	0x0000,0x45a2,0x49a2,0x4183,0x6a43,0x4da4,0x45c4,0x49c4,0x3d65,0x4185,
	0x45a5,0x49a5,0x49c5,0x6645,0x6665,0x6a65,0x7ac5,0x39a6,0x4dc6,0x4de6,
	0x51e6,0x55e6,0x5206,0x5606,0x5a06,0x5a26,0x5e26,0x5e46,0x6246,0x6646,
	0x6666,0x7286,0x72a6,0x76a6,0x76c6,0x7ac6,0x45a7,0x45e7,0x5607,0x5e27,
	0x6247,0x6667,0x6a67,0x6a87,0x6e87,0x6ea7,0x72a7,0x76a7,0x76c7,0x7ac7,
	0x7ae7,0x7ee7,0x45e8,0x6668,0x6e88,0x6ea8,0x72a8,0x76a8,0x72c8,0x76c8,
	0x7ac8,0x7ae8,0x7ee8,0x39a9,0x45e9,0x4e29,0x5229,0x5a69,0x6669,0x6689,
	0x6a89,0x6ea9,0x76e9,0x420a,0x5a0a,0x4e2a,0x5a2a,0x524a,0x5e8a,0x628a,
	0x668a,0x6a8a,0x6aaa,0x6eaa,0x72aa,0x76ea,0x770a,0x10ab,0x420b,0x520b,
	0x4e4b,0x566b,0x5e6b,0x628b,0x6aab,0x6eab,0x6ecb,0x76eb,0x770b,0x7b0b,
	0x4a0c,0x522c,0x4e4c,0x626c,0x5a8c,0x66ac,0x6ecc,0x732c,0x772c,0x352d,
	0x4a0d,0x5a2d,0x4e4d,0x566d,0x5a6d,0x5e8d,0x4e2e,0x628e,0x62ae,0x66ae,
	0x6f0e,0x39af,0x3a0f,0x3e2f,0x3e4f,0x464f,0x524f,0x66af,0x2d70,0x4a70,
	0x2d51,0x3991,0x4e51,0x5eb1,0x66b1,0x66f1,0x7311,0x0432,0x2d92,0x3592,
	0x45f2,0x4612,0x4672,0x2113,0x35f3,0x62d3,0x6af3,0x0894,0x31b4,0x3a74,
	0x62f4,0x7b74,0x2135,0x62f5,0x7b95,0x7f95,0x1cf6,0x2db6,0x39d6,0x3df6,
	0x4236,0x4656,0x2977,0x3277,0x4a77,0x4297,0x2158,0x3a18,0x56f8,0x1939,
	0x31d9,0x3e19,0x7b7a,0x6f5b,0x467c,0x633c,0x6f9d,0x739d,0x633e,0x73be,
	0x77df,0x7bdf
};

const unsigned short struggle[320] =
{
	0x626c,0x6262,0x6162,0x6361,0x6363,0x6362,0x6162,0x6262,0x6262,0x6c62,
	0x3055,0x3030,0x1c31,0x2c1d,0x1c18,0x152e,0x1e1a,0x322b,0x3030,0x5530,
	0x3056,0x383b,0x2b2e,0x2b2c,0x382b,0x2c2c,0x3b2c,0x2c38,0x3b3b,0x5630,
	0x3056,0x1a3d,0x1912,0x080c,0x1a18,0x140b,0x1b0a,0x0929,0x3c38,0x5530,
	0x3056,0x2a3d,0x2c14,0x2829,0x1427,0x1918,0x1414,0x1317,0x3c2e,0x5530,
	0x3056,0x3b3b,0x3b3c,0x3d3c,0x333b,0x3a37,0x3b3d,0x3c3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3b3b,0x3b3b,0x363c,0x5084,0x3b31,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3b3b,0x313b,0x851f,0x74b2,0x3b31,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3b3b,0x5f30,0xa6a1,0x45a0,0x3b31,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x313b,0xa73b,0xaaae,0x4a93,0x3b33,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3d3b,0x8a59,0xa7ab,0x6d89,0x3922,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3b3b,0x9479,0xa9a2,0x829e,0x6f8b,0x3b32,0x3b3b,0x5530,
	0x3056,0x3b3b,0x303b,0x8b72,0x8f98,0x9faf,0x47a4,0x3b31,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3b3b,0x3851,0x808d,0x8364,0x238c,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x3b3b,0x3030,0x5d5e,0x4c30,0x3244,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3c3b,0x3b3d,0x3d3d,0x3232,0x3d3c,0x3d3e,0x3d3d,0x3b3d,0x5530,
	0x3055,0x283b,0x3828,0x2728,0x2928,0x293b,0x2819,0x2829,0x3d2b,0x5530,
	0x3056,0x2c3b,0x2e28,0x1d29,0x2d2d,0x2b3b,0x2b28,0x292a,0x3c2a,0x5530,
	0x3056,0x3c3b,0x3b3d,0x6132,0x313c,0x603b,0x3d32,0x3d3d,0x3b3d,0x5530,
	0x3056,0x3b3b,0x303b,0x966a,0x6053,0x9969,0x3047,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x233c,0xb177,0x9173,0xad87,0x3150,0x3b3b,0x3b3b,0x5530,
	0x3056,0x3b3b,0x2e2a,0x7516,0x191c,0x7652,0x460f,0x315f,0x3b3b,0x5530,
	0x3056,0x3d3b,0x0c1e,0x0203,0x0607,0x6b4f,0x5c68,0x3d35,0x3b3b,0x5530,
	0x3056,0x2c3c,0x0528,0x6024,0x1101,0x785b,0x957b,0x2f41,0x3b3b,0x5530,
	0x3056,0x4731,0x7086,0x0e7d,0x7e65,0x4f25,0x4e4d,0x1f7a,0x3b3d,0x5530,
	0x3056,0x303b,0x9088,0x3f57,0xa8ac,0x4b49,0x3d5a,0x2c40,0x3b3d,0x5530,
	0x3056,0x303b,0x423b,0x809c,0xa54f,0x347c,0x3066,0x2726,0x3b3d,0x5530,
	0x3056,0x3b3b,0x2630,0x6e9d,0x8104,0x58a3,0x5443,0x6792,0x3b30,0x5530,
	0x3b56,0x3b3b,0x283c,0x3837,0x2b1d,0x718e,0x5123,0x677f,0x3b30,0x563b,
	0x2148,0x2222,0x0d23,0x3120,0x0e0f,0x2210,0x2330,0x2122,0x3030,0x4822,
	0x9a9a,0x9a9a,0x9a9a,0x9a9a,0x9a9b,0x9a9a,0x9797,0x9797,0x9797,0x9a97,
	0xb5b5,0xb5b5,0xb5b5,0xb5b5,0xb5b5,0xb4b5,0xb3b1,0xb1b1,0xb0b1,0xb1b1
};
