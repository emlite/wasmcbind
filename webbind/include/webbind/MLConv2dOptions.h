#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLConv2dOptions */
DECLARE_EMLITE_TYPE(MLConv2dOptions, MLOperatorOptions);

/** @brief Getter of the padding property */
jb_Array MLConv2dOptions_padding(const MLConv2dOptions *self);

/** @brief Setter of the padding property */
void MLConv2dOptions_set_padding(MLConv2dOptions* self, jb_Array * value);

/** @brief Getter of the strides property */
jb_Array MLConv2dOptions_strides(const MLConv2dOptions *self);

/** @brief Setter of the strides property */
void MLConv2dOptions_set_strides(MLConv2dOptions* self, jb_Array * value);

/** @brief Getter of the dilations property */
jb_Array MLConv2dOptions_dilations(const MLConv2dOptions *self);

/** @brief Setter of the dilations property */
void MLConv2dOptions_set_dilations(MLConv2dOptions* self, jb_Array * value);

/** @brief Getter of the groups property */
unsigned long MLConv2dOptions_groups(const MLConv2dOptions *self);

/** @brief Setter of the groups property */
void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value);

/** @brief Getter of the inputLayout property */
MLInputOperandLayout MLConv2dOptions_inputLayout(const MLConv2dOptions *self);

/** @brief Setter of the inputLayout property */
void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, MLInputOperandLayout * value);

/** @brief Getter of the filterLayout property */
MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout(const MLConv2dOptions *self);

/** @brief Setter of the filterLayout property */
void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, MLConv2dFilterOperandLayout * value);

/** @brief Getter of the bias property */
MLOperand MLConv2dOptions_bias(const MLConv2dOptions *self);

/** @brief Setter of the bias property */
void MLConv2dOptions_set_bias(MLConv2dOptions* self, MLOperand * value);

/** @brief Constructor of the MLConv2dOptions dictionary type */
MLConv2dOptions MLConv2dOptions_new();

#ifdef __cplusplus
}
#endif
