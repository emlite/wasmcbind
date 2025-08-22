#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUStencilFaceState.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUDepthStencilState */
DECLARE_EMLITE_TYPE(GPUDepthStencilState, em_Val);

/** @brief Getter of the format property */
GPUTextureFormat GPUDepthStencilState_format(const GPUDepthStencilState *self);

/** @brief Setter of the format property */
void GPUDepthStencilState_set_format(GPUDepthStencilState* self, GPUTextureFormat * value);

/** @brief Getter of the depthWriteEnabled property */
bool GPUDepthStencilState_depthWriteEnabled(const GPUDepthStencilState *self);

/** @brief Setter of the depthWriteEnabled property */
void GPUDepthStencilState_set_depthWriteEnabled(GPUDepthStencilState* self, bool value);

/** @brief Getter of the depthCompare property */
GPUCompareFunction GPUDepthStencilState_depthCompare(const GPUDepthStencilState *self);

/** @brief Setter of the depthCompare property */
void GPUDepthStencilState_set_depthCompare(GPUDepthStencilState* self, GPUCompareFunction * value);

/** @brief Getter of the stencilFront property */
GPUStencilFaceState GPUDepthStencilState_stencilFront(const GPUDepthStencilState *self);

/** @brief Setter of the stencilFront property */
void GPUDepthStencilState_set_stencilFront(GPUDepthStencilState* self, GPUStencilFaceState * value);

/** @brief Getter of the stencilBack property */
GPUStencilFaceState GPUDepthStencilState_stencilBack(const GPUDepthStencilState *self);

/** @brief Setter of the stencilBack property */
void GPUDepthStencilState_set_stencilBack(GPUDepthStencilState* self, GPUStencilFaceState * value);

/** @brief Getter of the stencilReadMask property */
jb_Any GPUDepthStencilState_stencilReadMask(const GPUDepthStencilState *self);

/** @brief Setter of the stencilReadMask property */
void GPUDepthStencilState_set_stencilReadMask(GPUDepthStencilState* self, jb_Any * value);

/** @brief Getter of the stencilWriteMask property */
jb_Any GPUDepthStencilState_stencilWriteMask(const GPUDepthStencilState *self);

/** @brief Setter of the stencilWriteMask property */
void GPUDepthStencilState_set_stencilWriteMask(GPUDepthStencilState* self, jb_Any * value);

/** @brief Getter of the depthBias property */
jb_Any GPUDepthStencilState_depthBias(const GPUDepthStencilState *self);

/** @brief Setter of the depthBias property */
void GPUDepthStencilState_set_depthBias(GPUDepthStencilState* self, jb_Any * value);

/** @brief Getter of the depthBiasSlopeScale property */
float GPUDepthStencilState_depthBiasSlopeScale(const GPUDepthStencilState *self);

/** @brief Setter of the depthBiasSlopeScale property */
void GPUDepthStencilState_set_depthBiasSlopeScale(GPUDepthStencilState* self, float value);

/** @brief Getter of the depthBiasClamp property */
float GPUDepthStencilState_depthBiasClamp(const GPUDepthStencilState *self);

/** @brief Setter of the depthBiasClamp property */
void GPUDepthStencilState_set_depthBiasClamp(GPUDepthStencilState* self, float value);

/** @brief Constructor of the GPUDepthStencilState dictionary type */
GPUDepthStencilState GPUDepthStencilState_new();

#ifdef __cplusplus
}
#endif
