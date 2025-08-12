#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUTextureView GPUTextureView;
typedef struct GPUTextureViewDescriptor GPUTextureViewDescriptor;


/**
 * @brief Interface GPUTexture
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture)
 */
DECLARE_EMLITE_TYPE(GPUTexture, em_Val);

/**
 * @brief Calls the `createView` method. 
*/
GPUTextureView GPUTexture_createView0(GPUTexture* self );

/**
 * @brief Calls the `createView` method. 
*/
GPUTextureView GPUTexture_createView1(GPUTexture* self , GPUTextureViewDescriptor * descriptor);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined GPUTexture_destroy(GPUTexture* self );

/**
 * @brief Gets the `width` property. 
*/
jb_Any GPUTexture_width(const GPUTexture *self);

/**
 * @brief Gets the `height` property. 
*/
jb_Any GPUTexture_height(const GPUTexture *self);

/**
 * @brief Gets the `depthOrArrayLayers` property. 
*/
jb_Any GPUTexture_depthOrArrayLayers(const GPUTexture *self);

/**
 * @brief Gets the `mipLevelCount` property. 
*/
jb_Any GPUTexture_mipLevelCount(const GPUTexture *self);

/**
 * @brief Gets the `sampleCount` property. 
*/
jb_Any GPUTexture_sampleCount(const GPUTexture *self);

/**
 * @brief Gets the `dimension` property. 
*/
GPUTextureDimension GPUTexture_dimension(const GPUTexture *self);

/**
 * @brief Gets the `format` property. 
*/
GPUTextureFormat GPUTexture_format(const GPUTexture *self);

/**
 * @brief Gets the `usage` property. 
*/
jb_Any GPUTexture_usage(const GPUTexture *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUTexture_label(const GPUTexture *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUTexture_set_label(GPUTexture* self, jb_String * value);

#ifdef __cplusplus
}
#endif
