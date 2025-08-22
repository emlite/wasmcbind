#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SourceBuffer SourceBuffer;


/**
 * @brief Interface VideoTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack)
 */
DECLARE_EMLITE_TYPE(VideoTrack, em_Val);

/**
 * @brief Gets the `id` property. 
*/
jb_String VideoTrack_id(const VideoTrack *self);

/**
 * @brief Gets the `kind` property. 
*/
jb_String VideoTrack_kind(const VideoTrack *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String VideoTrack_label(const VideoTrack *self);

/**
 * @brief Gets the `language` property. 
*/
jb_String VideoTrack_language(const VideoTrack *self);

/**
 * @brief Gets the `selected` property. 
*/
bool VideoTrack_selected(const VideoTrack *self);

/**
 * @brief Sets the `selected` property. 
*/
void VideoTrack_set_selected(VideoTrack* self, bool value);

/**
 * @brief Gets the `sourceBuffer` property. 
*/
SourceBuffer VideoTrack_sourceBuffer(const VideoTrack *self);

#ifdef __cplusplus
}
#endif
