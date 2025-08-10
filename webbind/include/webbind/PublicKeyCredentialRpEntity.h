#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialEntity.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialRpEntity, PublicKeyCredentialEntity);

jb_String PublicKeyCredentialRpEntity_id(const PublicKeyCredentialRpEntity *self);

void PublicKeyCredentialRpEntity_set_id(PublicKeyCredentialRpEntity* self, jb_String * value);

PublicKeyCredentialRpEntity PublicKeyCredentialRpEntity_new();

#ifdef __cplusplus
}
#endif
