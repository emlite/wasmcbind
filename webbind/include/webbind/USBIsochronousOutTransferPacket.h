#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface USBIsochronousOutTransferPacket
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferPacket)
 */
DECLARE_EMLITE_TYPE(USBIsochronousOutTransferPacket, em_Val);

/**
 * @brief Creates a new `USBIsochronousOutTransferPacket` object. 
*/
USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new0(USBTransferStatus * status);

/**
 * @brief Creates a new `USBIsochronousOutTransferPacket` object. 
*/
USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new1(USBTransferStatus * status, unsigned long bytesWritten);

/**
 * @brief Gets the `bytesWritten` property. 
*/
unsigned long USBIsochronousOutTransferPacket_bytesWritten(const USBIsochronousOutTransferPacket *self);

/**
 * @brief Gets the `status` property. 
*/
USBTransferStatus USBIsochronousOutTransferPacket_status(const USBIsochronousOutTransferPacket *self);

#ifdef __cplusplus
}
#endif
