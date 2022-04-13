#pragma once

#define RGBLED_NUM 16

// Undef and redefine default brightness to half of 255
#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 255

// Enable Light Layers implementation
#define RGBLIGHT_LAYERS
// Allow Light Layers to override RGB off configuration
#if defined( RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF )
#undef RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#endif // RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF