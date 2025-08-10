#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CameraDevicePermissionDescriptor, PermissionDescriptor);

bool CameraDevicePermissionDescriptor_panTiltZoom(const CameraDevicePermissionDescriptor *self);

void CameraDevicePermissionDescriptor_set_panTiltZoom(CameraDevicePermissionDescriptor* self, bool value);

CameraDevicePermissionDescriptor CameraDevicePermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
