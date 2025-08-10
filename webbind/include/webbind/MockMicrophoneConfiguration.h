#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MockCaptureDeviceConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MockMicrophoneConfiguration, MockCaptureDeviceConfiguration);

unsigned long MockMicrophoneConfiguration_defaultSampleRate(const MockMicrophoneConfiguration *self);

void MockMicrophoneConfiguration_set_defaultSampleRate(MockMicrophoneConfiguration* self, unsigned long value);

MockMicrophoneConfiguration MockMicrophoneConfiguration_new();

#ifdef __cplusplus
}
#endif
