#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SpeechRecognitionAlternative;


DECLARE_EMLITE_TYPE(SpeechRecognitionAlternative, em_Val);

jb_DOMString SpeechRecognitionAlternative_transcript( const SpeechRecognitionAlternative *self);

float SpeechRecognitionAlternative_confidence( const SpeechRecognitionAlternative *self);
