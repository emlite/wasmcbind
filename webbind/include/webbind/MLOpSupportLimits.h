#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLWhereSupportLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLOpSupportLimits */
DECLARE_EMLITE_TYPE(MLOpSupportLimits, em_Val);

/** @brief Getter of the where property */
MLWhereSupportLimits MLOpSupportLimits_where(const MLOpSupportLimits *self);

/** @brief Setter of the where property */
void MLOpSupportLimits_set_where(MLOpSupportLimits* self, MLWhereSupportLimits * value);

/** @brief Constructor of the MLOpSupportLimits dictionary type */
MLOpSupportLimits MLOpSupportLimits_new();

#ifdef __cplusplus
}
#endif
