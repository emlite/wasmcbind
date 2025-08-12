#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FlacEncoderConfig */
DECLARE_EMLITE_TYPE(FlacEncoderConfig, em_Val);

/** @brief Getter of the blockSize property */
unsigned long FlacEncoderConfig_blockSize(const FlacEncoderConfig *self);

/** @brief Setter of the blockSize property */
void FlacEncoderConfig_set_blockSize(FlacEncoderConfig* self, unsigned long value);

/** @brief Getter of the compressLevel property */
unsigned long FlacEncoderConfig_compressLevel(const FlacEncoderConfig *self);

/** @brief Setter of the compressLevel property */
void FlacEncoderConfig_set_compressLevel(FlacEncoderConfig* self, unsigned long value);

/** @brief Constructor of the FlacEncoderConfig dictionary type */
FlacEncoderConfig FlacEncoderConfig_new();

#ifdef __cplusplus
}
#endif
