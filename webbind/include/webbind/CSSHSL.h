#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSHSL
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSHSL)
 */
DECLARE_EMLITE_TYPE(CSSHSL, CSSColorValue);

/**
 * @brief Creates a new `CSSHSL` object. 
*/
CSSHSL CSSHSL_new0(jb_Any * h, jb_Any * s, jb_Any * l);

/**
 * @brief Creates a new `CSSHSL` object. 
*/
CSSHSL CSSHSL_new1(jb_Any * h, jb_Any * s, jb_Any * l, jb_Any * alpha);

/**
 * @brief Gets the `h` property. 
*/
jb_Any CSSHSL_h(const CSSHSL *self);

/**
 * @brief Sets the `h` property. 
*/
void CSSHSL_set_h(CSSHSL* self, jb_Any * value);

/**
 * @brief Gets the `s` property. 
*/
jb_Any CSSHSL_s(const CSSHSL *self);

/**
 * @brief Sets the `s` property. 
*/
void CSSHSL_set_s(CSSHSL* self, jb_Any * value);

/**
 * @brief Gets the `l` property. 
*/
jb_Any CSSHSL_l(const CSSHSL *self);

/**
 * @brief Sets the `l` property. 
*/
void CSSHSL_set_l(CSSHSL* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSHSL_alpha(const CSSHSL *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSHSL_set_alpha(CSSHSL* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
