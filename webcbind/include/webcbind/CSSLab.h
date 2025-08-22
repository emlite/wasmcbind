#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSColorValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSLab
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSLab)
 */
DECLARE_EMLITE_TYPE(CSSLab, CSSColorValue);

/**
 * @brief Creates a new `CSSLab` object. 
*/
CSSLab CSSLab_new0(jb_Any * l, jb_Any * a, jb_Any * b);

/**
 * @brief Creates a new `CSSLab` object. 
*/
CSSLab CSSLab_new1(jb_Any * l, jb_Any * a, jb_Any * b, jb_Any * alpha);

/**
 * @brief Gets the `l` property. 
*/
jb_Any CSSLab_l(const CSSLab *self);

/**
 * @brief Sets the `l` property. 
*/
void CSSLab_set_l(CSSLab* self, jb_Any * value);

/**
 * @brief Gets the `a` property. 
*/
jb_Any CSSLab_a(const CSSLab *self);

/**
 * @brief Sets the `a` property. 
*/
void CSSLab_set_a(CSSLab* self, jb_Any * value);

/**
 * @brief Gets the `b` property. 
*/
jb_Any CSSLab_b(const CSSLab *self);

/**
 * @brief Sets the `b` property. 
*/
void CSSLab_set_b(CSSLab* self, jb_Any * value);

/**
 * @brief Gets the `alpha` property. 
*/
jb_Any CSSLab_alpha(const CSSLab *self);

/**
 * @brief Sets the `alpha` property. 
*/
void CSSLab_set_alpha(CSSLab* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
