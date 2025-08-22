#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AesCbcParams */
DECLARE_EMLITE_TYPE(AesCbcParams, Algorithm);

/** @brief Getter of the iv property */
jb_Any AesCbcParams_iv(const AesCbcParams *self);

/** @brief Setter of the iv property */
void AesCbcParams_set_iv(AesCbcParams* self, jb_Any * value);

/** @brief Constructor of the AesCbcParams dictionary type */
AesCbcParams AesCbcParams_new();

#ifdef __cplusplus
}
#endif
