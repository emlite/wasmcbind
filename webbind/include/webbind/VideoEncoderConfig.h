#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderConfig */
DECLARE_EMLITE_TYPE(VideoEncoderConfig, em_Val);

/** @brief Getter of the codec property */
jb_String VideoEncoderConfig_codec(const VideoEncoderConfig *self);

/** @brief Setter of the codec property */
void VideoEncoderConfig_set_codec(VideoEncoderConfig* self, jb_String * value);

/** @brief Getter of the width property */
unsigned long VideoEncoderConfig_width(const VideoEncoderConfig *self);

/** @brief Setter of the width property */
void VideoEncoderConfig_set_width(VideoEncoderConfig* self, unsigned long value);

/** @brief Getter of the height property */
unsigned long VideoEncoderConfig_height(const VideoEncoderConfig *self);

/** @brief Setter of the height property */
void VideoEncoderConfig_set_height(VideoEncoderConfig* self, unsigned long value);

/** @brief Getter of the displayWidth property */
unsigned long VideoEncoderConfig_displayWidth(const VideoEncoderConfig *self);

/** @brief Setter of the displayWidth property */
void VideoEncoderConfig_set_displayWidth(VideoEncoderConfig* self, unsigned long value);

/** @brief Getter of the displayHeight property */
unsigned long VideoEncoderConfig_displayHeight(const VideoEncoderConfig *self);

/** @brief Setter of the displayHeight property */
void VideoEncoderConfig_set_displayHeight(VideoEncoderConfig* self, unsigned long value);

/** @brief Getter of the bitrate property */
long long VideoEncoderConfig_bitrate(const VideoEncoderConfig *self);

/** @brief Setter of the bitrate property */
void VideoEncoderConfig_set_bitrate(VideoEncoderConfig* self, long long value);

/** @brief Getter of the framerate property */
double VideoEncoderConfig_framerate(const VideoEncoderConfig *self);

/** @brief Setter of the framerate property */
void VideoEncoderConfig_set_framerate(VideoEncoderConfig* self, double value);

/** @brief Getter of the hardwareAcceleration property */
HardwareAcceleration VideoEncoderConfig_hardwareAcceleration(const VideoEncoderConfig *self);

/** @brief Setter of the hardwareAcceleration property */
void VideoEncoderConfig_set_hardwareAcceleration(VideoEncoderConfig* self, HardwareAcceleration * value);

/** @brief Getter of the alpha property */
AlphaOption VideoEncoderConfig_alpha(const VideoEncoderConfig *self);

/** @brief Setter of the alpha property */
void VideoEncoderConfig_set_alpha(VideoEncoderConfig* self, AlphaOption * value);

/** @brief Getter of the scalabilityMode property */
jb_String VideoEncoderConfig_scalabilityMode(const VideoEncoderConfig *self);

/** @brief Setter of the scalabilityMode property */
void VideoEncoderConfig_set_scalabilityMode(VideoEncoderConfig* self, jb_String * value);

/** @brief Getter of the bitrateMode property */
VideoEncoderBitrateMode VideoEncoderConfig_bitrateMode(const VideoEncoderConfig *self);

/** @brief Setter of the bitrateMode property */
void VideoEncoderConfig_set_bitrateMode(VideoEncoderConfig* self, VideoEncoderBitrateMode * value);

/** @brief Getter of the latencyMode property */
LatencyMode VideoEncoderConfig_latencyMode(const VideoEncoderConfig *self);

/** @brief Setter of the latencyMode property */
void VideoEncoderConfig_set_latencyMode(VideoEncoderConfig* self, LatencyMode * value);

/** @brief Getter of the contentHint property */
jb_String VideoEncoderConfig_contentHint(const VideoEncoderConfig *self);

/** @brief Setter of the contentHint property */
void VideoEncoderConfig_set_contentHint(VideoEncoderConfig* self, jb_String * value);

/** @brief Constructor of the VideoEncoderConfig dictionary type */
VideoEncoderConfig VideoEncoderConfig_new();

#ifdef __cplusplus
}
#endif
