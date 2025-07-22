#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SpeechSynthesisEvent.h"
#include "enums.h"


typedef struct {
  SpeechSynthesisEvent inner;
} SpeechSynthesisErrorEvent;


DECLARE_EMLITE_TYPE(SpeechSynthesisErrorEvent, SpeechSynthesisEvent);

SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

SpeechSynthesisErrorCode SpeechSynthesisErrorEvent_error( const SpeechSynthesisErrorEvent *self);
