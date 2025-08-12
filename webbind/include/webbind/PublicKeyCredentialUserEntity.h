#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialEntity.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialUserEntity */
DECLARE_EMLITE_TYPE(PublicKeyCredentialUserEntity, PublicKeyCredentialEntity);

/** @brief Getter of the id property */
jb_Any PublicKeyCredentialUserEntity_id(const PublicKeyCredentialUserEntity *self);

/** @brief Setter of the id property */
void PublicKeyCredentialUserEntity_set_id(PublicKeyCredentialUserEntity* self, jb_Any * value);

/** @brief Getter of the displayName property */
jb_String PublicKeyCredentialUserEntity_displayName(const PublicKeyCredentialUserEntity *self);

/** @brief Setter of the displayName property */
void PublicKeyCredentialUserEntity_set_displayName(PublicKeyCredentialUserEntity* self, jb_String * value);

/** @brief Constructor of the PublicKeyCredentialUserEntity dictionary type */
PublicKeyCredentialUserEntity PublicKeyCredentialUserEntity_new();

#ifdef __cplusplus
}
#endif
