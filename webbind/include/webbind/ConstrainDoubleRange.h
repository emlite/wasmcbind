#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DoubleRange.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstrainDoubleRange */
DECLARE_EMLITE_TYPE(ConstrainDoubleRange, DoubleRange);

/** @brief Getter of the exact property */
double ConstrainDoubleRange_exact(const ConstrainDoubleRange *self);

/** @brief Setter of the exact property */
void ConstrainDoubleRange_set_exact(ConstrainDoubleRange* self, double value);

/** @brief Getter of the ideal property */
double ConstrainDoubleRange_ideal(const ConstrainDoubleRange *self);

/** @brief Setter of the ideal property */
void ConstrainDoubleRange_set_ideal(ConstrainDoubleRange* self, double value);

/** @brief Constructor of the ConstrainDoubleRange dictionary type */
ConstrainDoubleRange ConstrainDoubleRange_new();

#ifdef __cplusplus
}
#endif
