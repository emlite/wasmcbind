#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoColorSpaceInit */
DECLARE_EMLITE_TYPE(VideoColorSpaceInit, em_Val);

/** @brief Getter of the primaries property */
VideoColorPrimaries VideoColorSpaceInit_primaries(const VideoColorSpaceInit *self);

/** @brief Setter of the primaries property */
void VideoColorSpaceInit_set_primaries(VideoColorSpaceInit* self, VideoColorPrimaries * value);

/** @brief Getter of the transfer property */
VideoTransferCharacteristics VideoColorSpaceInit_transfer(const VideoColorSpaceInit *self);

/** @brief Setter of the transfer property */
void VideoColorSpaceInit_set_transfer(VideoColorSpaceInit* self, VideoTransferCharacteristics * value);

/** @brief Getter of the matrix property */
VideoMatrixCoefficients VideoColorSpaceInit_matrix(const VideoColorSpaceInit *self);

/** @brief Setter of the matrix property */
void VideoColorSpaceInit_set_matrix(VideoColorSpaceInit* self, VideoMatrixCoefficients * value);

/** @brief Getter of the fullRange property */
bool VideoColorSpaceInit_fullRange(const VideoColorSpaceInit *self);

/** @brief Setter of the fullRange property */
void VideoColorSpaceInit_set_fullRange(VideoColorSpaceInit* self, bool value);

/** @brief Constructor of the VideoColorSpaceInit dictionary type */
VideoColorSpaceInit VideoColorSpaceInit_new();

#ifdef __cplusplus
}
#endif
