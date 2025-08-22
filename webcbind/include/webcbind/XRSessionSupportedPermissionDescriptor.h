#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRSessionSupportedPermissionDescriptor */
DECLARE_EMLITE_TYPE(XRSessionSupportedPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the mode property */
XRSessionMode XRSessionSupportedPermissionDescriptor_mode(const XRSessionSupportedPermissionDescriptor *self);

/** @brief Setter of the mode property */
void XRSessionSupportedPermissionDescriptor_set_mode(XRSessionSupportedPermissionDescriptor* self, XRSessionMode * value);

/** @brief Constructor of the XRSessionSupportedPermissionDescriptor dictionary type */
XRSessionSupportedPermissionDescriptor XRSessionSupportedPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
