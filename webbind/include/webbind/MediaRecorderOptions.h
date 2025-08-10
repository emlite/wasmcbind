#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaRecorderOptions, em_Val);

jb_String MediaRecorderOptions_mimeType(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_mimeType(MediaRecorderOptions* self, jb_String * value);

unsigned long MediaRecorderOptions_audioBitsPerSecond(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_audioBitsPerSecond(MediaRecorderOptions* self, unsigned long value);

unsigned long MediaRecorderOptions_videoBitsPerSecond(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_videoBitsPerSecond(MediaRecorderOptions* self, unsigned long value);

unsigned long MediaRecorderOptions_bitsPerSecond(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_bitsPerSecond(MediaRecorderOptions* self, unsigned long value);

BitrateMode MediaRecorderOptions_audioBitrateMode(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_audioBitrateMode(MediaRecorderOptions* self, BitrateMode * value);

jb_Any MediaRecorderOptions_videoKeyFrameIntervalDuration(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_videoKeyFrameIntervalDuration(MediaRecorderOptions* self, jb_Any * value);

unsigned long MediaRecorderOptions_videoKeyFrameIntervalCount(const MediaRecorderOptions *self);

void MediaRecorderOptions_set_videoKeyFrameIntervalCount(MediaRecorderOptions* self, unsigned long value);

MediaRecorderOptions MediaRecorderOptions_new();

#ifdef __cplusplus
}
#endif
