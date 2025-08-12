#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EcdsaParams */
DECLARE_EMLITE_TYPE(EcdsaParams, Algorithm);

/** @brief Getter of the hash property */
jb_Any EcdsaParams_hash(const EcdsaParams *self);

/** @brief Setter of the hash property */
void EcdsaParams_set_hash(EcdsaParams* self, jb_Any * value);

/** @brief Constructor of the EcdsaParams dictionary type */
EcdsaParams EcdsaParams_new();

#ifdef __cplusplus
}
#endif
