#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSOKLCH
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLCH)
 */
DECLARE_EMLITE_TYPE(CSSOKLCH, CSSColorValue);

/**
 * @brief Creates a new `CSSOKLCH` object. 
*/
CSSOKLCH CSSOKLCH_new0(jb_Any * l, jb_Any * c, jb_Any * h);

/**
 * @brief Creates a new `CSSOKLCH` object. 
*/
CSSOKLCH CSSOKLCH_new1(jb_Any * l, jb_Any * c, jb_Any * h, jb_Any * alpha);

/**
 * @brief Gets the `l` property. 
*/
jb_Any CSSOKLCH_l(const CSSOKLCH *self);

/**
 * @brief Sets the `l` property. 
*/
void CSSOKLCH_set_l(CSSOKLCH* self, jb_Any * value);

/**
 * @brief Gets the `c` property. 
*/
jb_Any CSSOKLCH_c(const CSSOKLCH *self);

/**
 * @brief Sets the `c` property. 
*/
void CSSOKLCH_set_c(CSSOKLCH* self, jb_Any * value);

/**
 * @brief Gets the `h` property. 
*/
jb_Any CSSOKLCH_h(const CSSOKLCH *self);

/**
 * @brief Sets the `h` property. 
*/
void CSSOKLCH_set_h(CSSOKLCH* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSOKLCH_alpha(const CSSOKLCH *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSOKLCH_set_alpha(CSSOKLCH* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
