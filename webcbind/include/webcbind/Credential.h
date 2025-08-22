#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Credential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Credential)
 */
DECLARE_EMLITE_TYPE(Credential, em_Val);

/**
 * @brief Gets the `id` property. 
*/
jb_String Credential_id(const Credential *self);

/**
 * @brief Gets the `type` property. 
*/
jb_String Credential_type(const Credential *self);

/**
 * @brief Calls the `isConditionalMediationAvailable` method. 
*/
jb_Promise Credential_isConditionalMediationAvailable(Credential* self );

/**
 * @brief Calls the `willRequestConditionalCreation` method. 
*/
jb_Promise Credential_willRequestConditionalCreation(Credential* self );

#ifdef __cplusplus
}
#endif
