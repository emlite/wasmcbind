#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSNamespaceRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSNamespaceRule)
 */
DECLARE_EMLITE_TYPE(CSSNamespaceRule, CSSRule);

/**
 * @brief Gets the `namespaceURI` property. 
*/
jb_String CSSNamespaceRule_namespaceURI(const CSSNamespaceRule *self);

/**
 * @brief Gets the `prefix` property. 
*/
jb_String CSSNamespaceRule_prefix(const CSSNamespaceRule *self);

#ifdef __cplusplus
}
#endif
