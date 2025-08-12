#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoTrack VideoTrack;


/**
 * @brief Interface VideoTrackList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList)
 */
DECLARE_EMLITE_TYPE(VideoTrackList, EventTarget);

/**
 * @brief Gets the `length` property. 
*/
unsigned long VideoTrackList_length(const VideoTrackList *self);

/**
 * @brief Calls the `getTrackById` method. 
*/
VideoTrack VideoTrackList_getTrackById(VideoTrackList* self , jb_String * id);

/**
 * @brief Gets the `selectedIndex` property. 
*/
long VideoTrackList_selectedIndex(const VideoTrackList *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any VideoTrackList_onchange(const VideoTrackList *self);

/**
 * @brief Sets the `onchange` property. 
*/
void VideoTrackList_set_onchange(VideoTrackList* self, jb_Any * value);

/**
 * @brief Gets the `onaddtrack` property. 
*/
jb_Any VideoTrackList_onaddtrack(const VideoTrackList *self);

/**
 * @brief Sets the `onaddtrack` property. 
*/
void VideoTrackList_set_onaddtrack(VideoTrackList* self, jb_Any * value);

/**
 * @brief Gets the `onremovetrack` property. 
*/
jb_Any VideoTrackList_onremovetrack(const VideoTrackList *self);

/**
 * @brief Sets the `onremovetrack` property. 
*/
void VideoTrackList_set_onremovetrack(VideoTrackList* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
