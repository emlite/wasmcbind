#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"
#include "USBDeviceFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type USBPermissionDescriptor */
DECLARE_EMLITE_TYPE(USBPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the filters property */
jb_Array USBPermissionDescriptor_filters(const USBPermissionDescriptor *self);

/** @brief Setter of the filters property */
void USBPermissionDescriptor_set_filters(USBPermissionDescriptor* self, jb_Array * value);

/** @brief Getter of the exclusionFilters property */
jb_Array USBPermissionDescriptor_exclusionFilters(const USBPermissionDescriptor *self);

/** @brief Setter of the exclusionFilters property */
void USBPermissionDescriptor_set_exclusionFilters(USBPermissionDescriptor* self, jb_Array * value);

/** @brief Constructor of the USBPermissionDescriptor dictionary type */
USBPermissionDescriptor USBPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
