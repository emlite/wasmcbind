#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLTriangularOptions */
DECLARE_EMLITE_TYPE(MLTriangularOptions, MLOperatorOptions);

/** @brief Getter of the upper property */
bool MLTriangularOptions_upper(const MLTriangularOptions *self);

/** @brief Setter of the upper property */
void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value);

/** @brief Getter of the diagonal property */
long MLTriangularOptions_diagonal(const MLTriangularOptions *self);

/** @brief Setter of the diagonal property */
void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value);

/** @brief Constructor of the MLTriangularOptions dictionary type */
MLTriangularOptions MLTriangularOptions_new();

#ifdef __cplusplus
}
#endif
