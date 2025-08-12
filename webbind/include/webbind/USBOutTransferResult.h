#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface USBOutTransferResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBOutTransferResult)
 */
DECLARE_EMLITE_TYPE(USBOutTransferResult, em_Val);

/**
 * @brief Creates a new `USBOutTransferResult` object. 
*/
USBOutTransferResult USBOutTransferResult_new0(USBTransferStatus * status);

/**
 * @brief Creates a new `USBOutTransferResult` object. 
*/
USBOutTransferResult USBOutTransferResult_new1(USBTransferStatus * status, unsigned long bytesWritten);

/**
 * @brief Gets the `bytesWritten` property. 
*/
unsigned long USBOutTransferResult_bytesWritten(const USBOutTransferResult *self);

/**
 * @brief Gets the `status` property. 
*/
USBTransferStatus USBOutTransferResult_status(const USBOutTransferResult *self);

#ifdef __cplusplus
}
#endif
