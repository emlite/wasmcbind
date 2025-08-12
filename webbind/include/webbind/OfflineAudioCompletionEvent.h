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


/**
 * @brief Interface OfflineAudioCompletionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEvent)
 */
DECLARE_EMLITE_TYPE(OfflineAudioCompletionEvent, Event);

/**
 * @brief Creates a new `OfflineAudioCompletionEvent` object. 
*/
OfflineAudioCompletionEvent OfflineAudioCompletionEvent_new(jb_String * type, OfflineAudioCompletionEventInit * eventInitDict);

/**
 * @brief Gets the `renderedBuffer` property. 
*/
AudioBuffer OfflineAudioCompletionEvent_renderedBuffer(const OfflineAudioCompletionEvent *self);

#ifdef __cplusplus
}
#endif
