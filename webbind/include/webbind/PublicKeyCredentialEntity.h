#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialEntity */
DECLARE_EMLITE_TYPE(PublicKeyCredentialEntity, em_Val);

/** @brief Getter of the name property */
jb_String PublicKeyCredentialEntity_name(const PublicKeyCredentialEntity *self);

/** @brief Setter of the name property */
void PublicKeyCredentialEntity_set_name(PublicKeyCredentialEntity* self, jb_String * value);

/** @brief Constructor of the PublicKeyCredentialEntity dictionary type */
PublicKeyCredentialEntity PublicKeyCredentialEntity_new();

#ifdef __cplusplus
}
#endif
