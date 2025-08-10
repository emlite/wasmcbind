#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CredentialPropertiesOutput, em_Val);

bool CredentialPropertiesOutput_rk(const CredentialPropertiesOutput *self);

void CredentialPropertiesOutput_set_rk(CredentialPropertiesOutput* self, bool value);

CredentialPropertiesOutput CredentialPropertiesOutput_new();

#ifdef __cplusplus
}
#endif
