#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Screen.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ScreenDetailed
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ScreenDetailed)
 */
DECLARE_EMLITE_TYPE(ScreenDetailed, Screen);

/**
 * @brief Gets the `availLeft` property. 
*/
long ScreenDetailed_availLeft(const ScreenDetailed *self);

/**
 * @brief Gets the `availTop` property. 
*/
long ScreenDetailed_availTop(const ScreenDetailed *self);

/**
 * @brief Gets the `left` property. 
*/
long ScreenDetailed_left(const ScreenDetailed *self);

/**
 * @brief Gets the `top` property. 
*/
long ScreenDetailed_top(const ScreenDetailed *self);

/**
 * @brief Gets the `isPrimary` property. 
*/
bool ScreenDetailed_isPrimary(const ScreenDetailed *self);

/**
 * @brief Gets the `isInternal` property. 
*/
bool ScreenDetailed_isInternal(const ScreenDetailed *self);

/**
 * @brief Gets the `devicePixelRatio` property. 
*/
float ScreenDetailed_devicePixelRatio(const ScreenDetailed *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String ScreenDetailed_label(const ScreenDetailed *self);

#ifdef __cplusplus
}
#endif
