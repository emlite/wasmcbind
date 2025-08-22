#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HIDDeviceFilter */
DECLARE_EMLITE_TYPE(HIDDeviceFilter, em_Val);

/** @brief Getter of the vendorId property */
unsigned long HIDDeviceFilter_vendorId(const HIDDeviceFilter *self);

/** @brief Setter of the vendorId property */
void HIDDeviceFilter_set_vendorId(HIDDeviceFilter* self, unsigned long value);

/** @brief Getter of the productId property */
unsigned short HIDDeviceFilter_productId(const HIDDeviceFilter *self);

/** @brief Setter of the productId property */
void HIDDeviceFilter_set_productId(HIDDeviceFilter* self, unsigned short value);

/** @brief Getter of the usagePage property */
unsigned short HIDDeviceFilter_usagePage(const HIDDeviceFilter *self);

/** @brief Setter of the usagePage property */
void HIDDeviceFilter_set_usagePage(HIDDeviceFilter* self, unsigned short value);

/** @brief Getter of the usage property */
unsigned short HIDDeviceFilter_usage(const HIDDeviceFilter *self);

/** @brief Setter of the usage property */
void HIDDeviceFilter_set_usage(HIDDeviceFilter* self, unsigned short value);

/** @brief Constructor of the HIDDeviceFilter dictionary type */
HIDDeviceFilter HIDDeviceFilter_new();

#ifdef __cplusplus
}
#endif
