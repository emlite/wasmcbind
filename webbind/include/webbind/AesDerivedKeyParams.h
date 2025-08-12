#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AesDerivedKeyParams */
DECLARE_EMLITE_TYPE(AesDerivedKeyParams, Algorithm);

/** @brief Getter of the length property */
unsigned short AesDerivedKeyParams_length(const AesDerivedKeyParams *self);

/** @brief Setter of the length property */
void AesDerivedKeyParams_set_length(AesDerivedKeyParams* self, unsigned short value);

/** @brief Constructor of the AesDerivedKeyParams dictionary type */
AesDerivedKeyParams AesDerivedKeyParams_new();

#ifdef __cplusplus
}
#endif
