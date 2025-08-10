#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialDescriptor, em_Val);

jb_String PublicKeyCredentialDescriptor_type(const PublicKeyCredentialDescriptor *self);

void PublicKeyCredentialDescriptor_set_type(PublicKeyCredentialDescriptor* self, jb_String * value);

jb_Any PublicKeyCredentialDescriptor_id(const PublicKeyCredentialDescriptor *self);

void PublicKeyCredentialDescriptor_set_id(PublicKeyCredentialDescriptor* self, jb_Any * value);

jb_Array PublicKeyCredentialDescriptor_transports(const PublicKeyCredentialDescriptor *self);

void PublicKeyCredentialDescriptor_set_transports(PublicKeyCredentialDescriptor* self, jb_Array * value);

PublicKeyCredentialDescriptor PublicKeyCredentialDescriptor_new();

#ifdef __cplusplus
}
#endif
