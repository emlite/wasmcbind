#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AvcEncoderConfig */
DECLARE_EMLITE_TYPE(AvcEncoderConfig, em_Val);

/** @brief Getter of the format property */
AvcBitstreamFormat AvcEncoderConfig_format(const AvcEncoderConfig *self);

/** @brief Setter of the format property */
void AvcEncoderConfig_set_format(AvcEncoderConfig* self, AvcBitstreamFormat * value);

/** @brief Constructor of the AvcEncoderConfig dictionary type */
AvcEncoderConfig AvcEncoderConfig_new();

#ifdef __cplusplus
}
#endif
