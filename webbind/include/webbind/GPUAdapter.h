#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUSupportedFeatures GPUSupportedFeatures;
typedef struct GPUSupportedLimits GPUSupportedLimits;
typedef struct GPUAdapterInfo GPUAdapterInfo;
typedef struct GPUDevice GPUDevice;
typedef struct GPUDeviceDescriptor GPUDeviceDescriptor;

DECLARE_EMLITE_TYPE(GPUAdapter, em_Val);

GPUSupportedFeatures GPUAdapter_features(const GPUAdapter *self);

GPUSupportedLimits GPUAdapter_limits(const GPUAdapter *self);

GPUAdapterInfo GPUAdapter_info(const GPUAdapter *self);

jb_Promise GPUAdapter_requestDevice0(GPUAdapter* self );

jb_Promise GPUAdapter_requestDevice1(GPUAdapter* self , GPUDeviceDescriptor * descriptor);

#ifdef __cplusplus
}
#endif
