#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;


/**
 * @brief Interface AudioWorkletProcessor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletProcessor)
 */
DECLARE_EMLITE_TYPE(AudioWorkletProcessor, em_Val);

/**
 * @brief Creates a new `AudioWorkletProcessor` object. 
*/
AudioWorkletProcessor AudioWorkletProcessor_new();

/**
 * @brief Gets the `port` property. 
*/
MessagePort AudioWorkletProcessor_port(const AudioWorkletProcessor *self);

#ifdef __cplusplus
}
#endif
