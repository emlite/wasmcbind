#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaImage MediaImage;

DECLARE_EMLITE_TYPE(ChapterInformation, em_Val);

jb_String ChapterInformation_title(const ChapterInformation *self);

double ChapterInformation_startTime(const ChapterInformation *self);

jb_Array ChapterInformation_artwork(const ChapterInformation *self);

#ifdef __cplusplus
}
#endif
