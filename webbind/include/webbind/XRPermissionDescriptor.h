#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRPermissionDescriptor, PermissionDescriptor);

XRSessionMode XRPermissionDescriptor_mode(const XRPermissionDescriptor *self);

void XRPermissionDescriptor_set_mode(XRPermissionDescriptor* self, XRSessionMode * value);

jb_Array XRPermissionDescriptor_requiredFeatures(const XRPermissionDescriptor *self);

void XRPermissionDescriptor_set_requiredFeatures(XRPermissionDescriptor* self, jb_Array * value);

jb_Array XRPermissionDescriptor_optionalFeatures(const XRPermissionDescriptor *self);

void XRPermissionDescriptor_set_optionalFeatures(XRPermissionDescriptor* self, jb_Array * value);

XRPermissionDescriptor XRPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
