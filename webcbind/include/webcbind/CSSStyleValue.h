#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSStyleValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleValue)
 */
DECLARE_EMLITE_TYPE(CSSStyleValue, em_Val);

/**
 * @brief Calls the `parse` method. 
*/
CSSStyleValue CSSStyleValue_parse(CSSStyleValue* self , jb_String * property, jb_String * cssText);

/**
 * @brief Calls the `parseAll` method. 
*/
jb_Array CSSStyleValue_parseAll(CSSStyleValue* self , jb_String * property, jb_String * cssText);

#ifdef __cplusplus
}
#endif
