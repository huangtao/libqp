/*
 * Majang game algorithm library
 * This file is distributed under the BSD License.
 * Copyright (C) 2015 Huang Tao(huangtao117@gmail.com)
 */
#ifndef _MAJANG_H
#define _MAJANG_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/* majiang suit */
typedef enum majiang_suit {
    mjSuitNone,
	mjSuitCharacter,            /* wanzi pai */
    mjSuitWan = mjSuitCharacter,
    mjSuitBamboo,               /* tiaozi pai */
    mjSuitTiao = mjSuitBamboo,
    mjSuitSuo = mjSuitBamboo,
    mjSuitCircle,               /* tongzi pai */
    mjSuitTong = mjSuitCircle,
    mjSuitWind,                 /* feng pai */
	mjSuitFeng = mjSuitWind,
    mjSuitDragon,
	mjSuitZFB = mjSuitDragon,	/* zhong,fa,bai */
    mjSuitFlower,               /* hua pai */
    mjSuitSeason,
	mjSuitUnknow
}mjSuit;

/* majiang ordinal */
typedef enum majiang_ordinal {
	mjNone,
    mj1,
    mj2,
    mj3,
    mj4,
    mj5,
    mj6,
    mj7,
    mj8,
    mj9
}mjOrdinal;

typedef enum majiang_wind {
    mjEast = 1,
    mjSouth,
    mjWest,
    mjNorth
}mjWind;

typedef enum majiang_dragon {
    mjRed = 1,
    mjZhong = mjRed,
    mjGreen,
    mjFa = mjGreen,
    mjWhite,
    mjBai = mjWhite
}mjDragon;

typedef enum majiang_flower {
    mjPlum = 1,
    mjMei = mjPlum,
    mjOrchid,
    mjLan = mjOrchid,
    mjChrysan,
    mjJu = mjChrysan,
    mjBamboo,
    mjZhu = mjBamboo
}mjFlower;

typedef enum majiang_season {
    mjSpring = 1,
    mjCun = mjSpring,
    mjSummer,
    mjXia = mjSummer,
    mjAutumn,
    mjQiu = mjAutumn,
    mjWinter,
    mjDong = mjWinter
}mjSeason;

/* a mj pai */
typedef struct mjpai_s {
    int suit;   /* suit */
    int sign;   /* sign */
}mjpai_t;

int mjpai_equal(mjpai_t* a, mjpai_t* b);
unsigned char mjpai_encode(mjpai_t* card);
void mjpai_decode(mjpai_t* card, unsigned char x);

void mj_shuffle(mjpai_t* cards, int len);
void mj_trim(mjpai_t* cards, int len);
/**
 * print cards to a readable string
 */
const char* mj_string(mjpai_t* cards, int len, int line_number);
const char* mjpai_string(mjpai_t* card);

#ifdef __cplusplus
}
#endif
#endif
