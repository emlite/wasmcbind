#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(USBBlocklistEntry, em_Val);

unsigned short USBBlocklistEntry_idVendor(const USBBlocklistEntry *self);

void USBBlocklistEntry_set_idVendor(USBBlocklistEntry* self, unsigned short value);

unsigned short USBBlocklistEntry_idProduct(const USBBlocklistEntry *self);

void USBBlocklistEntry_set_idProduct(USBBlocklistEntry* self, unsigned short value);

unsigned short USBBlocklistEntry_bcdDevice(const USBBlocklistEntry *self);

void USBBlocklistEntry_set_bcdDevice(USBBlocklistEntry* self, unsigned short value);

USBBlocklistEntry USBBlocklistEntry_new();

#ifdef __cplusplus
}
#endif
