#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaRecorderOptions */
DECLARE_EMLITE_TYPE(MediaRecorderOptions, em_Val);

/** @brief Getter of the mimeType property */
jb_String MediaRecorderOptions_mimeType(const MediaRecorderOptions *self);

/** @brief Setter of the mimeType property */
void MediaRecorderOptions_set_mimeType(MediaRecorderOptions* self, jb_String * value);

/** @brief Getter of the audioBitsPerSecond property */
unsigned long MediaRecorderOptions_audioBitsPerSecond(const MediaRecorderOptions *self);

/** @brief Setter of the audioBitsPerSecond property */
void MediaRecorderOptions_set_audioBitsPerSecond(MediaRecorderOptions* self, unsigned long value);

/** @brief Getter of the videoBitsPerSecond property */
unsigned long MediaRecorderOptions_videoBitsPerSecond(const MediaRecorderOptions *self);

/** @brief Setter of the videoBitsPerSecond property */
void MediaRecorderOptions_set_videoBitsPerSecond(MediaRecorderOptions* self, unsigned long value);

/** @brief Getter of the bitsPerSecond property */
unsigned long MediaRecorderOptions_bitsPerSecond(const MediaRecorderOptions *self);

/** @brief Setter of the bitsPerSecond property */
void MediaRecorderOptions_set_bitsPerSecond(MediaRecorderOptions* self, unsigned long value);

/** @brief Getter of the audioBitrateMode property */
BitrateMode MediaRecorderOptions_audioBitrateMode(const MediaRecorderOptions *self);

/** @brief Setter of the audioBitrateMode property */
void MediaRecorderOptions_set_audioBitrateMode(MediaRecorderOptions* self, BitrateMode * value);

/** @brief Getter of the videoKeyFrameIntervalDuration property */
jb_Any MediaRecorderOptions_videoKeyFrameIntervalDuration(const MediaRecorderOptions *self);

/** @brief Setter of the videoKeyFrameIntervalDuration property */
void MediaRecorderOptions_set_videoKeyFrameIntervalDuration(MediaRecorderOptions* self, jb_Any * value);

/** @brief Getter of the videoKeyFrameIntervalCount property */
unsigned long MediaRecorderOptions_videoKeyFrameIntervalCount(const MediaRecorderOptions *self);

/** @brief Setter of the videoKeyFrameIntervalCount property */
void MediaRecorderOptions_set_videoKeyFrameIntervalCount(MediaRecorderOptions* self, unsigned long value);

/** @brief Constructor of the MediaRecorderOptions dictionary type */
MediaRecorderOptions MediaRecorderOptions_new();

#ifdef __cplusplus
}
#endif
