#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MediaImage MediaImage;


DECLARE_EMLITE_TYPE(MediaImage, em_Val);

jb_USVString MediaImage_src( const MediaImage *self);

void MediaImage_set_src(MediaImage* self, jb_USVString * value);

jb_DOMString MediaImage_sizes( const MediaImage *self);

void MediaImage_set_sizes(MediaImage* self, jb_DOMString * value);

jb_DOMString MediaImage_type( const MediaImage *self);

void MediaImage_set_type(MediaImage* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(ChapterInformation, em_Val);

jb_DOMString ChapterInformation_title( const ChapterInformation *self);

double ChapterInformation_startTime( const ChapterInformation *self);

jb_FrozenArray ChapterInformation_artwork( const ChapterInformation *self);
