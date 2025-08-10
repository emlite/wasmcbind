#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MockCapturePromptResultConfiguration, em_Val);

MockCapturePromptResult MockCapturePromptResultConfiguration_getUserMedia(const MockCapturePromptResultConfiguration *self);

void MockCapturePromptResultConfiguration_set_getUserMedia(MockCapturePromptResultConfiguration* self, MockCapturePromptResult * value);

MockCapturePromptResult MockCapturePromptResultConfiguration_getDisplayMedia(const MockCapturePromptResultConfiguration *self);

void MockCapturePromptResultConfiguration_set_getDisplayMedia(MockCapturePromptResultConfiguration* self, MockCapturePromptResult * value);

MockCapturePromptResultConfiguration MockCapturePromptResultConfiguration_new();

#ifdef __cplusplus
}
#endif
