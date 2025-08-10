#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MockCaptureDeviceConfiguration, em_Val);

jb_String MockCaptureDeviceConfiguration_label(const MockCaptureDeviceConfiguration *self);

void MockCaptureDeviceConfiguration_set_label(MockCaptureDeviceConfiguration* self, jb_String * value);

jb_String MockCaptureDeviceConfiguration_deviceId(const MockCaptureDeviceConfiguration *self);

void MockCaptureDeviceConfiguration_set_deviceId(MockCaptureDeviceConfiguration* self, jb_String * value);

jb_String MockCaptureDeviceConfiguration_groupId(const MockCaptureDeviceConfiguration *self);

void MockCaptureDeviceConfiguration_set_groupId(MockCaptureDeviceConfiguration* self, jb_String * value);

MockCaptureDeviceConfiguration MockCaptureDeviceConfiguration_new();

#ifdef __cplusplus
}
#endif
