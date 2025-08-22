#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AacEncoderConfig */
DECLARE_EMLITE_TYPE(AacEncoderConfig, em_Val);

/** @brief Getter of the format property */
AacBitstreamFormat AacEncoderConfig_format(const AacEncoderConfig *self);

/** @brief Setter of the format property */
void AacEncoderConfig_set_format(AacEncoderConfig* self, AacBitstreamFormat * value);

/** @brief Constructor of the AacEncoderConfig dictionary type */
AacEncoderConfig AacEncoderConfig_new();

#ifdef __cplusplus
}
#endif
