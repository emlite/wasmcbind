#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"
#include "USBDeviceFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(USBPermissionDescriptor, PermissionDescriptor);

jb_Array USBPermissionDescriptor_filters(const USBPermissionDescriptor *self);

void USBPermissionDescriptor_set_filters(USBPermissionDescriptor* self, jb_Array * value);

jb_Array USBPermissionDescriptor_exclusionFilters(const USBPermissionDescriptor *self);

void USBPermissionDescriptor_set_exclusionFilters(USBPermissionDescriptor* self, jb_Array * value);

USBPermissionDescriptor USBPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
