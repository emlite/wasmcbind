#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SpeechRecognitionErrorEventInit, EventInit);

SpeechRecognitionErrorCode SpeechRecognitionErrorEventInit_error(const SpeechRecognitionErrorEventInit *self);

void SpeechRecognitionErrorEventInit_set_error(SpeechRecognitionErrorEventInit* self, SpeechRecognitionErrorCode * value);

jb_String SpeechRecognitionErrorEventInit_message(const SpeechRecognitionErrorEventInit *self);

void SpeechRecognitionErrorEventInit_set_message(SpeechRecognitionErrorEventInit* self, jb_String * value);

SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit_new();

#ifdef __cplusplus
}
#endif
