#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSParserRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSParserValue CSSParserValue;


/**
 * @brief Interface CSSParserQualifiedRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserQualifiedRule)
 */
DECLARE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);

/**
 * @brief Creates a new `CSSParserQualifiedRule` object. 
*/
CSSParserQualifiedRule CSSParserQualifiedRule_new0(jb_Array * prelude);

/**
 * @brief Creates a new `CSSParserQualifiedRule` object. 
*/
CSSParserQualifiedRule CSSParserQualifiedRule_new1(jb_Array * prelude, jb_Array * body);

/**
 * @brief Gets the `prelude` property. 
*/
jb_Array CSSParserQualifiedRule_prelude(const CSSParserQualifiedRule *self);

/**
 * @brief Gets the `body` property. 
*/
jb_Array CSSParserQualifiedRule_body(const CSSParserQualifiedRule *self);

#ifdef __cplusplus
}
#endif
