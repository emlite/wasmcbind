#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface VideoPlaybackQuality
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality)
 */
DECLARE_EMLITE_TYPE(VideoPlaybackQuality, em_Val);

/**
 * @brief Gets the `creationTime` property. 
*/
jb_Any VideoPlaybackQuality_creationTime(const VideoPlaybackQuality *self);

/**
 * @brief Gets the `droppedVideoFrames` property. 
*/
unsigned long VideoPlaybackQuality_droppedVideoFrames(const VideoPlaybackQuality *self);

/**
 * @brief Gets the `totalVideoFrames` property. 
*/
unsigned long VideoPlaybackQuality_totalVideoFrames(const VideoPlaybackQuality *self);

/**
 * @brief Gets the `corruptedVideoFrames` property. 
*/
unsigned long VideoPlaybackQuality_corruptedVideoFrames(const VideoPlaybackQuality *self);

#ifdef __cplusplus
}
#endif
