#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ClipboardPermissionDescriptor, PermissionDescriptor);

bool ClipboardPermissionDescriptor_allowWithoutGesture(const ClipboardPermissionDescriptor *self);

void ClipboardPermissionDescriptor_set_allowWithoutGesture(ClipboardPermissionDescriptor* self, bool value);

ClipboardPermissionDescriptor ClipboardPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
