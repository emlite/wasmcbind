#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIdentityProviderOptions */
DECLARE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);

/** @brief Getter of the protocol property */
jb_String RTCIdentityProviderOptions_protocol(const RTCIdentityProviderOptions *self);

/** @brief Setter of the protocol property */
void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, jb_String * value);

/** @brief Getter of the usernameHint property */
jb_String RTCIdentityProviderOptions_usernameHint(const RTCIdentityProviderOptions *self);

/** @brief Setter of the usernameHint property */
void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, jb_String * value);

/** @brief Getter of the peerIdentity property */
jb_String RTCIdentityProviderOptions_peerIdentity(const RTCIdentityProviderOptions *self);

/** @brief Setter of the peerIdentity property */
void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, jb_String * value);

/** @brief Constructor of the RTCIdentityProviderOptions dictionary type */
RTCIdentityProviderOptions RTCIdentityProviderOptions_new();

#ifdef __cplusplus
}
#endif
