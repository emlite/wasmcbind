#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaMetadata MediaMetadata;
typedef struct MediaPositionState MediaPositionState;


/**
 * @brief Interface MediaSession
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession)
 */
DECLARE_EMLITE_TYPE(MediaSession, em_Val);

/**
 * @brief Gets the `metadata` property. 
*/
MediaMetadata MediaSession_metadata(const MediaSession *self);

/**
 * @brief Sets the `metadata` property. 
*/
void MediaSession_set_metadata(MediaSession* self, MediaMetadata * value);

/**
 * @brief Gets the `playbackState` property. 
*/
MediaSessionPlaybackState MediaSession_playbackState(const MediaSession *self);

/**
 * @brief Sets the `playbackState` property. 
*/
void MediaSession_set_playbackState(MediaSession* self, MediaSessionPlaybackState * value);

/**
 * @brief Calls the `setActionHandler` method. 
*/
jb_Undefined MediaSession_setActionHandler(MediaSession* self , MediaSessionAction * action, jb_Function * handler);

/**
 * @brief Calls the `setPositionState` method. 
*/
jb_Undefined MediaSession_setPositionState0(MediaSession* self );

/**
 * @brief Calls the `setPositionState` method. 
*/
jb_Undefined MediaSession_setPositionState1(MediaSession* self , MediaPositionState * state);

/**
 * @brief Calls the `setMicrophoneActive` method. 
*/
jb_Promise MediaSession_setMicrophoneActive(MediaSession* self , bool active);

/**
 * @brief Calls the `setCameraActive` method. 
*/
jb_Promise MediaSession_setCameraActive(MediaSession* self , bool active);

/**
 * @brief Calls the `setScreenshareActive` method. 
*/
jb_Promise MediaSession_setScreenshareActive(MediaSession* self , bool active);

#ifdef __cplusplus
}
#endif
