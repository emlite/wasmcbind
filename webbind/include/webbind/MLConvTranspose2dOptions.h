#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLConvTranspose2dOptions */
DECLARE_EMLITE_TYPE(MLConvTranspose2dOptions, MLOperatorOptions);

/** @brief Getter of the padding property */
jb_Array MLConvTranspose2dOptions_padding(const MLConvTranspose2dOptions *self);

/** @brief Setter of the padding property */
void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, jb_Array * value);

/** @brief Getter of the strides property */
jb_Array MLConvTranspose2dOptions_strides(const MLConvTranspose2dOptions *self);

/** @brief Setter of the strides property */
void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, jb_Array * value);

/** @brief Getter of the dilations property */
jb_Array MLConvTranspose2dOptions_dilations(const MLConvTranspose2dOptions *self);

/** @brief Setter of the dilations property */
void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, jb_Array * value);

/** @brief Getter of the outputPadding property */
jb_Array MLConvTranspose2dOptions_outputPadding(const MLConvTranspose2dOptions *self);

/** @brief Setter of the outputPadding property */
void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, jb_Array * value);

/** @brief Getter of the outputSizes property */
jb_Array MLConvTranspose2dOptions_outputSizes(const MLConvTranspose2dOptions *self);

/** @brief Setter of the outputSizes property */
void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, jb_Array * value);

/** @brief Getter of the groups property */
unsigned long MLConvTranspose2dOptions_groups(const MLConvTranspose2dOptions *self);

/** @brief Setter of the groups property */
void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value);

/** @brief Getter of the inputLayout property */
MLInputOperandLayout MLConvTranspose2dOptions_inputLayout(const MLConvTranspose2dOptions *self);

/** @brief Setter of the inputLayout property */
void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, MLInputOperandLayout * value);

/** @brief Getter of the filterLayout property */
MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout(const MLConvTranspose2dOptions *self);

/** @brief Setter of the filterLayout property */
void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, MLConvTranspose2dFilterOperandLayout * value);

/** @brief Getter of the bias property */
MLOperand MLConvTranspose2dOptions_bias(const MLConvTranspose2dOptions *self);

/** @brief Setter of the bias property */
void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, MLOperand * value);

/** @brief Constructor of the MLConvTranspose2dOptions dictionary type */
MLConvTranspose2dOptions MLConvTranspose2dOptions_new();

#ifdef __cplusplus
}
#endif
