#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

/** @brief Dictionary type OfflineAudioCompletionEventInit */
DECLARE_EMLITE_TYPE(OfflineAudioCompletionEventInit, EventInit);

/** @brief Getter of the renderedBuffer property */
AudioBuffer OfflineAudioCompletionEventInit_renderedBuffer(const OfflineAudioCompletionEventInit *self);

/** @brief Setter of the renderedBuffer property */
void OfflineAudioCompletionEventInit_set_renderedBuffer(OfflineAudioCompletionEventInit* self, AudioBuffer * value);

/** @brief Constructor of the OfflineAudioCompletionEventInit dictionary type */
OfflineAudioCompletionEventInit OfflineAudioCompletionEventInit_new();

#ifdef __cplusplus
}
#endif
