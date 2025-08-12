#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioScheduledSourceNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct AudioBufferSourceOptions AudioBufferSourceOptions;
typedef struct AudioBuffer AudioBuffer;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface AudioBufferSourceNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode)
 */
DECLARE_EMLITE_TYPE(AudioBufferSourceNode, AudioScheduledSourceNode);

/**
 * @brief Creates a new `AudioBufferSourceNode` object. 
*/
AudioBufferSourceNode AudioBufferSourceNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `AudioBufferSourceNode` object. 
*/
AudioBufferSourceNode AudioBufferSourceNode_new1(BaseAudioContext * context, AudioBufferSourceOptions * options);

/**
 * @brief Gets the `buffer` property. 
*/
AudioBuffer AudioBufferSourceNode_buffer(const AudioBufferSourceNode *self);

/**
 * @brief Sets the `buffer` property. 
*/
void AudioBufferSourceNode_set_buffer(AudioBufferSourceNode* self, AudioBuffer * value);

/**
 * @brief Gets the `playbackRate` property. 
*/
AudioParam AudioBufferSourceNode_playbackRate(const AudioBufferSourceNode *self);

/**
 * @brief Gets the `detune` property. 
*/
AudioParam AudioBufferSourceNode_detune(const AudioBufferSourceNode *self);

/**
 * @brief Gets the `loop` property. 
*/
bool AudioBufferSourceNode_loop(const AudioBufferSourceNode *self);

/**
 * @brief Sets the `loop` property. 
*/
void AudioBufferSourceNode_set_loop(AudioBufferSourceNode* self, bool value);

/**
 * @brief Gets the `loopStart` property. 
*/
double AudioBufferSourceNode_loopStart(const AudioBufferSourceNode *self);

/**
 * @brief Sets the `loopStart` property. 
*/
void AudioBufferSourceNode_set_loopStart(AudioBufferSourceNode* self, double value);

/**
 * @brief Gets the `loopEnd` property. 
*/
double AudioBufferSourceNode_loopEnd(const AudioBufferSourceNode *self);

/**
 * @brief Sets the `loopEnd` property. 
*/
void AudioBufferSourceNode_set_loopEnd(AudioBufferSourceNode* self, double value);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined AudioBufferSourceNode_start0(AudioBufferSourceNode* self );

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined AudioBufferSourceNode_start1(AudioBufferSourceNode* self , double when);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined AudioBufferSourceNode_start2(AudioBufferSourceNode* self , double when, double offset);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined AudioBufferSourceNode_start3(AudioBufferSourceNode* self , double when, double offset, double duration);

#ifdef __cplusplus
}
#endif
