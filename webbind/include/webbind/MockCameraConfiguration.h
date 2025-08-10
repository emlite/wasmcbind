#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MockCaptureDeviceConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MockCameraConfiguration, MockCaptureDeviceConfiguration);

double MockCameraConfiguration_defaultFrameRate(const MockCameraConfiguration *self);

void MockCameraConfiguration_set_defaultFrameRate(MockCameraConfiguration* self, double value);

jb_String MockCameraConfiguration_facingMode(const MockCameraConfiguration *self);

void MockCameraConfiguration_set_facingMode(MockCameraConfiguration* self, jb_String * value);

MockCameraConfiguration MockCameraConfiguration_new();

#ifdef __cplusplus
}
#endif
