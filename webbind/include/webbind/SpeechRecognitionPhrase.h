#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SpeechRecognitionPhrase, em_Val);

SpeechRecognitionPhrase SpeechRecognitionPhrase_new0(jb_DOMString * phrase);

SpeechRecognitionPhrase SpeechRecognitionPhrase_new1(jb_DOMString * phrase, float boost);

jb_DOMString SpeechRecognitionPhrase_phrase(const SpeechRecognitionPhrase *self);

float SpeechRecognitionPhrase_boost(const SpeechRecognitionPhrase *self);
