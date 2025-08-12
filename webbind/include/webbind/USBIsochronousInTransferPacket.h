#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface USBIsochronousInTransferPacket
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferPacket)
 */
DECLARE_EMLITE_TYPE(USBIsochronousInTransferPacket, em_Val);

/**
 * @brief Creates a new `USBIsochronousInTransferPacket` object. 
*/
USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new0(USBTransferStatus * status);

/**
 * @brief Creates a new `USBIsochronousInTransferPacket` object. 
*/
USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new1(USBTransferStatus * status, jb_DataView * data);

/**
 * @brief Gets the `data` property. 
*/
jb_DataView USBIsochronousInTransferPacket_data(const USBIsochronousInTransferPacket *self);

/**
 * @brief Gets the `status` property. 
*/
USBTransferStatus USBIsochronousInTransferPacket_status(const USBIsochronousInTransferPacket *self);

#ifdef __cplusplus
}
#endif
