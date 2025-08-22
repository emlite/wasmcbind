#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSRule CSSRule;


/**
 * @brief Interface CSSStyleDeclaration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration)
 */
DECLARE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);

/**
 * @brief Gets the `cssText` property. 
*/
jb_String CSSStyleDeclaration_cssText(const CSSStyleDeclaration *self);

/**
 * @brief Sets the `cssText` property. 
*/
void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, jb_String * value);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CSSStyleDeclaration_length(const CSSStyleDeclaration *self);

/**
 * @brief Calls the `item` method. 
*/
jb_String CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index);

/**
 * @brief Calls the `getPropertyValue` method. 
*/
jb_String CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , jb_String * property);

/**
 * @brief Calls the `getPropertyPriority` method. 
*/
jb_String CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , jb_String * property);

/**
 * @brief Calls the `setProperty` method. 
*/
jb_Undefined CSSStyleDeclaration_setProperty0(CSSStyleDeclaration* self , jb_String * property, jb_String * value);

/**
 * @brief Calls the `setProperty` method. 
*/
jb_Undefined CSSStyleDeclaration_setProperty1(CSSStyleDeclaration* self , jb_String * property, jb_String * value, jb_String * priority);

/**
 * @brief Calls the `removeProperty` method. 
*/
jb_String CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , jb_String * property);

/**
 * @brief Gets the `parentRule` property. 
*/
CSSRule CSSStyleDeclaration_parentRule(const CSSStyleDeclaration *self);

#ifdef __cplusplus
}
#endif
