#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDataFilterInit BluetoothDataFilterInit;


/**
 * @brief Interface BluetoothDataFilter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter)
 */
DECLARE_EMLITE_TYPE(BluetoothDataFilter, em_Val);

/**
 * @brief Creates a new `BluetoothDataFilter` object. 
*/
BluetoothDataFilter BluetoothDataFilter_new0();

/**
 * @brief Creates a new `BluetoothDataFilter` object. 
*/
BluetoothDataFilter BluetoothDataFilter_new1(BluetoothDataFilterInit * init);

/**
 * @brief Gets the `dataPrefix` property. 
*/
jb_ArrayBuffer BluetoothDataFilter_dataPrefix(const BluetoothDataFilter *self);

/**
 * @brief Gets the `mask` property. 
*/
jb_ArrayBuffer BluetoothDataFilter_mask(const BluetoothDataFilter *self);

#ifdef __cplusplus
}
#endif
