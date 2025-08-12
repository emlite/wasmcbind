#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSParserValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSParserFunction
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserFunction)
 */
DECLARE_EMLITE_TYPE(CSSParserFunction, CSSParserValue);

/**
 * @brief Creates a new `CSSParserFunction` object. 
*/
CSSParserFunction CSSParserFunction_new(jb_String * name, jb_Array * args);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSParserFunction_name(const CSSParserFunction *self);

/**
 * @brief Gets the `args` property. 
*/
jb_Array CSSParserFunction_args(const CSSParserFunction *self);

#ifdef __cplusplus
}
#endif
