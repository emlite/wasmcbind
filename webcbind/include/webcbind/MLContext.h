#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLGraph MLGraph;
typedef struct MLTensor MLTensor;
typedef struct MLTensorDescriptor MLTensorDescriptor;
typedef struct MLOperandDescriptor MLOperandDescriptor;
typedef struct MLOpSupportLimits MLOpSupportLimits;
typedef struct MLContextLostInfo MLContextLostInfo;


/**
 * @brief Interface MLContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MLContext)
 */
DECLARE_EMLITE_TYPE(MLContext, em_Val);

/**
 * @brief Calls the `dispatch` method. 
*/
jb_Undefined MLContext_dispatch(MLContext* self , MLGraph * graph, jb_Any * inputs, jb_Any * outputs);

/**
 * @brief Calls the `createTensor` method. 
*/
jb_Promise MLContext_createTensor(MLContext* self , MLTensorDescriptor * descriptor);

/**
 * @brief Calls the `createConstantTensor` method. 
*/
jb_Promise MLContext_createConstantTensor(MLContext* self , MLOperandDescriptor * descriptor, jb_Any * inputData);

/**
 * @brief Calls the `readTensor` method. 
*/
jb_Promise MLContext_readTensor(MLContext* self , MLTensor * tensor, jb_Any * outputData);

/**
 * @brief Calls the `writeTensor` method. 
*/
jb_Undefined MLContext_writeTensor(MLContext* self , MLTensor * tensor, jb_Any * inputData);

/**
 * @brief Calls the `opSupportLimits` method. 
*/
MLOpSupportLimits MLContext_opSupportLimits(MLContext* self );

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined MLContext_destroy(MLContext* self );

/**
 * @brief Gets the `lost` property. 
*/
jb_Promise MLContext_lost(const MLContext *self);

#ifdef __cplusplus
}
#endif
