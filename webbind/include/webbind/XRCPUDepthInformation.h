#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRDepthInformation.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRCPUDepthInformation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRCPUDepthInformation)
 */
DECLARE_EMLITE_TYPE(XRCPUDepthInformation, XRDepthInformation);

/**
 * @brief Gets the `data` property. 
*/
jb_ArrayBuffer XRCPUDepthInformation_data(const XRCPUDepthInformation *self);

/**
 * @brief Calls the `getDepthInMeters` method. 
*/
float XRCPUDepthInformation_getDepthInMeters(XRCPUDepthInformation* self , float x, float y);

#ifdef __cplusplus
}
#endif
