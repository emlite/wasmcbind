#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderConfig, em_Val);

jb_String VideoEncoderConfig_codec(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_codec(VideoEncoderConfig* self, jb_String * value);

unsigned long VideoEncoderConfig_width(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_width(VideoEncoderConfig* self, unsigned long value);

unsigned long VideoEncoderConfig_height(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_height(VideoEncoderConfig* self, unsigned long value);

unsigned long VideoEncoderConfig_displayWidth(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_displayWidth(VideoEncoderConfig* self, unsigned long value);

unsigned long VideoEncoderConfig_displayHeight(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_displayHeight(VideoEncoderConfig* self, unsigned long value);

long long VideoEncoderConfig_bitrate(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_bitrate(VideoEncoderConfig* self, long long value);

double VideoEncoderConfig_framerate(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_framerate(VideoEncoderConfig* self, double value);

HardwareAcceleration VideoEncoderConfig_hardwareAcceleration(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_hardwareAcceleration(VideoEncoderConfig* self, HardwareAcceleration * value);

AlphaOption VideoEncoderConfig_alpha(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_alpha(VideoEncoderConfig* self, AlphaOption * value);

jb_String VideoEncoderConfig_scalabilityMode(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_scalabilityMode(VideoEncoderConfig* self, jb_String * value);

VideoEncoderBitrateMode VideoEncoderConfig_bitrateMode(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_bitrateMode(VideoEncoderConfig* self, VideoEncoderBitrateMode * value);

LatencyMode VideoEncoderConfig_latencyMode(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_latencyMode(VideoEncoderConfig* self, LatencyMode * value);

jb_String VideoEncoderConfig_contentHint(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_contentHint(VideoEncoderConfig* self, jb_String * value);

VideoEncoderConfig VideoEncoderConfig_new();

#ifdef __cplusplus
}
#endif
