#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type UnknownCredentialOptions */
DECLARE_EMLITE_TYPE(UnknownCredentialOptions, em_Val);

/** @brief Getter of the rpId property */
jb_String UnknownCredentialOptions_rpId(const UnknownCredentialOptions *self);

/** @brief Setter of the rpId property */
void UnknownCredentialOptions_set_rpId(UnknownCredentialOptions* self, jb_String * value);

/** @brief Getter of the credentialId property */
jb_Any UnknownCredentialOptions_credentialId(const UnknownCredentialOptions *self);

/** @brief Setter of the credentialId property */
void UnknownCredentialOptions_set_credentialId(UnknownCredentialOptions* self, jb_Any * value);

/** @brief Constructor of the UnknownCredentialOptions dictionary type */
UnknownCredentialOptions UnknownCredentialOptions_new();

#ifdef __cplusplus
}
#endif
