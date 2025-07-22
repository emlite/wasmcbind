#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} SpeechRecognitionErrorEvent;


DECLARE_EMLITE_TYPE(SpeechRecognitionErrorEvent, Event);

SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

SpeechRecognitionErrorCode SpeechRecognitionErrorEvent_error( const SpeechRecognitionErrorEvent *self);

jb_DOMString SpeechRecognitionErrorEvent_message( const SpeechRecognitionErrorEvent *self);
