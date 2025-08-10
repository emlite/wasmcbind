#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit;

DECLARE_EMLITE_TYPE(SpeechRecognitionErrorEvent, Event);

SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent_new(jb_String * type, SpeechRecognitionErrorEventInit * eventInitDict);

SpeechRecognitionErrorCode SpeechRecognitionErrorEvent_error(const SpeechRecognitionErrorEvent *self);

jb_String SpeechRecognitionErrorEvent_message(const SpeechRecognitionErrorEvent *self);

#ifdef __cplusplus
}
#endif
