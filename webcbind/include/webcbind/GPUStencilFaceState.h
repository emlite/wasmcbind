#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUStencilFaceState */
DECLARE_EMLITE_TYPE(GPUStencilFaceState, em_Val);

/** @brief Getter of the compare property */
GPUCompareFunction GPUStencilFaceState_compare(const GPUStencilFaceState *self);

/** @brief Setter of the compare property */
void GPUStencilFaceState_set_compare(GPUStencilFaceState* self, GPUCompareFunction * value);

/** @brief Getter of the failOp property */
GPUStencilOperation GPUStencilFaceState_failOp(const GPUStencilFaceState *self);

/** @brief Setter of the failOp property */
void GPUStencilFaceState_set_failOp(GPUStencilFaceState* self, GPUStencilOperation * value);

/** @brief Getter of the depthFailOp property */
GPUStencilOperation GPUStencilFaceState_depthFailOp(const GPUStencilFaceState *self);

/** @brief Setter of the depthFailOp property */
void GPUStencilFaceState_set_depthFailOp(GPUStencilFaceState* self, GPUStencilOperation * value);

/** @brief Getter of the passOp property */
GPUStencilOperation GPUStencilFaceState_passOp(const GPUStencilFaceState *self);

/** @brief Setter of the passOp property */
void GPUStencilFaceState_set_passOp(GPUStencilFaceState* self, GPUStencilOperation * value);

/** @brief Constructor of the GPUStencilFaceState dictionary type */
GPUStencilFaceState GPUStencilFaceState_new();

#ifdef __cplusplus
}
#endif
