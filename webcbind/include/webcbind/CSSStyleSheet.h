#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "StyleSheet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheetInit CSSStyleSheetInit;
typedef struct CSSRule CSSRule;
typedef struct CSSRuleList CSSRuleList;


/**
 * @brief Interface CSSStyleSheet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleSheet)
 */
DECLARE_EMLITE_TYPE(CSSStyleSheet, StyleSheet);

/**
 * @brief Creates a new `CSSStyleSheet` object. 
*/
CSSStyleSheet CSSStyleSheet_new0();

/**
 * @brief Creates a new `CSSStyleSheet` object. 
*/
CSSStyleSheet CSSStyleSheet_new1(CSSStyleSheetInit * options);

/**
 * @brief Gets the `ownerRule` property. 
*/
CSSRule CSSStyleSheet_ownerRule(const CSSStyleSheet *self);

/**
 * @brief Gets the `cssRules` property. 
*/
CSSRuleList CSSStyleSheet_cssRules(const CSSStyleSheet *self);

/**
 * @brief Calls the `insertRule` method. 
*/
unsigned long CSSStyleSheet_insertRule0(CSSStyleSheet* self , jb_String * rule);

/**
 * @brief Calls the `insertRule` method. 
*/
unsigned long CSSStyleSheet_insertRule1(CSSStyleSheet* self , jb_String * rule, unsigned long index);

/**
 * @brief Calls the `deleteRule` method. 
*/
jb_Undefined CSSStyleSheet_deleteRule(CSSStyleSheet* self , unsigned long index);

/**
 * @brief Calls the `replace` method. 
*/
jb_Promise CSSStyleSheet_replace(CSSStyleSheet* self , jb_String * text);

/**
 * @brief Calls the `replaceSync` method. 
*/
jb_Undefined CSSStyleSheet_replaceSync(CSSStyleSheet* self , jb_String * text);

/**
 * @brief Gets the `rules` property. 
*/
CSSRuleList CSSStyleSheet_rules(const CSSStyleSheet *self);

/**
 * @brief Calls the `addRule` method. 
*/
long CSSStyleSheet_addRule0(CSSStyleSheet* self );

/**
 * @brief Calls the `addRule` method. 
*/
long CSSStyleSheet_addRule1(CSSStyleSheet* self , jb_String * selector);

/**
 * @brief Calls the `addRule` method. 
*/
long CSSStyleSheet_addRule2(CSSStyleSheet* self , jb_String * selector, jb_String * style);

/**
 * @brief Calls the `addRule` method. 
*/
long CSSStyleSheet_addRule3(CSSStyleSheet* self , jb_String * selector, jb_String * style, unsigned long index);

/**
 * @brief Calls the `removeRule` method. 
*/
jb_Undefined CSSStyleSheet_removeRule0(CSSStyleSheet* self );

/**
 * @brief Calls the `removeRule` method. 
*/
jb_Undefined CSSStyleSheet_removeRule1(CSSStyleSheet* self , unsigned long index);

#ifdef __cplusplus
}
#endif
