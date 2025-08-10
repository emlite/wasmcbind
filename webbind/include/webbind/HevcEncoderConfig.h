#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HevcEncoderConfig, em_Val);

HevcBitstreamFormat HevcEncoderConfig_format(const HevcEncoderConfig *self);

void HevcEncoderConfig_set_format(HevcEncoderConfig* self, HevcBitstreamFormat * value);

HevcEncoderConfig HevcEncoderConfig_new();

#ifdef __cplusplus
}
#endif
