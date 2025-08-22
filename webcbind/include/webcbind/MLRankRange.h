#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLRankRange */
DECLARE_EMLITE_TYPE(MLRankRange, em_Val);

/** @brief Getter of the min property */
unsigned long MLRankRange_min(const MLRankRange *self);

/** @brief Setter of the min property */
void MLRankRange_set_min(MLRankRange* self, unsigned long value);

/** @brief Getter of the max property */
unsigned long MLRankRange_max(const MLRankRange *self);

/** @brief Setter of the max property */
void MLRankRange_set_max(MLRankRange* self, unsigned long value);

/** @brief Constructor of the MLRankRange dictionary type */
MLRankRange MLRankRange_new();

#ifdef __cplusplus
}
#endif
