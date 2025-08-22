#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaMetadataInit MediaMetadataInit;
typedef struct ChapterInformation ChapterInformation;


/**
 * @brief Interface MediaMetadata
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaMetadata)
 */
DECLARE_EMLITE_TYPE(MediaMetadata, em_Val);

/**
 * @brief Creates a new `MediaMetadata` object. 
*/
MediaMetadata MediaMetadata_new0();

/**
 * @brief Creates a new `MediaMetadata` object. 
*/
MediaMetadata MediaMetadata_new1(MediaMetadataInit * init);

/**
 * @brief Gets the `title` property. 
*/
jb_String MediaMetadata_title(const MediaMetadata *self);

/**
 * @brief Sets the `title` property. 
*/
void MediaMetadata_set_title(MediaMetadata* self, jb_String * value);

/**
 * @brief Gets the `artist` property. 
*/
jb_String MediaMetadata_artist(const MediaMetadata *self);

/**
 * @brief Sets the `artist` property. 
*/
void MediaMetadata_set_artist(MediaMetadata* self, jb_String * value);

/**
 * @brief Gets the `album` property. 
*/
jb_String MediaMetadata_album(const MediaMetadata *self);

/**
 * @brief Sets the `album` property. 
*/
void MediaMetadata_set_album(MediaMetadata* self, jb_String * value);

/**
 * @brief Gets the `artwork` property. 
*/
jb_Array MediaMetadata_artwork(const MediaMetadata *self);

/**
 * @brief Sets the `artwork` property. 
*/
void MediaMetadata_set_artwork(MediaMetadata* self, jb_Array * value);

/**
 * @brief Gets the `chapterInfo` property. 
*/
jb_Array MediaMetadata_chapterInfo(const MediaMetadata *self);

#ifdef __cplusplus
}
#endif
