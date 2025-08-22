#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSCounterStyleRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSCounterStyleRule)
 */
DECLARE_EMLITE_TYPE(CSSCounterStyleRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSCounterStyleRule_name(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `name` property. 
*/
void CSSCounterStyleRule_set_name(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `system` property. 
*/
jb_String CSSCounterStyleRule_system(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `system` property. 
*/
void CSSCounterStyleRule_set_system(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `symbols` property. 
*/
jb_String CSSCounterStyleRule_symbols(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `symbols` property. 
*/
void CSSCounterStyleRule_set_symbols(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `additiveSymbols` property. 
*/
jb_String CSSCounterStyleRule_additiveSymbols(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `additiveSymbols` property. 
*/
void CSSCounterStyleRule_set_additiveSymbols(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `negative` property. 
*/
jb_String CSSCounterStyleRule_negative(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `negative` property. 
*/
void CSSCounterStyleRule_set_negative(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `prefix` property. 
*/
jb_String CSSCounterStyleRule_prefix(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `prefix` property. 
*/
void CSSCounterStyleRule_set_prefix(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `suffix` property. 
*/
jb_String CSSCounterStyleRule_suffix(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `suffix` property. 
*/
void CSSCounterStyleRule_set_suffix(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `range` property. 
*/
jb_String CSSCounterStyleRule_range(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `range` property. 
*/
void CSSCounterStyleRule_set_range(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `pad` property. 
*/
jb_String CSSCounterStyleRule_pad(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `pad` property. 
*/
void CSSCounterStyleRule_set_pad(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `speakAs` property. 
*/
jb_String CSSCounterStyleRule_speakAs(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `speakAs` property. 
*/
void CSSCounterStyleRule_set_speakAs(CSSCounterStyleRule* self, jb_String * value);

/**
 * @brief Gets the `fallback` property. 
*/
jb_String CSSCounterStyleRule_fallback(const CSSCounterStyleRule *self);

/**
 * @brief Sets the `fallback` property. 
*/
void CSSCounterStyleRule_set_fallback(CSSCounterStyleRule* self, jb_String * value);

#ifdef __cplusplus
}
#endif
