#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioProcessingEventInit AudioProcessingEventInit;
typedef struct AudioBuffer AudioBuffer;


/**
 * @brief Interface AudioProcessingEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent)
 */
DECLARE_EMLITE_TYPE(AudioProcessingEvent, Event);

/**
 * @brief Creates a new `AudioProcessingEvent` object. 
*/
AudioProcessingEvent AudioProcessingEvent_new(jb_String * type, AudioProcessingEventInit * eventInitDict);

/**
 * @brief Gets the `playbackTime` property. 
*/
double AudioProcessingEvent_playbackTime(const AudioProcessingEvent *self);

/**
 * @brief Gets the `inputBuffer` property. 
*/
AudioBuffer AudioProcessingEvent_inputBuffer(const AudioProcessingEvent *self);

/**
 * @brief Gets the `outputBuffer` property. 
*/
AudioBuffer AudioProcessingEvent_outputBuffer(const AudioProcessingEvent *self);

#ifdef __cplusplus
}
#endif
