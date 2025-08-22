#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PublicKeyCredentialEntity.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialRpEntity */
DECLARE_EMLITE_TYPE(PublicKeyCredentialRpEntity, PublicKeyCredentialEntity);

/** @brief Getter of the id property */
jb_String PublicKeyCredentialRpEntity_id(const PublicKeyCredentialRpEntity *self);

/** @brief Setter of the id property */
void PublicKeyCredentialRpEntity_set_id(PublicKeyCredentialRpEntity* self, jb_String * value);

/** @brief Constructor of the PublicKeyCredentialRpEntity dictionary type */
PublicKeyCredentialRpEntity PublicKeyCredentialRpEntity_new();

#ifdef __cplusplus
}
#endif
