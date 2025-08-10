#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoColorSpaceInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoDecoderConfig, em_Val);

jb_String VideoDecoderConfig_codec(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_codec(VideoDecoderConfig* self, jb_String * value);

jb_Any VideoDecoderConfig_description(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_description(VideoDecoderConfig* self, jb_Any * value);

unsigned long VideoDecoderConfig_codedWidth(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_codedWidth(VideoDecoderConfig* self, unsigned long value);

unsigned long VideoDecoderConfig_codedHeight(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_codedHeight(VideoDecoderConfig* self, unsigned long value);

unsigned long VideoDecoderConfig_displayAspectWidth(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_displayAspectWidth(VideoDecoderConfig* self, unsigned long value);

unsigned long VideoDecoderConfig_displayAspectHeight(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_displayAspectHeight(VideoDecoderConfig* self, unsigned long value);

VideoColorSpaceInit VideoDecoderConfig_colorSpace(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_colorSpace(VideoDecoderConfig* self, VideoColorSpaceInit * value);

HardwareAcceleration VideoDecoderConfig_hardwareAcceleration(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_hardwareAcceleration(VideoDecoderConfig* self, HardwareAcceleration * value);

bool VideoDecoderConfig_optimizeForLatency(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_optimizeForLatency(VideoDecoderConfig* self, bool value);

double VideoDecoderConfig_rotation(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_rotation(VideoDecoderConfig* self, double value);

bool VideoDecoderConfig_flip(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_flip(VideoDecoderConfig* self, bool value);

VideoDecoderConfig VideoDecoderConfig_new();

#ifdef __cplusplus
}
#endif
