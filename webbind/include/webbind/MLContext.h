#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLGraph MLGraph;
typedef struct MLTensor MLTensor;
typedef struct MLTensorDescriptor MLTensorDescriptor;
typedef struct MLOperandDescriptor MLOperandDescriptor;
typedef struct MLOpSupportLimits MLOpSupportLimits;
typedef struct MLContextLostInfo MLContextLostInfo;

DECLARE_EMLITE_TYPE(MLContext, em_Val);

jb_Undefined MLContext_dispatch(MLContext* self , MLGraph * graph, jb_Any * inputs, jb_Any * outputs);

jb_Promise MLContext_createTensor(MLContext* self , MLTensorDescriptor * descriptor);

jb_Promise MLContext_createConstantTensor(MLContext* self , MLOperandDescriptor * descriptor, jb_Any * inputData);

jb_Promise MLContext_readTensor(MLContext* self , MLTensor * tensor, jb_Any * outputData);

jb_Undefined MLContext_writeTensor(MLContext* self , MLTensor * tensor, jb_Any * inputData);

MLOpSupportLimits MLContext_opSupportLimits(MLContext* self );

jb_Undefined MLContext_destroy(MLContext* self );

jb_Promise MLContext_lost(const MLContext *self);

#ifdef __cplusplus
}
#endif
