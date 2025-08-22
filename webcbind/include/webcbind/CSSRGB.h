#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSRGB
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSRGB)
 */
DECLARE_EMLITE_TYPE(CSSRGB, CSSColorValue);

/**
 * @brief Creates a new `CSSRGB` object. 
*/
CSSRGB CSSRGB_new0(jb_Any * r, jb_Any * g, jb_Any * b);

/**
 * @brief Creates a new `CSSRGB` object. 
*/
CSSRGB CSSRGB_new1(jb_Any * r, jb_Any * g, jb_Any * b, jb_Any * alpha);

/**
 * @brief Gets the `r` property. 
*/
jb_Any CSSRGB_r(const CSSRGB *self);

/**
 * @brief Sets the `r` property. 
*/
void CSSRGB_set_r(CSSRGB* self, jb_Any * value);

/**
 * @brief Gets the `g` property. 
*/
jb_Any CSSRGB_g(const CSSRGB *self);

/**
 * @brief Sets the `g` property. 
*/
void CSSRGB_set_g(CSSRGB* self, jb_Any * value);

/**
 * @brief Gets the `b` property. 
*/
jb_Any CSSRGB_b(const CSSRGB *self);

/**
 * @brief Sets the `b` property. 
*/
void CSSRGB_set_b(CSSRGB* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSRGB_alpha(const CSSRGB *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSRGB_set_alpha(CSSRGB* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
