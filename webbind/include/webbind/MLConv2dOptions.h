#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLConv2dOptions, MLOperatorOptions);

jb_Array MLConv2dOptions_padding(const MLConv2dOptions *self);

void MLConv2dOptions_set_padding(MLConv2dOptions* self, jb_Array * value);

jb_Array MLConv2dOptions_strides(const MLConv2dOptions *self);

void MLConv2dOptions_set_strides(MLConv2dOptions* self, jb_Array * value);

jb_Array MLConv2dOptions_dilations(const MLConv2dOptions *self);

void MLConv2dOptions_set_dilations(MLConv2dOptions* self, jb_Array * value);

unsigned long MLConv2dOptions_groups(const MLConv2dOptions *self);

void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value);

MLInputOperandLayout MLConv2dOptions_inputLayout(const MLConv2dOptions *self);

void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, MLInputOperandLayout * value);

MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout(const MLConv2dOptions *self);

void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, MLConv2dFilterOperandLayout * value);

MLOperand MLConv2dOptions_bias(const MLConv2dOptions *self);

void MLConv2dOptions_set_bias(MLConv2dOptions* self, MLOperand * value);

MLConv2dOptions MLConv2dOptions_new();

#ifdef __cplusplus
}
#endif
