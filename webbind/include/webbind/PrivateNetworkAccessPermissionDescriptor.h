#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PrivateNetworkAccessPermissionDescriptor, PermissionDescriptor);

jb_String PrivateNetworkAccessPermissionDescriptor_id(const PrivateNetworkAccessPermissionDescriptor *self);

void PrivateNetworkAccessPermissionDescriptor_set_id(PrivateNetworkAccessPermissionDescriptor* self, jb_String * value);

PrivateNetworkAccessPermissionDescriptor PrivateNetworkAccessPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
