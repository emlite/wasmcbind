#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPURequestAdapterOptions */
DECLARE_EMLITE_TYPE(GPURequestAdapterOptions, em_Val);

/** @brief Getter of the featureLevel property */
jb_String GPURequestAdapterOptions_featureLevel(const GPURequestAdapterOptions *self);

/** @brief Setter of the featureLevel property */
void GPURequestAdapterOptions_set_featureLevel(GPURequestAdapterOptions* self, jb_String * value);

/** @brief Getter of the powerPreference property */
GPUPowerPreference GPURequestAdapterOptions_powerPreference(const GPURequestAdapterOptions *self);

/** @brief Setter of the powerPreference property */
void GPURequestAdapterOptions_set_powerPreference(GPURequestAdapterOptions* self, GPUPowerPreference * value);

/** @brief Getter of the forceFallbackAdapter property */
bool GPURequestAdapterOptions_forceFallbackAdapter(const GPURequestAdapterOptions *self);

/** @brief Setter of the forceFallbackAdapter property */
void GPURequestAdapterOptions_set_forceFallbackAdapter(GPURequestAdapterOptions* self, bool value);

/** @brief Getter of the xrCompatible property */
bool GPURequestAdapterOptions_xrCompatible(const GPURequestAdapterOptions *self);

/** @brief Setter of the xrCompatible property */
void GPURequestAdapterOptions_set_xrCompatible(GPURequestAdapterOptions* self, bool value);

/** @brief Constructor of the GPURequestAdapterOptions dictionary type */
GPURequestAdapterOptions GPURequestAdapterOptions_new();

#ifdef __cplusplus
}
#endif
