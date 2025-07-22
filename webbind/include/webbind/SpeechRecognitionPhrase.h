#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SpeechRecognitionPhrase;


DECLARE_EMLITE_TYPE(SpeechRecognitionPhrase, em_Val);

SpeechRecognitionPhrase SpeechRecognitionPhrase_new(const jb_DOMString* phrase);

SpeechRecognitionPhrase SpeechRecognitionPhrase_new(const jb_DOMString* phrase, float boost);

jb_DOMString SpeechRecognitionPhrase_phrase( const SpeechRecognitionPhrase *self);

float SpeechRecognitionPhrase_boost( const SpeechRecognitionPhrase *self);
