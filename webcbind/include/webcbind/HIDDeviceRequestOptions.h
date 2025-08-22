#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HIDDeviceFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HIDDeviceRequestOptions */
DECLARE_EMLITE_TYPE(HIDDeviceRequestOptions, em_Val);

/** @brief Getter of the filters property */
jb_Array HIDDeviceRequestOptions_filters(const HIDDeviceRequestOptions *self);

/** @brief Setter of the filters property */
void HIDDeviceRequestOptions_set_filters(HIDDeviceRequestOptions* self, jb_Array * value);

/** @brief Getter of the exclusionFilters property */
jb_Array HIDDeviceRequestOptions_exclusionFilters(const HIDDeviceRequestOptions *self);

/** @brief Setter of the exclusionFilters property */
void HIDDeviceRequestOptions_set_exclusionFilters(HIDDeviceRequestOptions* self, jb_Array * value);

/** @brief Constructor of the HIDDeviceRequestOptions dictionary type */
HIDDeviceRequestOptions HIDDeviceRequestOptions_new();

#ifdef __cplusplus
}
#endif
