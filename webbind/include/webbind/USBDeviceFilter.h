#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type USBDeviceFilter */
DECLARE_EMLITE_TYPE(USBDeviceFilter, em_Val);

/** @brief Getter of the vendorId property */
unsigned short USBDeviceFilter_vendorId(const USBDeviceFilter *self);

/** @brief Setter of the vendorId property */
void USBDeviceFilter_set_vendorId(USBDeviceFilter* self, unsigned short value);

/** @brief Getter of the productId property */
unsigned short USBDeviceFilter_productId(const USBDeviceFilter *self);

/** @brief Setter of the productId property */
void USBDeviceFilter_set_productId(USBDeviceFilter* self, unsigned short value);

/** @brief Getter of the classCode property */
unsigned char USBDeviceFilter_classCode(const USBDeviceFilter *self);

/** @brief Setter of the classCode property */
void USBDeviceFilter_set_classCode(USBDeviceFilter* self, unsigned char value);

/** @brief Getter of the subclassCode property */
unsigned char USBDeviceFilter_subclassCode(const USBDeviceFilter *self);

/** @brief Setter of the subclassCode property */
void USBDeviceFilter_set_subclassCode(USBDeviceFilter* self, unsigned char value);

/** @brief Getter of the protocolCode property */
unsigned char USBDeviceFilter_protocolCode(const USBDeviceFilter *self);

/** @brief Setter of the protocolCode property */
void USBDeviceFilter_set_protocolCode(USBDeviceFilter* self, unsigned char value);

/** @brief Getter of the serialNumber property */
jb_String USBDeviceFilter_serialNumber(const USBDeviceFilter *self);

/** @brief Setter of the serialNumber property */
void USBDeviceFilter_set_serialNumber(USBDeviceFilter* self, jb_String * value);

/** @brief Constructor of the USBDeviceFilter dictionary type */
USBDeviceFilter USBDeviceFilter_new();

#ifdef __cplusplus
}
#endif
