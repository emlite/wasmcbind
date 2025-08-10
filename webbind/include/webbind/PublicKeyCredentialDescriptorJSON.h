#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialDescriptorJSON, em_Val);

jb_String PublicKeyCredentialDescriptorJSON_type(const PublicKeyCredentialDescriptorJSON *self);

void PublicKeyCredentialDescriptorJSON_set_type(PublicKeyCredentialDescriptorJSON* self, jb_String * value);

jb_Any PublicKeyCredentialDescriptorJSON_id(const PublicKeyCredentialDescriptorJSON *self);

void PublicKeyCredentialDescriptorJSON_set_id(PublicKeyCredentialDescriptorJSON* self, jb_Any * value);

jb_Array PublicKeyCredentialDescriptorJSON_transports(const PublicKeyCredentialDescriptorJSON *self);

void PublicKeyCredentialDescriptorJSON_set_transports(PublicKeyCredentialDescriptorJSON* self, jb_Array * value);

PublicKeyCredentialDescriptorJSON PublicKeyCredentialDescriptorJSON_new();

#ifdef __cplusplus
}
#endif
