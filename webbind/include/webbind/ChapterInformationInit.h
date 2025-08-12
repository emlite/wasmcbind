#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaImage.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ChapterInformationInit */
DECLARE_EMLITE_TYPE(ChapterInformationInit, em_Val);

/** @brief Getter of the title property */
jb_String ChapterInformationInit_title(const ChapterInformationInit *self);

/** @brief Setter of the title property */
void ChapterInformationInit_set_title(ChapterInformationInit* self, jb_String * value);

/** @brief Getter of the startTime property */
double ChapterInformationInit_startTime(const ChapterInformationInit *self);

/** @brief Setter of the startTime property */
void ChapterInformationInit_set_startTime(ChapterInformationInit* self, double value);

/** @brief Getter of the artwork property */
jb_Array ChapterInformationInit_artwork(const ChapterInformationInit *self);

/** @brief Setter of the artwork property */
void ChapterInformationInit_set_artwork(ChapterInformationInit* self, jb_Array * value);

/** @brief Constructor of the ChapterInformationInit dictionary type */
ChapterInformationInit ChapterInformationInit_new();

#ifdef __cplusplus
}
#endif
