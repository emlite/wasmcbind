#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OfflineAudioCompletionEventInit OfflineAudioCompletionEventInit;
typedef struct AudioBuffer AudioBuffer;

DECLARE_EMLITE_TYPE(OfflineAudioCompletionEvent, Event);

OfflineAudioCompletionEvent OfflineAudioCompletionEvent_new(jb_String * type, OfflineAudioCompletionEventInit * eventInitDict);

AudioBuffer OfflineAudioCompletionEvent_renderedBuffer(const OfflineAudioCompletionEvent *self);

#ifdef __cplusplus
}
#endif
