#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoColorSpaceInit VideoColorSpaceInit;

DECLARE_EMLITE_TYPE(VideoColorSpace, em_Val);

VideoColorSpace VideoColorSpace_new0();

VideoColorSpace VideoColorSpace_new1(VideoColorSpaceInit * init);

VideoColorPrimaries VideoColorSpace_primaries(const VideoColorSpace *self);

VideoTransferCharacteristics VideoColorSpace_transfer(const VideoColorSpace *self);

VideoMatrixCoefficients VideoColorSpace_matrix(const VideoColorSpace *self);

bool VideoColorSpace_fullRange(const VideoColorSpace *self);

VideoColorSpaceInit VideoColorSpace_toJSON(VideoColorSpace* self );

#ifdef __cplusplus
}
#endif
