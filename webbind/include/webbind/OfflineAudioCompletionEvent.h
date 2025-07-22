#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct AudioBuffer AudioBuffer;


typedef struct {
  Event inner;
} OfflineAudioCompletionEvent;


DECLARE_EMLITE_TYPE(OfflineAudioCompletionEvent, Event);

OfflineAudioCompletionEvent OfflineAudioCompletionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

AudioBuffer OfflineAudioCompletionEvent_renderedBuffer( const OfflineAudioCompletionEvent *self);
