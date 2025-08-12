#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIdentityProviderDetails */
DECLARE_EMLITE_TYPE(RTCIdentityProviderDetails, em_Val);

/** @brief Getter of the domain property */
jb_String RTCIdentityProviderDetails_domain(const RTCIdentityProviderDetails *self);

/** @brief Setter of the domain property */
void RTCIdentityProviderDetails_set_domain(RTCIdentityProviderDetails* self, jb_String * value);

/** @brief Getter of the protocol property */
jb_String RTCIdentityProviderDetails_protocol(const RTCIdentityProviderDetails *self);

/** @brief Setter of the protocol property */
void RTCIdentityProviderDetails_set_protocol(RTCIdentityProviderDetails* self, jb_String * value);

/** @brief Constructor of the RTCIdentityProviderDetails dictionary type */
RTCIdentityProviderDetails RTCIdentityProviderDetails_new();

#ifdef __cplusplus
}
#endif
