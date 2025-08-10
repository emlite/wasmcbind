#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HIDDeviceFilter, em_Val);

unsigned long HIDDeviceFilter_vendorId(const HIDDeviceFilter *self);

void HIDDeviceFilter_set_vendorId(HIDDeviceFilter* self, unsigned long value);

unsigned short HIDDeviceFilter_productId(const HIDDeviceFilter *self);

void HIDDeviceFilter_set_productId(HIDDeviceFilter* self, unsigned short value);

unsigned short HIDDeviceFilter_usagePage(const HIDDeviceFilter *self);

void HIDDeviceFilter_set_usagePage(HIDDeviceFilter* self, unsigned short value);

unsigned short HIDDeviceFilter_usage(const HIDDeviceFilter *self);

void HIDDeviceFilter_set_usage(HIDDeviceFilter* self, unsigned short value);

HIDDeviceFilter HIDDeviceFilter_new();

#ifdef __cplusplus
}
#endif
