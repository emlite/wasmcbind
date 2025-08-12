#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BaseAudioContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContextOptions AudioContextOptions;
typedef struct AudioTimestamp AudioTimestamp;
typedef struct MediaElementAudioSourceNode MediaElementAudioSourceNode;
typedef struct HTMLMediaElement HTMLMediaElement;
typedef struct MediaStreamAudioSourceNode MediaStreamAudioSourceNode;
typedef struct MediaStream MediaStream;
typedef struct MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode;


/**
 * @brief Interface AudioContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext)
 */
DECLARE_EMLITE_TYPE(AudioContext, BaseAudioContext);

/**
 * @brief Creates a new `AudioContext` object. 
*/
AudioContext AudioContext_new0();

/**
 * @brief Creates a new `AudioContext` object. 
*/
AudioContext AudioContext_new1(AudioContextOptions * contextOptions);

/**
 * @brief Gets the `baseLatency` property. 
*/
double AudioContext_baseLatency(const AudioContext *self);

/**
 * @brief Gets the `outputLatency` property. 
*/
double AudioContext_outputLatency(const AudioContext *self);

/**
 * @brief Gets the `sinkId` property. 
*/
jb_Any AudioContext_sinkId(const AudioContext *self);

/**
 * @brief Gets the `onsinkchange` property. 
*/
jb_Any AudioContext_onsinkchange(const AudioContext *self);

/**
 * @brief Sets the `onsinkchange` property. 
*/
void AudioContext_set_onsinkchange(AudioContext* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any AudioContext_onerror(const AudioContext *self);

/**
 * @brief Sets the `onerror` property. 
*/
void AudioContext_set_onerror(AudioContext* self, jb_Any * value);

/**
 * @brief Calls the `getOutputTimestamp` method. 
*/
AudioTimestamp AudioContext_getOutputTimestamp(AudioContext* self );

/**
 * @brief Calls the `resume` method. 
*/
jb_Promise AudioContext_resume(AudioContext* self );

/**
 * @brief Calls the `suspend` method. 
*/
jb_Promise AudioContext_suspend(AudioContext* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Promise AudioContext_close(AudioContext* self );

/**
 * @brief Calls the `setSinkId` method. 
*/
jb_Promise AudioContext_setSinkId(AudioContext* self , jb_Any * sinkId);

/**
 * @brief Calls the `createMediaElementSource` method. 
*/
MediaElementAudioSourceNode AudioContext_createMediaElementSource(AudioContext* self , HTMLMediaElement * mediaElement);

/**
 * @brief Calls the `createMediaStreamSource` method. 
*/
MediaStreamAudioSourceNode AudioContext_createMediaStreamSource(AudioContext* self , MediaStream * mediaStream);

/**
 * @brief Calls the `createMediaStreamTrackSource` method. 
*/
MediaStreamTrackAudioSourceNode AudioContext_createMediaStreamTrackSource(AudioContext* self , MediaStreamTrack * mediaStreamTrack);

/**
 * @brief Calls the `createMediaStreamDestination` method. 
*/
MediaStreamAudioDestinationNode AudioContext_createMediaStreamDestination(AudioContext* self );

#ifdef __cplusplus
}
#endif
