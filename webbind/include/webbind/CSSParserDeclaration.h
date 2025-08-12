#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSParserRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSParserValue CSSParserValue;


/**
 * @brief Interface CSSParserDeclaration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserDeclaration)
 */
DECLARE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);

/**
 * @brief Creates a new `CSSParserDeclaration` object. 
*/
CSSParserDeclaration CSSParserDeclaration_new0(jb_String * name);

/**
 * @brief Creates a new `CSSParserDeclaration` object. 
*/
CSSParserDeclaration CSSParserDeclaration_new1(jb_String * name, jb_Array * body);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSParserDeclaration_name(const CSSParserDeclaration *self);

/**
 * @brief Gets the `body` property. 
*/
jb_Array CSSParserDeclaration_body(const CSSParserDeclaration *self);

#ifdef __cplusplus
}
#endif
