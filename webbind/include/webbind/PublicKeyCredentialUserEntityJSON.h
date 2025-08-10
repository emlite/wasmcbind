#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialUserEntityJSON, em_Val);

jb_Any PublicKeyCredentialUserEntityJSON_id(const PublicKeyCredentialUserEntityJSON *self);

void PublicKeyCredentialUserEntityJSON_set_id(PublicKeyCredentialUserEntityJSON* self, jb_Any * value);

jb_String PublicKeyCredentialUserEntityJSON_name(const PublicKeyCredentialUserEntityJSON *self);

void PublicKeyCredentialUserEntityJSON_set_name(PublicKeyCredentialUserEntityJSON* self, jb_String * value);

jb_String PublicKeyCredentialUserEntityJSON_displayName(const PublicKeyCredentialUserEntityJSON *self);

void PublicKeyCredentialUserEntityJSON_set_displayName(PublicKeyCredentialUserEntityJSON* self, jb_String * value);

PublicKeyCredentialUserEntityJSON PublicKeyCredentialUserEntityJSON_new();

#ifdef __cplusplus
}
#endif
