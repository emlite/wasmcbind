#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaImage.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ChapterInformationInit, em_Val);

jb_String ChapterInformationInit_title(const ChapterInformationInit *self);

void ChapterInformationInit_set_title(ChapterInformationInit* self, jb_String * value);

double ChapterInformationInit_startTime(const ChapterInformationInit *self);

void ChapterInformationInit_set_startTime(ChapterInformationInit* self, double value);

jb_Array ChapterInformationInit_artwork(const ChapterInformationInit *self);

void ChapterInformationInit_set_artwork(ChapterInformationInit* self, jb_Array * value);

ChapterInformationInit ChapterInformationInit_new();

#ifdef __cplusplus
}
#endif
