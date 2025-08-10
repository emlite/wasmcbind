#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SFrameTransformOptions, em_Val);

SFrameTransformRole SFrameTransformOptions_role(const SFrameTransformOptions *self);

void SFrameTransformOptions_set_role(SFrameTransformOptions* self, SFrameTransformRole * value);

SFrameCipherSuite SFrameTransformOptions_cipherSuite(const SFrameTransformOptions *self);

void SFrameTransformOptions_set_cipherSuite(SFrameTransformOptions* self, SFrameCipherSuite * value);

SFrameTransformOptions SFrameTransformOptions_new();

#ifdef __cplusplus
}
#endif
