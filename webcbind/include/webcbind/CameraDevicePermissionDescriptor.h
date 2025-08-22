#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CameraDevicePermissionDescriptor */
DECLARE_EMLITE_TYPE(CameraDevicePermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the panTiltZoom property */
bool CameraDevicePermissionDescriptor_panTiltZoom(const CameraDevicePermissionDescriptor *self);

/** @brief Setter of the panTiltZoom property */
void CameraDevicePermissionDescriptor_set_panTiltZoom(CameraDevicePermissionDescriptor* self, bool value);

/** @brief Constructor of the CameraDevicePermissionDescriptor dictionary type */
CameraDevicePermissionDescriptor CameraDevicePermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
