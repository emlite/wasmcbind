#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLConvTranspose2dOptions, MLOperatorOptions);

jb_Array MLConvTranspose2dOptions_padding(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_strides(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_dilations(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_outputPadding(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, jb_Array * value);

jb_Array MLConvTranspose2dOptions_outputSizes(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, jb_Array * value);

unsigned long MLConvTranspose2dOptions_groups(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value);

MLInputOperandLayout MLConvTranspose2dOptions_inputLayout(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, MLInputOperandLayout * value);

MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, MLConvTranspose2dFilterOperandLayout * value);

MLOperand MLConvTranspose2dOptions_bias(const MLConvTranspose2dOptions *self);

void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, MLOperand * value);

MLConvTranspose2dOptions MLConvTranspose2dOptions_new();

#ifdef __cplusplus
}
#endif
