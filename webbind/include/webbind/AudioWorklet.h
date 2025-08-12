#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Worklet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;


/**
 * @brief Interface AudioWorklet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorklet)
 */
DECLARE_EMLITE_TYPE(AudioWorklet, Worklet);

/**
 * @brief Gets the `port` property. 
*/
MessagePort AudioWorklet_port(const AudioWorklet *self);

#ifdef __cplusplus
}
#endif
