#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBIsochronousInTransferPacket USBIsochronousInTransferPacket;


/**
 * @brief Interface USBIsochronousInTransferResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBIsochronousInTransferResult)
 */
DECLARE_EMLITE_TYPE(USBIsochronousInTransferResult, em_Val);

/**
 * @brief Creates a new `USBIsochronousInTransferResult` object. 
*/
USBIsochronousInTransferResult USBIsochronousInTransferResult_new0(jb_Array * packets);

/**
 * @brief Creates a new `USBIsochronousInTransferResult` object. 
*/
USBIsochronousInTransferResult USBIsochronousInTransferResult_new1(jb_Array * packets, jb_DataView * data);

/**
 * @brief Gets the `data` property. 
*/
jb_DataView USBIsochronousInTransferResult_data(const USBIsochronousInTransferResult *self);

/**
 * @brief Gets the `packets` property. 
*/
jb_Array USBIsochronousInTransferResult_packets(const USBIsochronousInTransferResult *self);

#ifdef __cplusplus
}
#endif
