#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type USBBlocklistEntry */
DECLARE_EMLITE_TYPE(USBBlocklistEntry, em_Val);

/** @brief Getter of the idVendor property */
unsigned short USBBlocklistEntry_idVendor(const USBBlocklistEntry *self);

/** @brief Setter of the idVendor property */
void USBBlocklistEntry_set_idVendor(USBBlocklistEntry* self, unsigned short value);

/** @brief Getter of the idProduct property */
unsigned short USBBlocklistEntry_idProduct(const USBBlocklistEntry *self);

/** @brief Setter of the idProduct property */
void USBBlocklistEntry_set_idProduct(USBBlocklistEntry* self, unsigned short value);

/** @brief Getter of the bcdDevice property */
unsigned short USBBlocklistEntry_bcdDevice(const USBBlocklistEntry *self);

/** @brief Setter of the bcdDevice property */
void USBBlocklistEntry_set_bcdDevice(USBBlocklistEntry* self, unsigned short value);

/** @brief Constructor of the USBBlocklistEntry dictionary type */
USBBlocklistEntry USBBlocklistEntry_new();

#ifdef __cplusplus
}
#endif
