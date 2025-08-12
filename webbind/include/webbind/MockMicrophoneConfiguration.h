#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MockCaptureDeviceConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MockMicrophoneConfiguration */
DECLARE_EMLITE_TYPE(MockMicrophoneConfiguration, MockCaptureDeviceConfiguration);

/** @brief Getter of the defaultSampleRate property */
unsigned long MockMicrophoneConfiguration_defaultSampleRate(const MockMicrophoneConfiguration *self);

/** @brief Setter of the defaultSampleRate property */
void MockMicrophoneConfiguration_set_defaultSampleRate(MockMicrophoneConfiguration* self, unsigned long value);

/** @brief Constructor of the MockMicrophoneConfiguration dictionary type */
MockMicrophoneConfiguration MockMicrophoneConfiguration_new();

#ifdef __cplusplus
}
#endif
