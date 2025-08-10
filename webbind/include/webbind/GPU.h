#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUAdapter GPUAdapter;
typedef struct GPURequestAdapterOptions GPURequestAdapterOptions;
typedef struct WGSLLanguageFeatures WGSLLanguageFeatures;

DECLARE_EMLITE_TYPE(GPU, em_Val);

jb_Promise GPU_requestAdapter0(GPU* self );

jb_Promise GPU_requestAdapter1(GPU* self , GPURequestAdapterOptions * options);

GPUTextureFormat GPU_getPreferredCanvasFormat(GPU* self );

WGSLLanguageFeatures GPU_wgslLanguageFeatures(const GPU *self);

#ifdef __cplusplus
}
#endif
