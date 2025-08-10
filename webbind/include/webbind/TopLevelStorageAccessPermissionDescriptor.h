#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TopLevelStorageAccessPermissionDescriptor, PermissionDescriptor);

jb_String TopLevelStorageAccessPermissionDescriptor_requestedOrigin(const TopLevelStorageAccessPermissionDescriptor *self);

void TopLevelStorageAccessPermissionDescriptor_set_requestedOrigin(TopLevelStorageAccessPermissionDescriptor* self, jb_String * value);

TopLevelStorageAccessPermissionDescriptor TopLevelStorageAccessPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
