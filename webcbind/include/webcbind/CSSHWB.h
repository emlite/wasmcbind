#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;


/**
 * @brief Interface CSSHWB
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSHWB)
 */
DECLARE_EMLITE_TYPE(CSSHWB, CSSColorValue);

/**
 * @brief Creates a new `CSSHWB` object. 
*/
CSSHWB CSSHWB_new0(CSSNumericValue * h, jb_Any * w, jb_Any * b);

/**
 * @brief Creates a new `CSSHWB` object. 
*/
CSSHWB CSSHWB_new1(CSSNumericValue * h, jb_Any * w, jb_Any * b, jb_Any * alpha);

/**
 * @brief Gets the `h` property. 
*/
CSSNumericValue CSSHWB_h(const CSSHWB *self);

/**
 * @brief Sets the `h` property. 
*/
void CSSHWB_set_h(CSSHWB* self, CSSNumericValue * value);

/**
 * @brief Gets the `w` property. 
*/
jb_Any CSSHWB_w(const CSSHWB *self);

/**
 * @brief Sets the `w` property. 
*/
void CSSHWB_set_w(CSSHWB* self, jb_Any * value);

/**
 * @brief Gets the `b` property. 
*/
jb_Any CSSHWB_b(const CSSHWB *self);

/**
 * @brief Sets the `b` property. 
*/
void CSSHWB_set_b(CSSHWB* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSHWB_alpha(const CSSHWB *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSHWB_set_alpha(CSSHWB* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
