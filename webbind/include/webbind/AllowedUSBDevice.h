#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AllowedUSBDevice, em_Val);

unsigned char AllowedUSBDevice_vendorId(const AllowedUSBDevice *self);

void AllowedUSBDevice_set_vendorId(AllowedUSBDevice* self, unsigned char value);

unsigned char AllowedUSBDevice_productId(const AllowedUSBDevice *self);

void AllowedUSBDevice_set_productId(AllowedUSBDevice* self, unsigned char value);

jb_String AllowedUSBDevice_serialNumber(const AllowedUSBDevice *self);

void AllowedUSBDevice_set_serialNumber(AllowedUSBDevice* self, jb_String * value);

AllowedUSBDevice AllowedUSBDevice_new();

#ifdef __cplusplus
}
#endif
