#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PermissionDescriptor */
DECLARE_EMLITE_TYPE(PermissionDescriptor, em_Val);

/** @brief Getter of the name property */
jb_String PermissionDescriptor_name(const PermissionDescriptor *self);

/** @brief Setter of the name property */
void PermissionDescriptor_set_name(PermissionDescriptor* self, jb_String * value);

/** @brief Constructor of the PermissionDescriptor dictionary type */
PermissionDescriptor PermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
