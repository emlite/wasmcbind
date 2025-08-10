#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FlacEncoderConfig, em_Val);

unsigned long FlacEncoderConfig_blockSize(const FlacEncoderConfig *self);

void FlacEncoderConfig_set_blockSize(FlacEncoderConfig* self, unsigned long value);

unsigned long FlacEncoderConfig_compressLevel(const FlacEncoderConfig *self);

void FlacEncoderConfig_set_compressLevel(FlacEncoderConfig* self, unsigned long value);

FlacEncoderConfig FlacEncoderConfig_new();

#ifdef __cplusplus
}
#endif
