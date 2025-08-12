#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSParserValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSParserBlock
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserBlock)
 */
DECLARE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);

/**
 * @brief Creates a new `CSSParserBlock` object. 
*/
CSSParserBlock CSSParserBlock_new(jb_String * name, jb_Array * body);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSParserBlock_name(const CSSParserBlock *self);

/**
 * @brief Gets the `body` property. 
*/
jb_Array CSSParserBlock_body(const CSSParserBlock *self);

#ifdef __cplusplus
}
#endif
