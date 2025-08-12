#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSColor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor)
 */
DECLARE_EMLITE_TYPE(CSSColor, CSSColorValue);

/**
 * @brief Creates a new `CSSColor` object. 
*/
CSSColor CSSColor_new0(jb_Any * colorSpace, jb_Array * channels);

/**
 * @brief Creates a new `CSSColor` object. 
*/
CSSColor CSSColor_new1(jb_Any * colorSpace, jb_Array * channels, jb_Any * alpha);

/**
 * @brief Gets the `colorSpace` property. 
*/
jb_Any CSSColor_colorSpace(const CSSColor *self);

/**
 * @brief Sets the `colorSpace` property. 
*/
void CSSColor_set_colorSpace(CSSColor* self, jb_Any * value);

/**
 * @brief Gets the `channels` property. 
*/
jb_Array CSSColor_channels(const CSSColor *self);

/**
 * @brief Sets the `channels` property. 
*/
void CSSColor_set_channels(CSSColor* self, jb_Array * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSColor_alpha(const CSSColor *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSColor_set_alpha(CSSColor* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
