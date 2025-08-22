#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRPermissionDescriptor */
DECLARE_EMLITE_TYPE(XRPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the mode property */
XRSessionMode XRPermissionDescriptor_mode(const XRPermissionDescriptor *self);

/** @brief Setter of the mode property */
void XRPermissionDescriptor_set_mode(XRPermissionDescriptor* self, XRSessionMode * value);

/** @brief Getter of the requiredFeatures property */
jb_Array XRPermissionDescriptor_requiredFeatures(const XRPermissionDescriptor *self);

/** @brief Setter of the requiredFeatures property */
void XRPermissionDescriptor_set_requiredFeatures(XRPermissionDescriptor* self, jb_Array * value);

/** @brief Getter of the optionalFeatures property */
jb_Array XRPermissionDescriptor_optionalFeatures(const XRPermissionDescriptor *self);

/** @brief Setter of the optionalFeatures property */
void XRPermissionDescriptor_set_optionalFeatures(XRPermissionDescriptor* self, jb_Array * value);

/** @brief Constructor of the XRPermissionDescriptor dictionary type */
XRPermissionDescriptor XRPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
