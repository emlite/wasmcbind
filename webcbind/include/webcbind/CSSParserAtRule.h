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
 * @brief Interface CSSParserAtRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserAtRule)
 */
DECLARE_EMLITE_TYPE(CSSParserAtRule, CSSParserRule);

/**
 * @brief Creates a new `CSSParserAtRule` object. 
*/
CSSParserAtRule CSSParserAtRule_new0(jb_String * name, jb_Array * prelude);

/**
 * @brief Creates a new `CSSParserAtRule` object. 
*/
CSSParserAtRule CSSParserAtRule_new1(jb_String * name, jb_Array * prelude, jb_Array * body);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSParserAtRule_name(const CSSParserAtRule *self);

/**
 * @brief Gets the `prelude` property. 
*/
jb_Array CSSParserAtRule_prelude(const CSSParserAtRule *self);

/**
 * @brief Gets the `body` property. 
*/
jb_Array CSSParserAtRule_body(const CSSParserAtRule *self);

#ifdef __cplusplus
}
#endif
