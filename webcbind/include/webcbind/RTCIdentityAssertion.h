#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface RTCIdentityAssertion
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertion)
 */
DECLARE_EMLITE_TYPE(RTCIdentityAssertion, em_Val);

/**
 * @brief Creates a new `RTCIdentityAssertion` object. 
*/
RTCIdentityAssertion RTCIdentityAssertion_new(jb_String * idp, jb_String * name);

/**
 * @brief Gets the `idp` property. 
*/
jb_String RTCIdentityAssertion_idp(const RTCIdentityAssertion *self);

/**
 * @brief Sets the `idp` property. 
*/
void RTCIdentityAssertion_set_idp(RTCIdentityAssertion* self, jb_String * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String RTCIdentityAssertion_name(const RTCIdentityAssertion *self);

/**
 * @brief Sets the `name` property. 
*/
void RTCIdentityAssertion_set_name(RTCIdentityAssertion* self, jb_String * value);

#ifdef __cplusplus
}
#endif
