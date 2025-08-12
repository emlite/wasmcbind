#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLRankRange.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLTensorLimits */
DECLARE_EMLITE_TYPE(MLTensorLimits, em_Val);

/** @brief Getter of the dataTypes property */
jb_Any MLTensorLimits_dataTypes(const MLTensorLimits *self);

/** @brief Setter of the dataTypes property */
void MLTensorLimits_set_dataTypes(MLTensorLimits* self, jb_Any * value);

/** @brief Getter of the rankRange property */
MLRankRange MLTensorLimits_rankRange(const MLTensorLimits *self);

/** @brief Setter of the rankRange property */
void MLTensorLimits_set_rankRange(MLTensorLimits* self, MLRankRange * value);

/** @brief Constructor of the MLTensorLimits dictionary type */
MLTensorLimits MLTensorLimits_new();

#ifdef __cplusplus
}
#endif
