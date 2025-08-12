#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSLCH
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSLCH)
 */
DECLARE_EMLITE_TYPE(CSSLCH, CSSColorValue);

/**
 * @brief Creates a new `CSSLCH` object. 
*/
CSSLCH CSSLCH_new0(jb_Any * l, jb_Any * c, jb_Any * h);

/**
 * @brief Creates a new `CSSLCH` object. 
*/
CSSLCH CSSLCH_new1(jb_Any * l, jb_Any * c, jb_Any * h, jb_Any * alpha);

/**
 * @brief Gets the `l` property. 
*/
jb_Any CSSLCH_l(const CSSLCH *self);

/**
 * @brief Sets the `l` property. 
*/
void CSSLCH_set_l(CSSLCH* self, jb_Any * value);

/**
 * @brief Gets the `c` property. 
*/
jb_Any CSSLCH_c(const CSSLCH *self);

/**
 * @brief Sets the `c` property. 
*/
void CSSLCH_set_c(CSSLCH* self, jb_Any * value);

/**
 * @brief Gets the `h` property. 
*/
jb_Any CSSLCH_h(const CSSLCH *self);

/**
 * @brief Sets the `h` property. 
*/
void CSSLCH_set_h(CSSLCH* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSLCH_alpha(const CSSLCH *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSLCH_set_alpha(CSSLCH* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
