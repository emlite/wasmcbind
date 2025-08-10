#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(USBDeviceFilter, em_Val);

unsigned short USBDeviceFilter_vendorId(const USBDeviceFilter *self);

void USBDeviceFilter_set_vendorId(USBDeviceFilter* self, unsigned short value);

unsigned short USBDeviceFilter_productId(const USBDeviceFilter *self);

void USBDeviceFilter_set_productId(USBDeviceFilter* self, unsigned short value);

unsigned char USBDeviceFilter_classCode(const USBDeviceFilter *self);

void USBDeviceFilter_set_classCode(USBDeviceFilter* self, unsigned char value);

unsigned char USBDeviceFilter_subclassCode(const USBDeviceFilter *self);

void USBDeviceFilter_set_subclassCode(USBDeviceFilter* self, unsigned char value);

unsigned char USBDeviceFilter_protocolCode(const USBDeviceFilter *self);

void USBDeviceFilter_set_protocolCode(USBDeviceFilter* self, unsigned char value);

jb_String USBDeviceFilter_serialNumber(const USBDeviceFilter *self);

void USBDeviceFilter_set_serialNumber(USBDeviceFilter* self, jb_String * value);

USBDeviceFilter USBDeviceFilter_new();

#ifdef __cplusplus
}
#endif
