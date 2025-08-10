#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionResultList SpeechRecognitionResultList;

DECLARE_EMLITE_TYPE(SpeechRecognitionEventInit, EventInit);

unsigned long SpeechRecognitionEventInit_resultIndex(const SpeechRecognitionEventInit *self);

void SpeechRecognitionEventInit_set_resultIndex(SpeechRecognitionEventInit* self, unsigned long value);

SpeechRecognitionResultList SpeechRecognitionEventInit_results(const SpeechRecognitionEventInit *self);

void SpeechRecognitionEventInit_set_results(SpeechRecognitionEventInit* self, SpeechRecognitionResultList * value);

SpeechRecognitionEventInit SpeechRecognitionEventInit_new();

#ifdef __cplusplus
}
#endif
