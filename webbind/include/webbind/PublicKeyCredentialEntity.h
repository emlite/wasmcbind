#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialEntity, em_Val);

jb_String PublicKeyCredentialEntity_name(const PublicKeyCredentialEntity *self);

void PublicKeyCredentialEntity_set_name(PublicKeyCredentialEntity* self, jb_String * value);

PublicKeyCredentialEntity PublicKeyCredentialEntity_new();

#ifdef __cplusplus
}
#endif
