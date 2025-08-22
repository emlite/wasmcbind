#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MockCaptureDeviceConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MockCameraConfiguration */
DECLARE_EMLITE_TYPE(MockCameraConfiguration, MockCaptureDeviceConfiguration);

/** @brief Getter of the defaultFrameRate property */
double MockCameraConfiguration_defaultFrameRate(const MockCameraConfiguration *self);

/** @brief Setter of the defaultFrameRate property */
void MockCameraConfiguration_set_defaultFrameRate(MockCameraConfiguration* self, double value);

/** @brief Getter of the facingMode property */
jb_String MockCameraConfiguration_facingMode(const MockCameraConfiguration *self);

/** @brief Setter of the facingMode property */
void MockCameraConfiguration_set_facingMode(MockCameraConfiguration* self, jb_String * value);

/** @brief Constructor of the MockCameraConfiguration dictionary type */
MockCameraConfiguration MockCameraConfiguration_new();

#ifdef __cplusplus
}
#endif
