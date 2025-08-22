#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLDataTypeLimits */
DECLARE_EMLITE_TYPE(MLDataTypeLimits, em_Val);

/** @brief Getter of the dataTypes property */
jb_Any MLDataTypeLimits_dataTypes(const MLDataTypeLimits *self);

/** @brief Setter of the dataTypes property */
void MLDataTypeLimits_set_dataTypes(MLDataTypeLimits* self, jb_Any * value);

/** @brief Constructor of the MLDataTypeLimits dictionary type */
MLDataTypeLimits MLDataTypeLimits_new();

#ifdef __cplusplus
}
#endif
