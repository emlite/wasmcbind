#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUSupportedFeatures GPUSupportedFeatures;
typedef struct GPUSupportedLimits GPUSupportedLimits;
typedef struct GPUAdapterInfo GPUAdapterInfo;
typedef struct GPUDevice GPUDevice;
typedef struct GPUDeviceDescriptor GPUDeviceDescriptor;


/**
 * @brief Interface GPUAdapter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter)
 */
DECLARE_EMLITE_TYPE(GPUAdapter, em_Val);

/**
 * @brief Gets the `features` property. 
*/
GPUSupportedFeatures GPUAdapter_features(const GPUAdapter *self);

/**
 * @brief Gets the `limits` property. 
*/
GPUSupportedLimits GPUAdapter_limits(const GPUAdapter *self);

/**
 * @brief Gets the `info` property. 
*/
GPUAdapterInfo GPUAdapter_info(const GPUAdapter *self);

/**
 * @brief Calls the `requestDevice` method. 
*/
jb_Promise GPUAdapter_requestDevice0(GPUAdapter* self );

/**
 * @brief Calls the `requestDevice` method. 
*/
jb_Promise GPUAdapter_requestDevice1(GPUAdapter* self , GPUDeviceDescriptor * descriptor);

#ifdef __cplusplus
}
#endif
