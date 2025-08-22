#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WritableStream WritableStream;
typedef struct MediaStreamTrack MediaStreamTrack;


/**
 * @brief Interface VideoTrackGenerator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator)
 */
DECLARE_EMLITE_TYPE(VideoTrackGenerator, em_Val);

/**
 * @brief Creates a new `VideoTrackGenerator` object. 
*/
VideoTrackGenerator VideoTrackGenerator_new();

/**
 * @brief Gets the `writable` property. 
*/
WritableStream VideoTrackGenerator_writable(const VideoTrackGenerator *self);

/**
 * @brief Gets the `muted` property. 
*/
bool VideoTrackGenerator_muted(const VideoTrackGenerator *self);

/**
 * @brief Sets the `muted` property. 
*/
void VideoTrackGenerator_set_muted(VideoTrackGenerator* self, bool value);

/**
 * @brief Gets the `track` property. 
*/
MediaStreamTrack VideoTrackGenerator_track(const VideoTrackGenerator *self);

#ifdef __cplusplus
}
#endif
