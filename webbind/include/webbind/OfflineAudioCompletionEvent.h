#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct AudioBuffer AudioBuffer;


DECLARE_EMLITE_TYPE(OfflineAudioCompletionEvent, Event);

OfflineAudioCompletionEvent OfflineAudioCompletionEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

AudioBuffer OfflineAudioCompletionEvent_renderedBuffer( const OfflineAudioCompletionEvent *self);
