#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUCompilationMessage GPUCompilationMessage;


/**
 * @brief Interface GPUCompilationInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationInfo)
 */
DECLARE_EMLITE_TYPE(GPUCompilationInfo, em_Val);

/**
 * @brief Gets the `messages` property. 
*/
jb_Array GPUCompilationInfo_messages(const GPUCompilationInfo *self);

#ifdef __cplusplus
}
#endif
