#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DigitalCredential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential)
 */
DECLARE_EMLITE_TYPE(DigitalCredential, Credential);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object DigitalCredential_toJSON(DigitalCredential* self );

/**
 * @brief Gets the `protocol` property. 
*/
jb_String DigitalCredential_protocol(const DigitalCredential *self);

/**
 * @brief Gets the `data` property. 
*/
jb_Object DigitalCredential_data(const DigitalCredential *self);

/**
 * @brief Calls the `userAgentAllowsProtocol` method. 
*/
bool DigitalCredential_userAgentAllowsProtocol(DigitalCredential* self , jb_String * protocol);

#ifdef __cplusplus
}
#endif
