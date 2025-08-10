#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionEventInit SpeechRecognitionEventInit;
typedef struct SpeechRecognitionResultList SpeechRecognitionResultList;

DECLARE_EMLITE_TYPE(SpeechRecognitionEvent, Event);

SpeechRecognitionEvent SpeechRecognitionEvent_new(jb_String * type, SpeechRecognitionEventInit * eventInitDict);

unsigned long SpeechRecognitionEvent_resultIndex(const SpeechRecognitionEvent *self);

SpeechRecognitionResultList SpeechRecognitionEvent_results(const SpeechRecognitionEvent *self);

#ifdef __cplusplus
}
#endif
