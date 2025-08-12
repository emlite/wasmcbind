#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DoubleRange */
DECLARE_EMLITE_TYPE(DoubleRange, em_Val);

/** @brief Getter of the max property */
double DoubleRange_max(const DoubleRange *self);

/** @brief Setter of the max property */
void DoubleRange_set_max(DoubleRange* self, double value);

/** @brief Getter of the min property */
double DoubleRange_min(const DoubleRange *self);

/** @brief Setter of the min property */
void DoubleRange_set_min(DoubleRange* self, double value);

/** @brief Constructor of the DoubleRange dictionary type */
DoubleRange DoubleRange_new();

#ifdef __cplusplus
}
#endif
