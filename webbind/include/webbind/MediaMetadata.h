#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ChapterInformation ChapterInformation;


DECLARE_EMLITE_TYPE(MediaMetadata, em_Val);

MediaMetadata MediaMetadata_new0();

MediaMetadata MediaMetadata_new1(jb_Any * init);

jb_DOMString MediaMetadata_title(const MediaMetadata *self);

void MediaMetadata_set_title(MediaMetadata* self, jb_DOMString * value);

jb_DOMString MediaMetadata_artist(const MediaMetadata *self);

void MediaMetadata_set_artist(MediaMetadata* self, jb_DOMString * value);

jb_DOMString MediaMetadata_album(const MediaMetadata *self);

void MediaMetadata_set_album(MediaMetadata* self, jb_DOMString * value);

jb_FrozenArray MediaMetadata_artwork(const MediaMetadata *self);

void MediaMetadata_set_artwork(MediaMetadata* self, jb_FrozenArray * value);

jb_FrozenArray MediaMetadata_chapterInfo(const MediaMetadata *self);
