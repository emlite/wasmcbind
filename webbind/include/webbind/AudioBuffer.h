#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBufferOptions AudioBufferOptions;


/**
 * @brief Interface AudioBuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer)
 */
DECLARE_EMLITE_TYPE(AudioBuffer, em_Val);

/**
 * @brief Creates a new `AudioBuffer` object. 
*/
AudioBuffer AudioBuffer_new(AudioBufferOptions * options);

/**
 * @brief Gets the `sampleRate` property. 
*/
float AudioBuffer_sampleRate(const AudioBuffer *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long AudioBuffer_length(const AudioBuffer *self);

/**
 * @brief Gets the `duration` property. 
*/
double AudioBuffer_duration(const AudioBuffer *self);

/**
 * @brief Gets the `numberOfChannels` property. 
*/
unsigned long AudioBuffer_numberOfChannels(const AudioBuffer *self);

/**
 * @brief Calls the `getChannelData` method. 
*/
jb_Float32Array AudioBuffer_getChannelData(AudioBuffer* self , unsigned long channel);

/**
 * @brief Calls the `copyFromChannel` method. 
*/
jb_Undefined AudioBuffer_copyFromChannel0(AudioBuffer* self , jb_Float32Array * destination, unsigned long channelNumber);

/**
 * @brief Calls the `copyFromChannel` method. 
*/
jb_Undefined AudioBuffer_copyFromChannel1(AudioBuffer* self , jb_Float32Array * destination, unsigned long channelNumber, unsigned long bufferOffset);

/**
 * @brief Calls the `copyToChannel` method. 
*/
jb_Undefined AudioBuffer_copyToChannel0(AudioBuffer* self , jb_Float32Array * source, unsigned long channelNumber);

/**
 * @brief Calls the `copyToChannel` method. 
*/
jb_Undefined AudioBuffer_copyToChannel1(AudioBuffer* self , jb_Float32Array * source, unsigned long channelNumber, unsigned long bufferOffset);

#ifdef __cplusplus
}
#endif
