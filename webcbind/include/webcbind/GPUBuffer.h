#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUBuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer)
 */
DECLARE_EMLITE_TYPE(GPUBuffer, em_Val);

/**
 * @brief Gets the `size` property. 
*/
jb_Any GPUBuffer_size(const GPUBuffer *self);

/**
 * @brief Gets the `usage` property. 
*/
jb_Any GPUBuffer_usage(const GPUBuffer *self);

/**
 * @brief Gets the `mapState` property. 
*/
GPUBufferMapState GPUBuffer_mapState(const GPUBuffer *self);

/**
 * @brief Calls the `mapAsync` method. 
*/
jb_Promise GPUBuffer_mapAsync0(GPUBuffer* self , jb_Any * mode);

/**
 * @brief Calls the `mapAsync` method. 
*/
jb_Promise GPUBuffer_mapAsync1(GPUBuffer* self , jb_Any * mode, jb_Any * offset);

/**
 * @brief Calls the `mapAsync` method. 
*/
jb_Promise GPUBuffer_mapAsync2(GPUBuffer* self , jb_Any * mode, jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `getMappedRange` method. 
*/
jb_ArrayBuffer GPUBuffer_getMappedRange0(GPUBuffer* self );

/**
 * @brief Calls the `getMappedRange` method. 
*/
jb_ArrayBuffer GPUBuffer_getMappedRange1(GPUBuffer* self , jb_Any * offset);

/**
 * @brief Calls the `getMappedRange` method. 
*/
jb_ArrayBuffer GPUBuffer_getMappedRange2(GPUBuffer* self , jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `unmap` method. 
*/
jb_Undefined GPUBuffer_unmap(GPUBuffer* self );

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined GPUBuffer_destroy(GPUBuffer* self );

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUBuffer_label(const GPUBuffer *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUBuffer_set_label(GPUBuffer* self, jb_String * value);

#ifdef __cplusplus
}
#endif
