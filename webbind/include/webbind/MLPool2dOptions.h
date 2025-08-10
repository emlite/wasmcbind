#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLPool2dOptions, MLOperatorOptions);

jb_Array MLPool2dOptions_windowDimensions(const MLPool2dOptions *self);

void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, jb_Array * value);

jb_Array MLPool2dOptions_padding(const MLPool2dOptions *self);

void MLPool2dOptions_set_padding(MLPool2dOptions* self, jb_Array * value);

jb_Array MLPool2dOptions_strides(const MLPool2dOptions *self);

void MLPool2dOptions_set_strides(MLPool2dOptions* self, jb_Array * value);

jb_Array MLPool2dOptions_dilations(const MLPool2dOptions *self);

void MLPool2dOptions_set_dilations(MLPool2dOptions* self, jb_Array * value);

MLInputOperandLayout MLPool2dOptions_layout(const MLPool2dOptions *self);

void MLPool2dOptions_set_layout(MLPool2dOptions* self, MLInputOperandLayout * value);

MLRoundingType MLPool2dOptions_roundingType(const MLPool2dOptions *self);

void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, MLRoundingType * value);

jb_Array MLPool2dOptions_outputSizes(const MLPool2dOptions *self);

void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, jb_Array * value);

MLPool2dOptions MLPool2dOptions_new();

#ifdef __cplusplus
}
#endif
