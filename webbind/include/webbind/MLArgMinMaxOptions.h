#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLArgMinMaxOptions */
DECLARE_EMLITE_TYPE(MLArgMinMaxOptions, MLOperatorOptions);

/** @brief Getter of the keepDimensions property */
bool MLArgMinMaxOptions_keepDimensions(const MLArgMinMaxOptions *self);

/** @brief Setter of the keepDimensions property */
void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value);

/** @brief Getter of the outputDataType property */
MLOperandDataType MLArgMinMaxOptions_outputDataType(const MLArgMinMaxOptions *self);

/** @brief Setter of the outputDataType property */
void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, MLOperandDataType * value);

/** @brief Constructor of the MLArgMinMaxOptions dictionary type */
MLArgMinMaxOptions MLArgMinMaxOptions_new();

#ifdef __cplusplus
}
#endif
