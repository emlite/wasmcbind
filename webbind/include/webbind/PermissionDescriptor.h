#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PermissionDescriptor, em_Val);

jb_String PermissionDescriptor_name(const PermissionDescriptor *self);

void PermissionDescriptor_set_name(PermissionDescriptor* self, jb_String * value);

PermissionDescriptor PermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
