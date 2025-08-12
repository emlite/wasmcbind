#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type OTPCredentialRequestOptions */
DECLARE_EMLITE_TYPE(OTPCredentialRequestOptions, em_Val);

/** @brief Getter of the transport property */
jb_Array OTPCredentialRequestOptions_transport(const OTPCredentialRequestOptions *self);

/** @brief Setter of the transport property */
void OTPCredentialRequestOptions_set_transport(OTPCredentialRequestOptions* self, jb_Array * value);

/** @brief Constructor of the OTPCredentialRequestOptions dictionary type */
OTPCredentialRequestOptions OTPCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
