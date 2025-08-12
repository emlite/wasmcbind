#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AudioSession
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioSession)
 */
DECLARE_EMLITE_TYPE(AudioSession, EventTarget);

/**
 * @brief Gets the `type` property. 
*/
AudioSessionType AudioSession_type(const AudioSession *self);

/**
 * @brief Sets the `type` property. 
*/
void AudioSession_set_type(AudioSession* self, AudioSessionType * value);

/**
 * @brief Gets the `state` property. 
*/
AudioSessionState AudioSession_state(const AudioSession *self);

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any AudioSession_onstatechange(const AudioSession *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void AudioSession_set_onstatechange(AudioSession* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
