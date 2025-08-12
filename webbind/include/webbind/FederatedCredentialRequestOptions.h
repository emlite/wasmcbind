#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FederatedCredentialRequestOptions */
DECLARE_EMLITE_TYPE(FederatedCredentialRequestOptions, em_Val);

/** @brief Getter of the providers property */
jb_Array FederatedCredentialRequestOptions_providers(const FederatedCredentialRequestOptions *self);

/** @brief Setter of the providers property */
void FederatedCredentialRequestOptions_set_providers(FederatedCredentialRequestOptions* self, jb_Array * value);

/** @brief Getter of the protocols property */
jb_Array FederatedCredentialRequestOptions_protocols(const FederatedCredentialRequestOptions *self);

/** @brief Setter of the protocols property */
void FederatedCredentialRequestOptions_set_protocols(FederatedCredentialRequestOptions* self, jb_Array * value);

/** @brief Constructor of the FederatedCredentialRequestOptions dictionary type */
FederatedCredentialRequestOptions FederatedCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
