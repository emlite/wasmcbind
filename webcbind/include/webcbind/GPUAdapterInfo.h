#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUAdapterInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapterInfo)
 */
DECLARE_EMLITE_TYPE(GPUAdapterInfo, em_Val);

/**
 * @brief Gets the `vendor` property. 
*/
jb_String GPUAdapterInfo_vendor(const GPUAdapterInfo *self);

/**
 * @brief Gets the `architecture` property. 
*/
jb_String GPUAdapterInfo_architecture(const GPUAdapterInfo *self);

/**
 * @brief Gets the `device` property. 
*/
jb_String GPUAdapterInfo_device(const GPUAdapterInfo *self);

/**
 * @brief Gets the `description` property. 
*/
jb_String GPUAdapterInfo_description(const GPUAdapterInfo *self);

/**
 * @brief Gets the `subgroupMinSize` property. 
*/
unsigned long GPUAdapterInfo_subgroupMinSize(const GPUAdapterInfo *self);

/**
 * @brief Gets the `subgroupMaxSize` property. 
*/
unsigned long GPUAdapterInfo_subgroupMaxSize(const GPUAdapterInfo *self);

/**
 * @brief Gets the `isFallbackAdapter` property. 
*/
bool GPUAdapterInfo_isFallbackAdapter(const GPUAdapterInfo *self);

#ifdef __cplusplus
}
#endif
