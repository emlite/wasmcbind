#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUAdapter GPUAdapter;
typedef struct GPURequestAdapterOptions GPURequestAdapterOptions;
typedef struct WGSLLanguageFeatures WGSLLanguageFeatures;


typedef struct {
  em_Val inner;
} GPURequestAdapterOptions;


DECLARE_EMLITE_TYPE(GPURequestAdapterOptions, em_Val);

jb_DOMString GPURequestAdapterOptions_featureLevel( const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_featureLevel(GPURequestAdapterOptions* self, const jb_DOMString* value);

GPUPowerPreference GPURequestAdapterOptions_powerPreference( const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_powerPreference(GPURequestAdapterOptions* self, const GPUPowerPreference* value);

bool GPURequestAdapterOptions_forceFallbackAdapter( const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_forceFallbackAdapter(GPURequestAdapterOptions* self, bool value);

bool GPURequestAdapterOptions_xrCompatible( const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_xrCompatible(GPURequestAdapterOptions* self, bool value);
typedef struct {
  em_Val inner;
} GPU;


DECLARE_EMLITE_TYPE(GPU, em_Val);

jb_Promise GPU_requestAdapter(GPU* self );

jb_Promise GPU_requestAdapter(GPU* self , const GPURequestAdapterOptions* options);

GPUTextureFormat GPU_getPreferredCanvasFormat(GPU* self );

WGSLLanguageFeatures GPU_wgslLanguageFeatures( const GPU *self);
