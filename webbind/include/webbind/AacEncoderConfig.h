#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AacEncoderConfig, em_Val);

AacBitstreamFormat AacEncoderConfig_format(const AacEncoderConfig *self);

void AacEncoderConfig_set_format(AacEncoderConfig* self, AacBitstreamFormat * value);

AacEncoderConfig AacEncoderConfig_new();

#ifdef __cplusplus
}
#endif
