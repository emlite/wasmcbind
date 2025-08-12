#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TopLevelStorageAccessPermissionDescriptor */
DECLARE_EMLITE_TYPE(TopLevelStorageAccessPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the requestedOrigin property */
jb_String TopLevelStorageAccessPermissionDescriptor_requestedOrigin(const TopLevelStorageAccessPermissionDescriptor *self);

/** @brief Setter of the requestedOrigin property */
void TopLevelStorageAccessPermissionDescriptor_set_requestedOrigin(TopLevelStorageAccessPermissionDescriptor* self, jb_String * value);

/** @brief Constructor of the TopLevelStorageAccessPermissionDescriptor dictionary type */
TopLevelStorageAccessPermissionDescriptor TopLevelStorageAccessPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
