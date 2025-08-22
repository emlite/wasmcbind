#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket;


/**
 * @brief Interface USBIsochronousOutTransferResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousOutTransferResult)
 */
DECLARE_EMLITE_TYPE(USBIsochronousOutTransferResult, em_Val);

/**
 * @brief Creates a new `USBIsochronousOutTransferResult` object. 
*/
USBIsochronousOutTransferResult USBIsochronousOutTransferResult_new(jb_Array * packets);

/**
 * @brief Gets the `packets` property. 
*/
jb_Array USBIsochronousOutTransferResult_packets(const USBIsochronousOutTransferResult *self);

#ifdef __cplusplus
}
#endif
