#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUDeviceLostInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceLostInfo)
 */
DECLARE_EMLITE_TYPE(GPUDeviceLostInfo, em_Val);

/**
 * @brief Gets the `reason` property. 
*/
GPUDeviceLostReason GPUDeviceLostInfo_reason(const GPUDeviceLostInfo *self);

/**
 * @brief Gets the `message` property. 
*/
jb_String GPUDeviceLostInfo_message(const GPUDeviceLostInfo *self);

#ifdef __cplusplus
}
#endif
