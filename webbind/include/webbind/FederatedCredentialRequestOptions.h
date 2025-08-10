#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FederatedCredentialRequestOptions, em_Val);

jb_Array FederatedCredentialRequestOptions_providers(const FederatedCredentialRequestOptions *self);

void FederatedCredentialRequestOptions_set_providers(FederatedCredentialRequestOptions* self, jb_Array * value);

jb_Array FederatedCredentialRequestOptions_protocols(const FederatedCredentialRequestOptions *self);

void FederatedCredentialRequestOptions_set_protocols(FederatedCredentialRequestOptions* self, jb_Array * value);

FederatedCredentialRequestOptions FederatedCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
