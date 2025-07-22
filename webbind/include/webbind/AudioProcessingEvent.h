#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct AudioBuffer AudioBuffer;


typedef struct {
  Event inner;
} AudioProcessingEvent;


DECLARE_EMLITE_TYPE(AudioProcessingEvent, Event);

AudioProcessingEvent AudioProcessingEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

double AudioProcessingEvent_playbackTime( const AudioProcessingEvent *self);

AudioBuffer AudioProcessingEvent_inputBuffer( const AudioProcessingEvent *self);

AudioBuffer AudioProcessingEvent_outputBuffer( const AudioProcessingEvent *self);
