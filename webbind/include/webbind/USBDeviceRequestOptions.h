#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "USBDeviceFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type USBDeviceRequestOptions */
DECLARE_EMLITE_TYPE(USBDeviceRequestOptions, em_Val);

/** @brief Getter of the filters property */
jb_Array USBDeviceRequestOptions_filters(const USBDeviceRequestOptions *self);

/** @brief Setter of the filters property */
void USBDeviceRequestOptions_set_filters(USBDeviceRequestOptions* self, jb_Array * value);

/** @brief Getter of the exclusionFilters property */
jb_Array USBDeviceRequestOptions_exclusionFilters(const USBDeviceRequestOptions *self);

/** @brief Setter of the exclusionFilters property */
void USBDeviceRequestOptions_set_exclusionFilters(USBDeviceRequestOptions* self, jb_Array * value);

/** @brief Constructor of the USBDeviceRequestOptions dictionary type */
USBDeviceRequestOptions USBDeviceRequestOptions_new();

#ifdef __cplusplus
}
#endif
