#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUStencilFaceState.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUDepthStencilState, em_Val);

GPUTextureFormat GPUDepthStencilState_format(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_format(GPUDepthStencilState* self, GPUTextureFormat * value);

bool GPUDepthStencilState_depthWriteEnabled(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_depthWriteEnabled(GPUDepthStencilState* self, bool value);

GPUCompareFunction GPUDepthStencilState_depthCompare(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_depthCompare(GPUDepthStencilState* self, GPUCompareFunction * value);

GPUStencilFaceState GPUDepthStencilState_stencilFront(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_stencilFront(GPUDepthStencilState* self, GPUStencilFaceState * value);

GPUStencilFaceState GPUDepthStencilState_stencilBack(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_stencilBack(GPUDepthStencilState* self, GPUStencilFaceState * value);

jb_Any GPUDepthStencilState_stencilReadMask(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_stencilReadMask(GPUDepthStencilState* self, jb_Any * value);

jb_Any GPUDepthStencilState_stencilWriteMask(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_stencilWriteMask(GPUDepthStencilState* self, jb_Any * value);

jb_Any GPUDepthStencilState_depthBias(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_depthBias(GPUDepthStencilState* self, jb_Any * value);

float GPUDepthStencilState_depthBiasSlopeScale(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_depthBiasSlopeScale(GPUDepthStencilState* self, float value);

float GPUDepthStencilState_depthBiasClamp(const GPUDepthStencilState *self);

void GPUDepthStencilState_set_depthBiasClamp(GPUDepthStencilState* self, float value);

GPUDepthStencilState GPUDepthStencilState_new();

#ifdef __cplusplus
}
#endif
