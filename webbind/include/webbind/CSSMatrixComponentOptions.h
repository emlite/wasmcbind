#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CSSMatrixComponentOptions */
DECLARE_EMLITE_TYPE(CSSMatrixComponentOptions, em_Val);

/** @brief Getter of the is2D property */
bool CSSMatrixComponentOptions_is2D(const CSSMatrixComponentOptions *self);

/** @brief Setter of the is2D property */
void CSSMatrixComponentOptions_set_is2D(CSSMatrixComponentOptions* self, bool value);

/** @brief Constructor of the CSSMatrixComponentOptions dictionary type */
CSSMatrixComponentOptions CSSMatrixComponentOptions_new();

#ifdef __cplusplus
}
#endif
