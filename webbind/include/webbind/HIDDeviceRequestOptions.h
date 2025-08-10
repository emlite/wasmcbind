#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HIDDeviceFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HIDDeviceRequestOptions, em_Val);

jb_Array HIDDeviceRequestOptions_filters(const HIDDeviceRequestOptions *self);

void HIDDeviceRequestOptions_set_filters(HIDDeviceRequestOptions* self, jb_Array * value);

jb_Array HIDDeviceRequestOptions_exclusionFilters(const HIDDeviceRequestOptions *self);

void HIDDeviceRequestOptions_set_exclusionFilters(HIDDeviceRequestOptions* self, jb_Array * value);

HIDDeviceRequestOptions HIDDeviceRequestOptions_new();

#ifdef __cplusplus
}
#endif
