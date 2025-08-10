#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRSessionSupportedPermissionDescriptor, PermissionDescriptor);

XRSessionMode XRSessionSupportedPermissionDescriptor_mode(const XRSessionSupportedPermissionDescriptor *self);

void XRSessionSupportedPermissionDescriptor_set_mode(XRSessionSupportedPermissionDescriptor* self, XRSessionMode * value);

XRSessionSupportedPermissionDescriptor XRSessionSupportedPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
