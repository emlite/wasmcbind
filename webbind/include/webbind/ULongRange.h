#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ULongRange */
DECLARE_EMLITE_TYPE(ULongRange, em_Val);

/** @brief Getter of the max property */
unsigned long ULongRange_max(const ULongRange *self);

/** @brief Setter of the max property */
void ULongRange_set_max(ULongRange* self, unsigned long value);

/** @brief Getter of the min property */
unsigned long ULongRange_min(const ULongRange *self);

/** @brief Setter of the min property */
void ULongRange_set_min(ULongRange* self, unsigned long value);

/** @brief Constructor of the ULongRange dictionary type */
ULongRange ULongRange_new();

#ifdef __cplusplus
}
#endif
