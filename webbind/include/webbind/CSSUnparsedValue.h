#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSUnparsedValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnparsedValue)
 */
DECLARE_EMLITE_TYPE(CSSUnparsedValue, CSSStyleValue);

/**
 * @brief Creates a new `CSSUnparsedValue` object. 
*/
CSSUnparsedValue CSSUnparsedValue_new(jb_Array * members);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CSSUnparsedValue_length(const CSSUnparsedValue *self);

#ifdef __cplusplus
}
#endif
