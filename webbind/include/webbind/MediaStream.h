#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;


/**
 * @brief Interface MediaStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream)
 */
DECLARE_EMLITE_TYPE(MediaStream, EventTarget);

/**
 * @brief Creates a new `MediaStream` object. 
*/
MediaStream MediaStream_new(jb_Array * tracks);

/**
 * @brief Gets the `id` property. 
*/
jb_String MediaStream_id(const MediaStream *self);

/**
 * @brief Calls the `getAudioTracks` method. 
*/
jb_Array MediaStream_getAudioTracks(MediaStream* self );

/**
 * @brief Calls the `getVideoTracks` method. 
*/
jb_Array MediaStream_getVideoTracks(MediaStream* self );

/**
 * @brief Calls the `getTracks` method. 
*/
jb_Array MediaStream_getTracks(MediaStream* self );

/**
 * @brief Calls the `getTrackById` method. 
*/
MediaStreamTrack MediaStream_getTrackById(MediaStream* self , jb_String * trackId);

/**
 * @brief Calls the `addTrack` method. 
*/
jb_Undefined MediaStream_addTrack(MediaStream* self , MediaStreamTrack * track);

/**
 * @brief Calls the `removeTrack` method. 
*/
jb_Undefined MediaStream_removeTrack(MediaStream* self , MediaStreamTrack * track);

/**
 * @brief Calls the `clone` method. 
*/
MediaStream MediaStream_clone(MediaStream* self );

/**
 * @brief Gets the `active` property. 
*/
bool MediaStream_active(const MediaStream *self);

/**
 * @brief Gets the `onaddtrack` property. 
*/
jb_Any MediaStream_onaddtrack(const MediaStream *self);

/**
 * @brief Sets the `onaddtrack` property. 
*/
void MediaStream_set_onaddtrack(MediaStream* self, jb_Any * value);

/**
 * @brief Gets the `onremovetrack` property. 
*/
jb_Any MediaStream_onremovetrack(const MediaStream *self);

/**
 * @brief Sets the `onremovetrack` property. 
*/
void MediaStream_set_onremovetrack(MediaStream* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
