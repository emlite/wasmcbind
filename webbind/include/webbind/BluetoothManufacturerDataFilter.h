#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BluetoothManufacturerDataFilter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothManufacturerDataFilter)
 */
DECLARE_EMLITE_TYPE(BluetoothManufacturerDataFilter, em_Val);

/**
 * @brief Creates a new `BluetoothManufacturerDataFilter` object. 
*/
BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new0();

/**
 * @brief Creates a new `BluetoothManufacturerDataFilter` object. 
*/
BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new1(jb_Object * init);

#ifdef __cplusplus
}
#endif
