#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialEntity.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialUserEntity, PublicKeyCredentialEntity);

jb_Any PublicKeyCredentialUserEntity_id(const PublicKeyCredentialUserEntity *self);

void PublicKeyCredentialUserEntity_set_id(PublicKeyCredentialUserEntity* self, jb_Any * value);

jb_String PublicKeyCredentialUserEntity_displayName(const PublicKeyCredentialUserEntity *self);

void PublicKeyCredentialUserEntity_set_displayName(PublicKeyCredentialUserEntity* self, jb_String * value);

PublicKeyCredentialUserEntity PublicKeyCredentialUserEntity_new();

#ifdef __cplusplus
}
#endif
