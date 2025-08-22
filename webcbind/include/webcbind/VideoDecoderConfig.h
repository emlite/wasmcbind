#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "VideoColorSpaceInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoDecoderConfig */
DECLARE_EMLITE_TYPE(VideoDecoderConfig, em_Val);

/** @brief Getter of the codec property */
jb_String VideoDecoderConfig_codec(const VideoDecoderConfig *self);

/** @brief Setter of the codec property */
void VideoDecoderConfig_set_codec(VideoDecoderConfig* self, jb_String * value);

/** @brief Getter of the description property */
jb_Any VideoDecoderConfig_description(const VideoDecoderConfig *self);

/** @brief Setter of the description property */
void VideoDecoderConfig_set_description(VideoDecoderConfig* self, jb_Any * value);

/** @brief Getter of the codedWidth property */
unsigned long VideoDecoderConfig_codedWidth(const VideoDecoderConfig *self);

/** @brief Setter of the codedWidth property */
void VideoDecoderConfig_set_codedWidth(VideoDecoderConfig* self, unsigned long value);

/** @brief Getter of the codedHeight property */
unsigned long VideoDecoderConfig_codedHeight(const VideoDecoderConfig *self);

/** @brief Setter of the codedHeight property */
void VideoDecoderConfig_set_codedHeight(VideoDecoderConfig* self, unsigned long value);

/** @brief Getter of the displayAspectWidth property */
unsigned long VideoDecoderConfig_displayAspectWidth(const VideoDecoderConfig *self);

/** @brief Setter of the displayAspectWidth property */
void VideoDecoderConfig_set_displayAspectWidth(VideoDecoderConfig* self, unsigned long value);

/** @brief Getter of the displayAspectHeight property */
unsigned long VideoDecoderConfig_displayAspectHeight(const VideoDecoderConfig *self);

/** @brief Setter of the displayAspectHeight property */
void VideoDecoderConfig_set_displayAspectHeight(VideoDecoderConfig* self, unsigned long value);

/** @brief Getter of the colorSpace property */
VideoColorSpaceInit VideoDecoderConfig_colorSpace(const VideoDecoderConfig *self);

/** @brief Setter of the colorSpace property */
void VideoDecoderConfig_set_colorSpace(VideoDecoderConfig* self, VideoColorSpaceInit * value);

/** @brief Getter of the hardwareAcceleration property */
HardwareAcceleration VideoDecoderConfig_hardwareAcceleration(const VideoDecoderConfig *self);

/** @brief Setter of the hardwareAcceleration property */
void VideoDecoderConfig_set_hardwareAcceleration(VideoDecoderConfig* self, HardwareAcceleration * value);

/** @brief Getter of the optimizeForLatency property */
bool VideoDecoderConfig_optimizeForLatency(const VideoDecoderConfig *self);

/** @brief Setter of the optimizeForLatency property */
void VideoDecoderConfig_set_optimizeForLatency(VideoDecoderConfig* self, bool value);

/** @brief Getter of the rotation property */
double VideoDecoderConfig_rotation(const VideoDecoderConfig *self);

/** @brief Setter of the rotation property */
void VideoDecoderConfig_set_rotation(VideoDecoderConfig* self, double value);

/** @brief Getter of the flip property */
bool VideoDecoderConfig_flip(const VideoDecoderConfig *self);

/** @brief Setter of the flip property */
void VideoDecoderConfig_set_flip(VideoDecoderConfig* self, bool value);

/** @brief Constructor of the VideoDecoderConfig dictionary type */
VideoDecoderConfig VideoDecoderConfig_new();

#ifdef __cplusplus
}
#endif
