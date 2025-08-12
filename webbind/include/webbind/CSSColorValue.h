#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSColorValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorValue)
 */
DECLARE_EMLITE_TYPE(CSSColorValue, CSSStyleValue);

/**
 * @brief Calls the `parse` method. 
*/
jb_Any CSSColorValue_parse(CSSColorValue* self , jb_String * cssText);

#ifdef __cplusplus
}
#endif
