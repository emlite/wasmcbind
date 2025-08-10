#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUStencilFaceState, em_Val);

GPUCompareFunction GPUStencilFaceState_compare(const GPUStencilFaceState *self);

void GPUStencilFaceState_set_compare(GPUStencilFaceState* self, GPUCompareFunction * value);

GPUStencilOperation GPUStencilFaceState_failOp(const GPUStencilFaceState *self);

void GPUStencilFaceState_set_failOp(GPUStencilFaceState* self, GPUStencilOperation * value);

GPUStencilOperation GPUStencilFaceState_depthFailOp(const GPUStencilFaceState *self);

void GPUStencilFaceState_set_depthFailOp(GPUStencilFaceState* self, GPUStencilOperation * value);

GPUStencilOperation GPUStencilFaceState_passOp(const GPUStencilFaceState *self);

void GPUStencilFaceState_set_passOp(GPUStencilFaceState* self, GPUStencilOperation * value);

GPUStencilFaceState GPUStencilFaceState_new();

#ifdef __cplusplus
}
#endif
