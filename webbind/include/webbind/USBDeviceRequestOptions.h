#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "USBDeviceFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(USBDeviceRequestOptions, em_Val);

jb_Array USBDeviceRequestOptions_filters(const USBDeviceRequestOptions *self);

void USBDeviceRequestOptions_set_filters(USBDeviceRequestOptions* self, jb_Array * value);

jb_Array USBDeviceRequestOptions_exclusionFilters(const USBDeviceRequestOptions *self);

void USBDeviceRequestOptions_set_exclusionFilters(USBDeviceRequestOptions* self, jb_Array * value);

USBDeviceRequestOptions USBDeviceRequestOptions_new();

#ifdef __cplusplus
}
#endif
