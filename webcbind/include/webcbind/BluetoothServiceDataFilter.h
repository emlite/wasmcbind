#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BluetoothServiceDataFilter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothServiceDataFilter)
 */
DECLARE_EMLITE_TYPE(BluetoothServiceDataFilter, em_Val);

/**
 * @brief Creates a new `BluetoothServiceDataFilter` object. 
*/
BluetoothServiceDataFilter BluetoothServiceDataFilter_new0();

/**
 * @brief Creates a new `BluetoothServiceDataFilter` object. 
*/
BluetoothServiceDataFilter BluetoothServiceDataFilter_new1(jb_Object * init);

#ifdef __cplusplus
}
#endif
