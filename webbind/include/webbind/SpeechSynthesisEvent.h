#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;


typedef struct {
  Event inner;
} SpeechSynthesisEvent;


DECLARE_EMLITE_TYPE(SpeechSynthesisEvent, Event);

SpeechSynthesisEvent SpeechSynthesisEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

SpeechSynthesisUtterance SpeechSynthesisEvent_utterance( const SpeechSynthesisEvent *self);

unsigned long SpeechSynthesisEvent_charIndex( const SpeechSynthesisEvent *self);

unsigned long SpeechSynthesisEvent_charLength( const SpeechSynthesisEvent *self);

float SpeechSynthesisEvent_elapsedTime( const SpeechSynthesisEvent *self);

jb_DOMString SpeechSynthesisEvent_name( const SpeechSynthesisEvent *self);
