#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SFrameTransformOptions */
DECLARE_EMLITE_TYPE(SFrameTransformOptions, em_Val);

/** @brief Getter of the role property */
SFrameTransformRole SFrameTransformOptions_role(const SFrameTransformOptions *self);

/** @brief Setter of the role property */
void SFrameTransformOptions_set_role(SFrameTransformOptions* self, SFrameTransformRole * value);

/** @brief Getter of the cipherSuite property */
SFrameCipherSuite SFrameTransformOptions_cipherSuite(const SFrameTransformOptions *self);

/** @brief Setter of the cipherSuite property */
void SFrameTransformOptions_set_cipherSuite(SFrameTransformOptions* self, SFrameCipherSuite * value);

/** @brief Constructor of the SFrameTransformOptions dictionary type */
SFrameTransformOptions SFrameTransformOptions_new();

#ifdef __cplusplus
}
#endif
