#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SpeechRecognitionResult SpeechRecognitionResult;


typedef struct {
  em_Val inner;
} SpeechRecognitionResultList;


DECLARE_EMLITE_TYPE(SpeechRecognitionResultList, em_Val);

unsigned long SpeechRecognitionResultList_length( const SpeechRecognitionResultList *self);

SpeechRecognitionResult SpeechRecognitionResultList_item(SpeechRecognitionResultList* self , unsigned long index);
