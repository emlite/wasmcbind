#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SpeechSynthesisEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SpeechSynthesisErrorEventInit, SpeechSynthesisEventInit);

SpeechSynthesisErrorCode SpeechSynthesisErrorEventInit_error(const SpeechSynthesisErrorEventInit *self);

void SpeechSynthesisErrorEventInit_set_error(SpeechSynthesisErrorEventInit* self, SpeechSynthesisErrorCode * value);

SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit_new();

#ifdef __cplusplus
}
#endif
