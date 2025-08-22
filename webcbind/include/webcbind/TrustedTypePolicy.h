#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;
typedef struct TrustedScriptURL TrustedScriptURL;


/**
 * @brief Interface TrustedTypePolicy
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicy)
 */
DECLARE_EMLITE_TYPE(TrustedTypePolicy, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String TrustedTypePolicy_name(const TrustedTypePolicy *self);

/**
 * @brief Calls the `createHTML` method. 
*/
TrustedHTML TrustedTypePolicy_createHTML(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments);

/**
 * @brief Calls the `createScript` method. 
*/
TrustedScript TrustedTypePolicy_createScript(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments);

/**
 * @brief Calls the `createScriptURL` method. 
*/
TrustedScriptURL TrustedTypePolicy_createScriptURL(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments);

#ifdef __cplusplus
}
#endif
