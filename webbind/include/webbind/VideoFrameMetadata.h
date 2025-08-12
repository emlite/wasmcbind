#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoFrameMetadata */
DECLARE_EMLITE_TYPE(VideoFrameMetadata, em_Val);

/** @brief Constructor of the VideoFrameMetadata dictionary type */
VideoFrameMetadata VideoFrameMetadata_new();

#ifdef __cplusplus
}
#endif
