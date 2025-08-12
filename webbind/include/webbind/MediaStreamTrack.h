#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaTrackCapabilities MediaTrackCapabilities;
typedef struct MediaTrackConstraints MediaTrackConstraints;
typedef struct MediaTrackSettings MediaTrackSettings;
typedef struct CaptureHandle CaptureHandle;


/**
 * @brief Interface MediaStreamTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack)
 */
DECLARE_EMLITE_TYPE(MediaStreamTrack, EventTarget);

/**
 * @brief Gets the `kind` property. 
*/
jb_String MediaStreamTrack_kind(const MediaStreamTrack *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String MediaStreamTrack_id(const MediaStreamTrack *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String MediaStreamTrack_label(const MediaStreamTrack *self);

/**
 * @brief Gets the `enabled` property. 
*/
bool MediaStreamTrack_enabled(const MediaStreamTrack *self);

/**
 * @brief Sets the `enabled` property. 
*/
void MediaStreamTrack_set_enabled(MediaStreamTrack* self, bool value);

/**
 * @brief Gets the `muted` property. 
*/
bool MediaStreamTrack_muted(const MediaStreamTrack *self);

/**
 * @brief Gets the `onmute` property. 
*/
jb_Any MediaStreamTrack_onmute(const MediaStreamTrack *self);

/**
 * @brief Sets the `onmute` property. 
*/
void MediaStreamTrack_set_onmute(MediaStreamTrack* self, jb_Any * value);

/**
 * @brief Gets the `onunmute` property. 
*/
jb_Any MediaStreamTrack_onunmute(const MediaStreamTrack *self);

/**
 * @brief Sets the `onunmute` property. 
*/
void MediaStreamTrack_set_onunmute(MediaStreamTrack* self, jb_Any * value);

/**
 * @brief Gets the `readyState` property. 
*/
MediaStreamTrackState MediaStreamTrack_readyState(const MediaStreamTrack *self);

/**
 * @brief Gets the `onended` property. 
*/
jb_Any MediaStreamTrack_onended(const MediaStreamTrack *self);

/**
 * @brief Sets the `onended` property. 
*/
void MediaStreamTrack_set_onended(MediaStreamTrack* self, jb_Any * value);

/**
 * @brief Calls the `clone` method. 
*/
MediaStreamTrack MediaStreamTrack_clone(MediaStreamTrack* self );

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined MediaStreamTrack_stop(MediaStreamTrack* self );

/**
 * @brief Calls the `getCapabilities` method. 
*/
MediaTrackCapabilities MediaStreamTrack_getCapabilities(MediaStreamTrack* self );

/**
 * @brief Calls the `getConstraints` method. 
*/
MediaTrackConstraints MediaStreamTrack_getConstraints(MediaStreamTrack* self );

/**
 * @brief Calls the `getSettings` method. 
*/
MediaTrackSettings MediaStreamTrack_getSettings(MediaStreamTrack* self );

/**
 * @brief Calls the `applyConstraints` method. 
*/
jb_Promise MediaStreamTrack_applyConstraints0(MediaStreamTrack* self );

/**
 * @brief Calls the `applyConstraints` method. 
*/
jb_Promise MediaStreamTrack_applyConstraints1(MediaStreamTrack* self , MediaTrackConstraints * constraints);

/**
 * @brief Calls the `getCaptureHandle` method. 
*/
CaptureHandle MediaStreamTrack_getCaptureHandle(MediaStreamTrack* self );

/**
 * @brief Gets the `oncapturehandlechange` property. 
*/
jb_Any MediaStreamTrack_oncapturehandlechange(const MediaStreamTrack *self);

/**
 * @brief Sets the `oncapturehandlechange` property. 
*/
void MediaStreamTrack_set_oncapturehandlechange(MediaStreamTrack* self, jb_Any * value);

/**
 * @brief Calls the `getSupportedCaptureActions` method. 
*/
jb_Array MediaStreamTrack_getSupportedCaptureActions(MediaStreamTrack* self );

/**
 * @brief Calls the `sendCaptureAction` method. 
*/
jb_Promise MediaStreamTrack_sendCaptureAction(MediaStreamTrack* self , CaptureAction * action);

/**
 * @brief Gets the `contentHint` property. 
*/
jb_String MediaStreamTrack_contentHint(const MediaStreamTrack *self);

/**
 * @brief Sets the `contentHint` property. 
*/
void MediaStreamTrack_set_contentHint(MediaStreamTrack* self, jb_String * value);

/**
 * @brief Gets the `isolated` property. 
*/
bool MediaStreamTrack_isolated(const MediaStreamTrack *self);

/**
 * @brief Gets the `onisolationchange` property. 
*/
jb_Any MediaStreamTrack_onisolationchange(const MediaStreamTrack *self);

/**
 * @brief Sets the `onisolationchange` property. 
*/
void MediaStreamTrack_set_onisolationchange(MediaStreamTrack* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
