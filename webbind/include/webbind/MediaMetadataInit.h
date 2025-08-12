#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaImage.h"
#include "ChapterInformationInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaMetadataInit */
DECLARE_EMLITE_TYPE(MediaMetadataInit, em_Val);

/** @brief Getter of the title property */
jb_String MediaMetadataInit_title(const MediaMetadataInit *self);

/** @brief Setter of the title property */
void MediaMetadataInit_set_title(MediaMetadataInit* self, jb_String * value);

/** @brief Getter of the artist property */
jb_String MediaMetadataInit_artist(const MediaMetadataInit *self);

/** @brief Setter of the artist property */
void MediaMetadataInit_set_artist(MediaMetadataInit* self, jb_String * value);

/** @brief Getter of the album property */
jb_String MediaMetadataInit_album(const MediaMetadataInit *self);

/** @brief Setter of the album property */
void MediaMetadataInit_set_album(MediaMetadataInit* self, jb_String * value);

/** @brief Getter of the artwork property */
jb_Array MediaMetadataInit_artwork(const MediaMetadataInit *self);

/** @brief Setter of the artwork property */
void MediaMetadataInit_set_artwork(MediaMetadataInit* self, jb_Array * value);

/** @brief Getter of the chapterInfo property */
jb_Array MediaMetadataInit_chapterInfo(const MediaMetadataInit *self);

/** @brief Setter of the chapterInfo property */
void MediaMetadataInit_set_chapterInfo(MediaMetadataInit* self, jb_Array * value);

/** @brief Constructor of the MediaMetadataInit dictionary type */
MediaMetadataInit MediaMetadataInit_new();

#ifdef __cplusplus
}
#endif
