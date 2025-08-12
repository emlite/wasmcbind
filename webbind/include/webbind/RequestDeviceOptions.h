#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RequestDeviceOptions */
DECLARE_EMLITE_TYPE(RequestDeviceOptions, em_Val);

/** @brief Getter of the filters property */
jb_Array RequestDeviceOptions_filters(const RequestDeviceOptions *self);

/** @brief Setter of the filters property */
void RequestDeviceOptions_set_filters(RequestDeviceOptions* self, jb_Array * value);

/** @brief Getter of the exclusionFilters property */
jb_Array RequestDeviceOptions_exclusionFilters(const RequestDeviceOptions *self);

/** @brief Setter of the exclusionFilters property */
void RequestDeviceOptions_set_exclusionFilters(RequestDeviceOptions* self, jb_Array * value);

/** @brief Getter of the optionalServices property */
jb_Array RequestDeviceOptions_optionalServices(const RequestDeviceOptions *self);

/** @brief Setter of the optionalServices property */
void RequestDeviceOptions_set_optionalServices(RequestDeviceOptions* self, jb_Array * value);

/** @brief Getter of the optionalManufacturerData property */
jb_Array RequestDeviceOptions_optionalManufacturerData(const RequestDeviceOptions *self);

/** @brief Setter of the optionalManufacturerData property */
void RequestDeviceOptions_set_optionalManufacturerData(RequestDeviceOptions* self, jb_Array * value);

/** @brief Getter of the acceptAllDevices property */
bool RequestDeviceOptions_acceptAllDevices(const RequestDeviceOptions *self);

/** @brief Setter of the acceptAllDevices property */
void RequestDeviceOptions_set_acceptAllDevices(RequestDeviceOptions* self, bool value);

/** @brief Constructor of the RequestDeviceOptions dictionary type */
RequestDeviceOptions RequestDeviceOptions_new();

#ifdef __cplusplus
}
#endif
