#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSOKLab
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSOKLab)
 */
DECLARE_EMLITE_TYPE(CSSOKLab, CSSColorValue);

/**
 * @brief Creates a new `CSSOKLab` object. 
*/
CSSOKLab CSSOKLab_new0(jb_Any * l, jb_Any * a, jb_Any * b);

/**
 * @brief Creates a new `CSSOKLab` object. 
*/
CSSOKLab CSSOKLab_new1(jb_Any * l, jb_Any * a, jb_Any * b, jb_Any * alpha);

/**
 * @brief Gets the `l` property. 
*/
jb_Any CSSOKLab_l(const CSSOKLab *self);

/**
 * @brief Sets the `l` property. 
*/
void CSSOKLab_set_l(CSSOKLab* self, jb_Any * value);

/**
 * @brief Gets the `a` property. 
*/
jb_Any CSSOKLab_a(const CSSOKLab *self);

/**
 * @brief Sets the `a` property. 
*/
void CSSOKLab_set_a(CSSOKLab* self, jb_Any * value);

/**
 * @brief Gets the `b` property. 
*/
jb_Any CSSOKLab_b(const CSSOKLab *self);

/**
 * @brief Sets the `b` property. 
*/
void CSSOKLab_set_b(CSSOKLab* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSOKLab_alpha(const CSSOKLab *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSOKLab_set_alpha(CSSOKLab* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
