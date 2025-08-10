#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PushPermissionDescriptor, PermissionDescriptor);

bool PushPermissionDescriptor_userVisibleOnly(const PushPermissionDescriptor *self);

void PushPermissionDescriptor_set_userVisibleOnly(PushPermissionDescriptor* self, bool value);

PushPermissionDescriptor PushPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
