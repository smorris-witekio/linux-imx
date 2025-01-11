/*
 * ak4432_pdata.h  --  audio driver for ak4432
 *
 * Copyright (C) 2016 Asahi Kasei Microdevices Corporation
 *  Author                Date        Revision
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                      16/06/13	    1.0
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*
 */

#ifndef _AK4432_PDADA_H
#define _AK4432_PDADA_H

struct ak4432_platform_data {
	int pdn_gpio;
	int mute_gpio;
};

#endif

