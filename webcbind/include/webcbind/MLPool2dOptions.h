#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLPool2dOptions */
DECLARE_EMLITE_TYPE(MLPool2dOptions, MLOperatorOptions);

/** @brief Getter of the windowDimensions property */
jb_Array MLPool2dOptions_windowDimensions(const MLPool2dOptions *self);

/** @brief Setter of the windowDimensions property */
void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, jb_Array * value);

/** @brief Getter of the padding property */
jb_Array MLPool2dOptions_padding(const MLPool2dOptions *self);

/** @brief Setter of the padding property */
void MLPool2dOptions_set_padding(MLPool2dOptions* self, jb_Array * value);

/** @brief Getter of the strides property */
jb_Array MLPool2dOptions_strides(const MLPool2dOptions *self);

/** @brief Setter of the strides property */
void MLPool2dOptions_set_strides(MLPool2dOptions* self, jb_Array * value);

/** @brief Getter of the dilations property */
jb_Array MLPool2dOptions_dilations(const MLPool2dOptions *self);

/** @brief Setter of the dilations property */
void MLPool2dOptions_set_dilations(MLPool2dOptions* self, jb_Array * value);

/** @brief Getter of the layout property */
MLInputOperandLayout MLPool2dOptions_layout(const MLPool2dOptions *self);

/** @brief Setter of the layout property */
void MLPool2dOptions_set_layout(MLPool2dOptions* self, MLInputOperandLayout * value);

/** @brief Getter of the roundingType property */
MLRoundingType MLPool2dOptions_roundingType(const MLPool2dOptions *self);

/** @brief Setter of the roundingType property */
void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, MLRoundingType * value);

/** @brief Getter of the outputSizes property */
jb_Array MLPool2dOptions_outputSizes(const MLPool2dOptions *self);

/** @brief Setter of the outputSizes property */
void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, jb_Array * value);

/** @brief Constructor of the MLPool2dOptions dictionary type */
MLPool2dOptions MLPool2dOptions_new();

#ifdef __cplusplus
}
#endif
