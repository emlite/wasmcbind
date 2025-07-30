#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct SpeechRecognitionResultList SpeechRecognitionResultList;


DECLARE_EMLITE_TYPE(SpeechRecognitionEvent, Event);

SpeechRecognitionEvent SpeechRecognitionEvent_new(jb_String * type, jb_Any * eventInitDict);

unsigned long SpeechRecognitionEvent_resultIndex(const SpeechRecognitionEvent *self);

SpeechRecognitionResultList SpeechRecognitionEvent_results(const SpeechRecognitionEvent *self);
