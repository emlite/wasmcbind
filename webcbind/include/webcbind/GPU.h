#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUAdapter GPUAdapter;
typedef struct GPURequestAdapterOptions GPURequestAdapterOptions;
typedef struct WGSLLanguageFeatures WGSLLanguageFeatures;


/**
 * @brief Interface GPU
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPU)
 */
DECLARE_EMLITE_TYPE(GPU, em_Val);

/**
 * @brief Calls the `requestAdapter` method. 
*/
jb_Promise GPU_requestAdapter0(GPU* self );

/**
 * @brief Calls the `requestAdapter` method. 
*/
jb_Promise GPU_requestAdapter1(GPU* self , GPURequestAdapterOptions * options);

/**
 * @brief Calls the `getPreferredCanvasFormat` method. 
*/
GPUTextureFormat GPU_getPreferredCanvasFormat(GPU* self );

/**
 * @brief Gets the `wgslLanguageFeatures` property. 
*/
WGSLLanguageFeatures GPU_wgslLanguageFeatures(const GPU *self);

#ifdef __cplusplus
}
#endif
