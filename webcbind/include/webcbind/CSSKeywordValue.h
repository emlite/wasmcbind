#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSKeywordValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeywordValue)
 */
DECLARE_EMLITE_TYPE(CSSKeywordValue, CSSStyleValue);

/**
 * @brief Creates a new `CSSKeywordValue` object. 
*/
CSSKeywordValue CSSKeywordValue_new(jb_String * value);

/**
 * @brief Gets the `value` property. 
*/
jb_String CSSKeywordValue_value(const CSSKeywordValue *self);

/**
 * @brief Sets the `value` property. 
*/
void CSSKeywordValue_set_value(CSSKeywordValue* self, jb_String * value);

#ifdef __cplusplus
}
#endif
