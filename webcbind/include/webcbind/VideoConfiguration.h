#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoConfiguration */
DECLARE_EMLITE_TYPE(VideoConfiguration, em_Val);

/** @brief Getter of the contentType property */
jb_String VideoConfiguration_contentType(const VideoConfiguration *self);

/** @brief Setter of the contentType property */
void VideoConfiguration_set_contentType(VideoConfiguration* self, jb_String * value);

/** @brief Getter of the width property */
unsigned long VideoConfiguration_width(const VideoConfiguration *self);

/** @brief Setter of the width property */
void VideoConfiguration_set_width(VideoConfiguration* self, unsigned long value);

/** @brief Getter of the height property */
unsigned long VideoConfiguration_height(const VideoConfiguration *self);

/** @brief Setter of the height property */
void VideoConfiguration_set_height(VideoConfiguration* self, unsigned long value);

/** @brief Getter of the bitrate property */
long long VideoConfiguration_bitrate(const VideoConfiguration *self);

/** @brief Setter of the bitrate property */
void VideoConfiguration_set_bitrate(VideoConfiguration* self, long long value);

/** @brief Getter of the framerate property */
double VideoConfiguration_framerate(const VideoConfiguration *self);

/** @brief Setter of the framerate property */
void VideoConfiguration_set_framerate(VideoConfiguration* self, double value);

/** @brief Getter of the hasAlphaChannel property */
bool VideoConfiguration_hasAlphaChannel(const VideoConfiguration *self);

/** @brief Setter of the hasAlphaChannel property */
void VideoConfiguration_set_hasAlphaChannel(VideoConfiguration* self, bool value);

/** @brief Getter of the hdrMetadataType property */
HdrMetadataType VideoConfiguration_hdrMetadataType(const VideoConfiguration *self);

/** @brief Setter of the hdrMetadataType property */
void VideoConfiguration_set_hdrMetadataType(VideoConfiguration* self, HdrMetadataType * value);

/** @brief Getter of the colorGamut property */
ColorGamut VideoConfiguration_colorGamut(const VideoConfiguration *self);

/** @brief Setter of the colorGamut property */
void VideoConfiguration_set_colorGamut(VideoConfiguration* self, ColorGamut * value);

/** @brief Getter of the transferFunction property */
TransferFunction VideoConfiguration_transferFunction(const VideoConfiguration *self);

/** @brief Setter of the transferFunction property */
void VideoConfiguration_set_transferFunction(VideoConfiguration* self, TransferFunction * value);

/** @brief Getter of the scalabilityMode property */
jb_String VideoConfiguration_scalabilityMode(const VideoConfiguration *self);

/** @brief Setter of the scalabilityMode property */
void VideoConfiguration_set_scalabilityMode(VideoConfiguration* self, jb_String * value);

/** @brief Getter of the spatialScalability property */
bool VideoConfiguration_spatialScalability(const VideoConfiguration *self);

/** @brief Setter of the spatialScalability property */
void VideoConfiguration_set_spatialScalability(VideoConfiguration* self, bool value);

/** @brief Constructor of the VideoConfiguration dictionary type */
VideoConfiguration VideoConfiguration_new();

#ifdef __cplusplus
}
#endif
