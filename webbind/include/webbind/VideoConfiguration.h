#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoConfiguration, em_Val);

jb_String VideoConfiguration_contentType(const VideoConfiguration *self);

void VideoConfiguration_set_contentType(VideoConfiguration* self, jb_String * value);

unsigned long VideoConfiguration_width(const VideoConfiguration *self);

void VideoConfiguration_set_width(VideoConfiguration* self, unsigned long value);

unsigned long VideoConfiguration_height(const VideoConfiguration *self);

void VideoConfiguration_set_height(VideoConfiguration* self, unsigned long value);

long long VideoConfiguration_bitrate(const VideoConfiguration *self);

void VideoConfiguration_set_bitrate(VideoConfiguration* self, long long value);

double VideoConfiguration_framerate(const VideoConfiguration *self);

void VideoConfiguration_set_framerate(VideoConfiguration* self, double value);

bool VideoConfiguration_hasAlphaChannel(const VideoConfiguration *self);

void VideoConfiguration_set_hasAlphaChannel(VideoConfiguration* self, bool value);

HdrMetadataType VideoConfiguration_hdrMetadataType(const VideoConfiguration *self);

void VideoConfiguration_set_hdrMetadataType(VideoConfiguration* self, HdrMetadataType * value);

ColorGamut VideoConfiguration_colorGamut(const VideoConfiguration *self);

void VideoConfiguration_set_colorGamut(VideoConfiguration* self, ColorGamut * value);

TransferFunction VideoConfiguration_transferFunction(const VideoConfiguration *self);

void VideoConfiguration_set_transferFunction(VideoConfiguration* self, TransferFunction * value);

jb_String VideoConfiguration_scalabilityMode(const VideoConfiguration *self);

void VideoConfiguration_set_scalabilityMode(VideoConfiguration* self, jb_String * value);

bool VideoConfiguration_spatialScalability(const VideoConfiguration *self);

void VideoConfiguration_set_spatialScalability(VideoConfiguration* self, bool value);

VideoConfiguration VideoConfiguration_new();

#ifdef __cplusplus
}
#endif
