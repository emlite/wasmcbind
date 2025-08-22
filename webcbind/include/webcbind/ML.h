#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLContext MLContext;
typedef struct GPUDevice GPUDevice;


/**
 * @brief Interface ML
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ML)
 */
DECLARE_EMLITE_TYPE(ML, em_Val);

/**
 * @brief Calls the `createContext` method. 
*/
jb_Promise ML_createContext(ML* self , GPUDevice * gpuDevice);

#ifdef __cplusplus
}
#endif
