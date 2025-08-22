#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSStyleDeclaration.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSStyleProperties
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleProperties)
 */
DECLARE_EMLITE_TYPE(CSSStyleProperties, CSSStyleDeclaration);

/**
 * @brief Gets the `cssFloat` property. 
*/
jb_String CSSStyleProperties_cssFloat(const CSSStyleProperties *self);

/**
 * @brief Sets the `cssFloat` property. 
*/
void CSSStyleProperties_set_cssFloat(CSSStyleProperties* self, jb_String * value);

#ifdef __cplusplus
}
#endif
