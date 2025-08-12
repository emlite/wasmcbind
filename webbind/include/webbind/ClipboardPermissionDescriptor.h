#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ClipboardPermissionDescriptor */
DECLARE_EMLITE_TYPE(ClipboardPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the allowWithoutGesture property */
bool ClipboardPermissionDescriptor_allowWithoutGesture(const ClipboardPermissionDescriptor *self);

/** @brief Setter of the allowWithoutGesture property */
void ClipboardPermissionDescriptor_set_allowWithoutGesture(ClipboardPermissionDescriptor* self, bool value);

/** @brief Constructor of the ClipboardPermissionDescriptor dictionary type */
ClipboardPermissionDescriptor ClipboardPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
