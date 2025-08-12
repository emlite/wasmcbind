#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AllowedUSBDevice */
DECLARE_EMLITE_TYPE(AllowedUSBDevice, em_Val);

/** @brief Getter of the vendorId property */
unsigned char AllowedUSBDevice_vendorId(const AllowedUSBDevice *self);

/** @brief Setter of the vendorId property */
void AllowedUSBDevice_set_vendorId(AllowedUSBDevice* self, unsigned char value);

/** @brief Getter of the productId property */
unsigned char AllowedUSBDevice_productId(const AllowedUSBDevice *self);

/** @brief Setter of the productId property */
void AllowedUSBDevice_set_productId(AllowedUSBDevice* self, unsigned char value);

/** @brief Getter of the serialNumber property */
jb_String AllowedUSBDevice_serialNumber(const AllowedUSBDevice *self);

/** @brief Setter of the serialNumber property */
void AllowedUSBDevice_set_serialNumber(AllowedUSBDevice* self, jb_String * value);

/** @brief Constructor of the AllowedUSBDevice dictionary type */
AllowedUSBDevice AllowedUSBDevice_new();

#ifdef __cplusplus
}
#endif
