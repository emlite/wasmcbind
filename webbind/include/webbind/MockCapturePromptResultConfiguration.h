#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MockCapturePromptResultConfiguration */
DECLARE_EMLITE_TYPE(MockCapturePromptResultConfiguration, em_Val);

/** @brief Getter of the getUserMedia property */
MockCapturePromptResult MockCapturePromptResultConfiguration_getUserMedia(const MockCapturePromptResultConfiguration *self);

/** @brief Setter of the getUserMedia property */
void MockCapturePromptResultConfiguration_set_getUserMedia(MockCapturePromptResultConfiguration* self, MockCapturePromptResult * value);

/** @brief Getter of the getDisplayMedia property */
MockCapturePromptResult MockCapturePromptResultConfiguration_getDisplayMedia(const MockCapturePromptResultConfiguration *self);

/** @brief Setter of the getDisplayMedia property */
void MockCapturePromptResultConfiguration_set_getDisplayMedia(MockCapturePromptResultConfiguration* self, MockCapturePromptResult * value);

/** @brief Constructor of the MockCapturePromptResultConfiguration dictionary type */
MockCapturePromptResultConfiguration MockCapturePromptResultConfiguration_new();

#ifdef __cplusplus
}
#endif
