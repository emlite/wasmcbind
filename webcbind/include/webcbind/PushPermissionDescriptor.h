#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PushPermissionDescriptor */
DECLARE_EMLITE_TYPE(PushPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the userVisibleOnly property */
bool PushPermissionDescriptor_userVisibleOnly(const PushPermissionDescriptor *self);

/** @brief Setter of the userVisibleOnly property */
void PushPermissionDescriptor_set_userVisibleOnly(PushPermissionDescriptor* self, bool value);

/** @brief Constructor of the PushPermissionDescriptor dictionary type */
PushPermissionDescriptor PushPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
