#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PlaneLayout */
DECLARE_EMLITE_TYPE(PlaneLayout, em_Val);

/** @brief Getter of the offset property */
unsigned long PlaneLayout_offset(const PlaneLayout *self);

/** @brief Setter of the offset property */
void PlaneLayout_set_offset(PlaneLayout* self, unsigned long value);

/** @brief Getter of the stride property */
unsigned long PlaneLayout_stride(const PlaneLayout *self);

/** @brief Setter of the stride property */
void PlaneLayout_set_stride(PlaneLayout* self, unsigned long value);

/** @brief Constructor of the PlaneLayout dictionary type */
PlaneLayout PlaneLayout_new();

#ifdef __cplusplus
}
#endif
