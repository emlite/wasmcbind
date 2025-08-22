#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CredentialPropertiesOutput */
DECLARE_EMLITE_TYPE(CredentialPropertiesOutput, em_Val);

/** @brief Getter of the rk property */
bool CredentialPropertiesOutput_rk(const CredentialPropertiesOutput *self);

/** @brief Setter of the rk property */
void CredentialPropertiesOutput_set_rk(CredentialPropertiesOutput* self, bool value);

/** @brief Constructor of the CredentialPropertiesOutput dictionary type */
CredentialPropertiesOutput CredentialPropertiesOutput_new();

#ifdef __cplusplus
}
#endif
