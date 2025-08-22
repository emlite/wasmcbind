#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PrivateNetworkAccessPermissionDescriptor */
DECLARE_EMLITE_TYPE(PrivateNetworkAccessPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the id property */
jb_String PrivateNetworkAccessPermissionDescriptor_id(const PrivateNetworkAccessPermissionDescriptor *self);

/** @brief Setter of the id property */
void PrivateNetworkAccessPermissionDescriptor_set_id(PrivateNetworkAccessPermissionDescriptor* self, jb_String * value);

/** @brief Constructor of the PrivateNetworkAccessPermissionDescriptor dictionary type */
PrivateNetworkAccessPermissionDescriptor PrivateNetworkAccessPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
