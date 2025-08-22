#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HevcEncoderConfig */
DECLARE_EMLITE_TYPE(HevcEncoderConfig, em_Val);

/** @brief Getter of the format property */
HevcBitstreamFormat HevcEncoderConfig_format(const HevcEncoderConfig *self);

/** @brief Setter of the format property */
void HevcEncoderConfig_set_format(HevcEncoderConfig* self, HevcBitstreamFormat * value);

/** @brief Constructor of the HevcEncoderConfig dictionary type */
HevcEncoderConfig HevcEncoderConfig_new();

#ifdef __cplusplus
}
#endif
