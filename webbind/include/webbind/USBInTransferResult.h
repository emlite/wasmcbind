#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface USBInTransferResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBInTransferResult)
 */
DECLARE_EMLITE_TYPE(USBInTransferResult, em_Val);

/**
 * @brief Creates a new `USBInTransferResult` object. 
*/
USBInTransferResult USBInTransferResult_new0(USBTransferStatus * status);

/**
 * @brief Creates a new `USBInTransferResult` object. 
*/
USBInTransferResult USBInTransferResult_new1(USBTransferStatus * status, jb_DataView * data);

/**
 * @brief Gets the `data` property. 
*/
jb_DataView USBInTransferResult_data(const USBInTransferResult *self);

/**
 * @brief Gets the `status` property. 
*/
USBTransferStatus USBInTransferResult_status(const USBInTransferResult *self);

#ifdef __cplusplus
}
#endif
