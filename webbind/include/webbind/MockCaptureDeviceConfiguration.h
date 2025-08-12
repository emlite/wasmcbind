#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MockCaptureDeviceConfiguration */
DECLARE_EMLITE_TYPE(MockCaptureDeviceConfiguration, em_Val);

/** @brief Getter of the label property */
jb_String MockCaptureDeviceConfiguration_label(const MockCaptureDeviceConfiguration *self);

/** @brief Setter of the label property */
void MockCaptureDeviceConfiguration_set_label(MockCaptureDeviceConfiguration* self, jb_String * value);

/** @brief Getter of the deviceId property */
jb_String MockCaptureDeviceConfiguration_deviceId(const MockCaptureDeviceConfiguration *self);

/** @brief Setter of the deviceId property */
void MockCaptureDeviceConfiguration_set_deviceId(MockCaptureDeviceConfiguration* self, jb_String * value);

/** @brief Getter of the groupId property */
jb_String MockCaptureDeviceConfiguration_groupId(const MockCaptureDeviceConfiguration *self);

/** @brief Setter of the groupId property */
void MockCaptureDeviceConfiguration_set_groupId(MockCaptureDeviceConfiguration* self, jb_String * value);

/** @brief Constructor of the MockCaptureDeviceConfiguration dictionary type */
MockCaptureDeviceConfiguration MockCaptureDeviceConfiguration_new();

#ifdef __cplusplus
}
#endif
