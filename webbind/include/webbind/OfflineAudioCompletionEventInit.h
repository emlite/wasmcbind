#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

DECLARE_EMLITE_TYPE(OfflineAudioCompletionEventInit, EventInit);

AudioBuffer OfflineAudioCompletionEventInit_renderedBuffer(const OfflineAudioCompletionEventInit *self);

void OfflineAudioCompletionEventInit_set_renderedBuffer(OfflineAudioCompletionEventInit* self, AudioBuffer * value);

OfflineAudioCompletionEventInit OfflineAudioCompletionEventInit_new();

#ifdef __cplusplus
}
#endif
