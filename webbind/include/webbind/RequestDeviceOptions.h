#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RequestDeviceOptions, em_Val);

jb_Array RequestDeviceOptions_filters(const RequestDeviceOptions *self);

void RequestDeviceOptions_set_filters(RequestDeviceOptions* self, jb_Array * value);

jb_Array RequestDeviceOptions_exclusionFilters(const RequestDeviceOptions *self);

void RequestDeviceOptions_set_exclusionFilters(RequestDeviceOptions* self, jb_Array * value);

jb_Array RequestDeviceOptions_optionalServices(const RequestDeviceOptions *self);

void RequestDeviceOptions_set_optionalServices(RequestDeviceOptions* self, jb_Array * value);

jb_Array RequestDeviceOptions_optionalManufacturerData(const RequestDeviceOptions *self);

void RequestDeviceOptions_set_optionalManufacturerData(RequestDeviceOptions* self, jb_Array * value);

bool RequestDeviceOptions_acceptAllDevices(const RequestDeviceOptions *self);

void RequestDeviceOptions_set_acceptAllDevices(RequestDeviceOptions* self, bool value);

RequestDeviceOptions RequestDeviceOptions_new();

#ifdef __cplusplus
}
#endif
