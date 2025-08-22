#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSUnparsedValue CSSUnparsedValue;


/**
 * @brief Interface CSSVariableReferenceValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSVariableReferenceValue)
 */
DECLARE_EMLITE_TYPE(CSSVariableReferenceValue, em_Val);

/**
 * @brief Creates a new `CSSVariableReferenceValue` object. 
*/
CSSVariableReferenceValue CSSVariableReferenceValue_new0(jb_String * variable);

/**
 * @brief Creates a new `CSSVariableReferenceValue` object. 
*/
CSSVariableReferenceValue CSSVariableReferenceValue_new1(jb_String * variable, CSSUnparsedValue * fallback);

/**
 * @brief Gets the `variable` property. 
*/
jb_String CSSVariableReferenceValue_variable(const CSSVariableReferenceValue *self);

/**
 * @brief Sets the `variable` property. 
*/
void CSSVariableReferenceValue_set_variable(CSSVariableReferenceValue* self, jb_String * value);

/**
 * @brief Gets the `fallback` property. 
*/
CSSUnparsedValue CSSVariableReferenceValue_fallback(const CSSVariableReferenceValue *self);

#ifdef __cplusplus
}
#endif
