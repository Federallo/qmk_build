#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/


//defining rgb
#define RGBLIGHT_SLEEP
#define WS2812_DI_PIN D3
#define RGBLED_NUM 12
#define RGBLED_SPLIT { 6, 6 }

#ifdef RGBLIGHT_ENABLE
// Disabling some of these is a good way to save flash space.
#    undef RGBLIGHT_EFFECT_ALTERNATING     // 108
#    undef RGBLIGHT_EFFECT_RGB_TEST        // 158
#    undef RGBLIGHT_EFFECT_RAINBOW_MOOD    // 160
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT // 168
#    undef RGBLIGHT_EFFECT_RAINBOW_SWIRL   // 192
#    undef RGBLIGHT_EFFECT_BREATHING       // 348
#    undef RGBLIGHT_EFFECT_KNIGHT          // 336
#    undef RGBLIGHT_EFFECT_SNAKE           // 406
#    undef RGBLIGHT_EFFECT_CHRISTMAS       // 508
/*
#define RGBLIGHT_EFFECT_TWINKLE         // 1156
*/
#endif

// Disabled to save space
#define NO_ACTION_ONESHOT  // 332
#define NO_ACTION_MACRO    // 0
#define NO_ACTION_FUNCTION // 0
#define DISABLE_LEADER     // 0
			   //
//defining encoders pulses registration per detent
//#define ENCODERS_PAD_A_RIGHT { encdoer1a, encoder2a }
//#define ENCODERS_PAD_B_RIGHT { encoder1b, encoder2b }
//#define ENCODER_RESOLUTION_RIGHT { 1, 1 }

