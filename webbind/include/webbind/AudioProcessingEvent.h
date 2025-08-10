#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioProcessingEventInit AudioProcessingEventInit;
typedef struct AudioBuffer AudioBuffer;

DECLARE_EMLITE_TYPE(AudioProcessingEvent, Event);

AudioProcessingEvent AudioProcessingEvent_new(jb_String * type, AudioProcessingEventInit * eventInitDict);

double AudioProcessingEvent_playbackTime(const AudioProcessingEvent *self);

AudioBuffer AudioProcessingEvent_inputBuffer(const AudioProcessingEvent *self);

AudioBuffer AudioProcessingEvent_outputBuffer(const AudioProcessingEvent *self);

#ifdef __cplusplus
}
#endif
