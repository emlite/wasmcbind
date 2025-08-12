#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CredentialData */
DECLARE_EMLITE_TYPE(CredentialData, em_Val);

/** @brief Getter of the id property */
jb_String CredentialData_id(const CredentialData *self);

/** @brief Setter of the id property */
void CredentialData_set_id(CredentialData* self, jb_String * value);

/** @brief Constructor of the CredentialData dictionary type */
CredentialData CredentialData_new();

#ifdef __cplusplus
}
#endif
