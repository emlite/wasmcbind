#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScreenOrientation ScreenOrientation;


/**
 * @brief Interface Screen
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Screen)
 */
DECLARE_EMLITE_TYPE(Screen, em_Val);

/**
 * @brief Gets the `availWidth` property. 
*/
long Screen_availWidth(const Screen *self);

/**
 * @brief Gets the `availHeight` property. 
*/
long Screen_availHeight(const Screen *self);

/**
 * @brief Gets the `width` property. 
*/
long Screen_width(const Screen *self);

/**
 * @brief Gets the `height` property. 
*/
long Screen_height(const Screen *self);

/**
 * @brief Gets the `colorDepth` property. 
*/
unsigned long Screen_colorDepth(const Screen *self);

/**
 * @brief Gets the `pixelDepth` property. 
*/
unsigned long Screen_pixelDepth(const Screen *self);

/**
 * @brief Gets the `orientation` property. 
*/
ScreenOrientation Screen_orientation(const Screen *self);

/**
 * @brief Gets the `isExtended` property. 
*/
bool Screen_isExtended(const Screen *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any Screen_onchange(const Screen *self);

/**
 * @brief Sets the `onchange` property. 
*/
void Screen_set_onchange(Screen* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
