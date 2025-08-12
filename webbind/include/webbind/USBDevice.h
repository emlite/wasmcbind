#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBConfiguration USBConfiguration;
typedef struct USBInTransferResult USBInTransferResult;
typedef struct USBControlTransferParameters USBControlTransferParameters;
typedef struct USBOutTransferResult USBOutTransferResult;
typedef struct USBIsochronousInTransferResult USBIsochronousInTransferResult;
typedef struct USBIsochronousOutTransferResult USBIsochronousOutTransferResult;


/**
 * @brief Interface USBDevice
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice)
 */
DECLARE_EMLITE_TYPE(USBDevice, em_Val);

/**
 * @brief Gets the `usbVersionMajor` property. 
*/
unsigned char USBDevice_usbVersionMajor(const USBDevice *self);

/**
 * @brief Gets the `usbVersionMinor` property. 
*/
unsigned char USBDevice_usbVersionMinor(const USBDevice *self);

/**
 * @brief Gets the `usbVersionSubminor` property. 
*/
unsigned char USBDevice_usbVersionSubminor(const USBDevice *self);

/**
 * @brief Gets the `deviceClass` property. 
*/
unsigned char USBDevice_deviceClass(const USBDevice *self);

/**
 * @brief Gets the `deviceSubclass` property. 
*/
unsigned char USBDevice_deviceSubclass(const USBDevice *self);

/**
 * @brief Gets the `deviceProtocol` property. 
*/
unsigned char USBDevice_deviceProtocol(const USBDevice *self);

/**
 * @brief Gets the `vendorId` property. 
*/
unsigned short USBDevice_vendorId(const USBDevice *self);

/**
 * @brief Gets the `productId` property. 
*/
unsigned short USBDevice_productId(const USBDevice *self);

/**
 * @brief Gets the `deviceVersionMajor` property. 
*/
unsigned char USBDevice_deviceVersionMajor(const USBDevice *self);

/**
 * @brief Gets the `deviceVersionMinor` property. 
*/
unsigned char USBDevice_deviceVersionMinor(const USBDevice *self);

/**
 * @brief Gets the `deviceVersionSubminor` property. 
*/
unsigned char USBDevice_deviceVersionSubminor(const USBDevice *self);

/**
 * @brief Gets the `manufacturerName` property. 
*/
jb_String USBDevice_manufacturerName(const USBDevice *self);

/**
 * @brief Gets the `productName` property. 
*/
jb_String USBDevice_productName(const USBDevice *self);

/**
 * @brief Gets the `serialNumber` property. 
*/
jb_String USBDevice_serialNumber(const USBDevice *self);

/**
 * @brief Gets the `configuration` property. 
*/
USBConfiguration USBDevice_configuration(const USBDevice *self);

/**
 * @brief Gets the `configurations` property. 
*/
jb_Array USBDevice_configurations(const USBDevice *self);

/**
 * @brief Gets the `opened` property. 
*/
bool USBDevice_opened(const USBDevice *self);

/**
 * @brief Calls the `open` method. 
*/
jb_Promise USBDevice_open(USBDevice* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Promise USBDevice_close(USBDevice* self );

/**
 * @brief Calls the `forget` method. 
*/
jb_Promise USBDevice_forget(USBDevice* self );

/**
 * @brief Calls the `selectConfiguration` method. 
*/
jb_Promise USBDevice_selectConfiguration(USBDevice* self , unsigned char configurationValue);

/**
 * @brief Calls the `claimInterface` method. 
*/
jb_Promise USBDevice_claimInterface(USBDevice* self , unsigned char interfaceNumber);

/**
 * @brief Calls the `releaseInterface` method. 
*/
jb_Promise USBDevice_releaseInterface(USBDevice* self , unsigned char interfaceNumber);

/**
 * @brief Calls the `selectAlternateInterface` method. 
*/
jb_Promise USBDevice_selectAlternateInterface(USBDevice* self , unsigned char interfaceNumber, unsigned char alternateSetting);

/**
 * @brief Calls the `controlTransferIn` method. 
*/
jb_Promise USBDevice_controlTransferIn(USBDevice* self , USBControlTransferParameters * setup, unsigned short length);

/**
 * @brief Calls the `controlTransferOut` method. 
*/
jb_Promise USBDevice_controlTransferOut0(USBDevice* self , USBControlTransferParameters * setup);

/**
 * @brief Calls the `controlTransferOut` method. 
*/
jb_Promise USBDevice_controlTransferOut1(USBDevice* self , USBControlTransferParameters * setup, jb_Any * data);

/**
 * @brief Calls the `clearHalt` method. 
*/
jb_Promise USBDevice_clearHalt(USBDevice* self , USBDirection * direction, unsigned char endpointNumber);

/**
 * @brief Calls the `transferIn` method. 
*/
jb_Promise USBDevice_transferIn(USBDevice* self , unsigned char endpointNumber, unsigned long length);

/**
 * @brief Calls the `transferOut` method. 
*/
jb_Promise USBDevice_transferOut(USBDevice* self , unsigned char endpointNumber, jb_Any * data);

/**
 * @brief Calls the `isochronousTransferIn` method. 
*/
jb_Promise USBDevice_isochronousTransferIn(USBDevice* self , unsigned char endpointNumber, jb_Array * packetLengths);

/**
 * @brief Calls the `isochronousTransferOut` method. 
*/
jb_Promise USBDevice_isochronousTransferOut(USBDevice* self , unsigned char endpointNumber, jb_Any * data, jb_Array * packetLengths);

/**
 * @brief Calls the `reset` method. 
*/
jb_Promise USBDevice_reset(USBDevice* self );

#ifdef __cplusplus
}
#endif
