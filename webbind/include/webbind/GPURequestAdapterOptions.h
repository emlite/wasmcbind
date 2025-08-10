#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPURequestAdapterOptions, em_Val);

jb_String GPURequestAdapterOptions_featureLevel(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_featureLevel(GPURequestAdapterOptions* self, jb_String * value);

GPUPowerPreference GPURequestAdapterOptions_powerPreference(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_powerPreference(GPURequestAdapterOptions* self, GPUPowerPreference * value);

bool GPURequestAdapterOptions_forceFallbackAdapter(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_forceFallbackAdapter(GPURequestAdapterOptions* self, bool value);

bool GPURequestAdapterOptions_xrCompatible(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_xrCompatible(GPURequestAdapterOptions* self, bool value);

GPURequestAdapterOptions GPURequestAdapterOptions_new();

#ifdef __cplusplus
}
#endif
