#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;


/**
 * @brief Interface AudioWorkletGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope)
 */
DECLARE_EMLITE_TYPE(AudioWorkletGlobalScope, WorkletGlobalScope);

/**
 * @brief Calls the `registerProcessor` method. 
*/
jb_Undefined AudioWorkletGlobalScope_registerProcessor(AudioWorkletGlobalScope* self , jb_String * name, jb_Function * processorCtor);

/**
 * @brief Gets the `currentFrame` property. 
*/
long long AudioWorkletGlobalScope_currentFrame(const AudioWorkletGlobalScope *self);

/**
 * @brief Gets the `currentTime` property. 
*/
double AudioWorkletGlobalScope_currentTime(const AudioWorkletGlobalScope *self);

/**
 * @brief Gets the `sampleRate` property. 
*/
float AudioWorkletGlobalScope_sampleRate(const AudioWorkletGlobalScope *self);

/**
 * @brief Gets the `renderQuantumSize` property. 
*/
unsigned long AudioWorkletGlobalScope_renderQuantumSize(const AudioWorkletGlobalScope *self);

/**
 * @brief Gets the `port` property. 
*/
MessagePort AudioWorkletGlobalScope_port(const AudioWorkletGlobalScope *self);

#ifdef __cplusplus
}
#endif
