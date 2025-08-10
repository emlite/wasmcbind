#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AvcEncoderConfig, em_Val);

AvcBitstreamFormat AvcEncoderConfig_format(const AvcEncoderConfig *self);

void AvcEncoderConfig_set_format(AvcEncoderConfig* self, AvcBitstreamFormat * value);

AvcEncoderConfig AvcEncoderConfig_new();

#ifdef __cplusplus
}
#endif
