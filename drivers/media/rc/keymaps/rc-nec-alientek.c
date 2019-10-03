// SPDX-License-Identifier: GPL-2.0+
// nec-alientek.c
//正点原子遥控器
// keymap imported from ir-keymaps.c
//
// Copyright (c) 2010 by Mauro Carvalho Chehab

#include <media/rc-map.h>
#include <linux/module.h>

/* Terratec Cinergy Hybrid T USB XS FM
   Mauro Carvalho Chehab
 */

static struct rc_map_table nec_alientek[] = {

	/* Terratec Grey IR, with most keys in orange */
	{0x45, KEY_POWER},
    {0x47, KEY_F1},  /*外星人头像*/

    { 0x46, KEY_UP},
    { 0x44, KEY_LEFT},
    { 0x40, KEY_OK},
    { 0x43, KEY_RIGHT},
    { 0x15, KEY_DOWN},

    { 0x09, KEY_VOLUMEUP},
	{ 0x07, KEY_VOLUMEDOWN},
        
	{ 0x16, KEY_1},
	{ 0x19, KEY_2},
	{ 0x0d, KEY_3},
	{ 0x0c, KEY_4},
	{ 0x18, KEY_5},
	{ 0x5e, KEY_6},
	{ 0x08, KEY_7},
	{ 0x1c, KEY_8},
	{ 0x5a, KEY_9},
	{ 0x42, KEY_0},

	{ 0x4a, KEY_BACKSPACE},


//	{ 0x40, KEY_PLAY},
//    { 0x40, KEY_PLAYPAUSE},
//	{ 0x141d, KEY_MUTE},//静音


//	{ 0x44, KEY_LAST},
//	{ 0x144e, KEY_REWIND},//倒带
//	{ 0x144f, KEY_FASTFORWARD},//快进
//	{ 0x43, KEY_NEXT},

};

static struct rc_map_list nec_alientek_map = {
	.map = {
		.scan     = nec_alientek,
		.size     = ARRAY_SIZE(nec_alientek),
		.rc_proto = RC_PROTO_NEC,
		.name     = RC_MAP_NEC_ALIENTEK,
	}
};

static int __init init_rc_map_nec_alientek(void)
{
	return rc_map_register(&nec_alientek_map);
}

static void __exit exit_rc_map_nec_alientek(void)
{
	rc_map_unregister(&nec_alientek_map);
}

module_init(init_rc_map_nec_alientek)
module_exit(exit_rc_map_nec_alientek)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("AK");
