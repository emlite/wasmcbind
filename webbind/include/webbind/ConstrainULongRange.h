#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ULongRange.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstrainULongRange */
DECLARE_EMLITE_TYPE(ConstrainULongRange, ULongRange);

/** @brief Getter of the exact property */
unsigned long ConstrainULongRange_exact(const ConstrainULongRange *self);

/** @brief Setter of the exact property */
void ConstrainULongRange_set_exact(ConstrainULongRange* self, unsigned long value);

/** @brief Getter of the ideal property */
unsigned long ConstrainULongRange_ideal(const ConstrainULongRange *self);

/** @brief Setter of the ideal property */
void ConstrainULongRange_set_ideal(ConstrainULongRange* self, unsigned long value);

/** @brief Constructor of the ConstrainULongRange dictionary type */
ConstrainULongRange ConstrainULongRange_new();

#ifdef __cplusplus
}
#endif
