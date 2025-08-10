#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaImage.h"
#include "ChapterInformationInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaMetadataInit, em_Val);

jb_String MediaMetadataInit_title(const MediaMetadataInit *self);

void MediaMetadataInit_set_title(MediaMetadataInit* self, jb_String * value);

jb_String MediaMetadataInit_artist(const MediaMetadataInit *self);

void MediaMetadataInit_set_artist(MediaMetadataInit* self, jb_String * value);

jb_String MediaMetadataInit_album(const MediaMetadataInit *self);

void MediaMetadataInit_set_album(MediaMetadataInit* self, jb_String * value);

jb_Array MediaMetadataInit_artwork(const MediaMetadataInit *self);

void MediaMetadataInit_set_artwork(MediaMetadataInit* self, jb_Array * value);

jb_Array MediaMetadataInit_chapterInfo(const MediaMetadataInit *self);

void MediaMetadataInit_set_chapterInfo(MediaMetadataInit* self, jb_Array * value);

MediaMetadataInit MediaMetadataInit_new();

#ifdef __cplusplus
}
#endif
