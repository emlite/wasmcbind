#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoFrameMetadata, em_Val);

VideoFrameMetadata VideoFrameMetadata_new();

#ifdef __cplusplus
}
#endif
