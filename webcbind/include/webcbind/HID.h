#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDDevice HIDDevice;
typedef struct HIDDeviceRequestOptions HIDDeviceRequestOptions;


/**
 * @brief Interface HID
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HID)
 */
DECLARE_EMLITE_TYPE(HID, EventTarget);

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any HID_onconnect(const HID *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void HID_set_onconnect(HID* self, jb_Any * value);

/**
 * @brief Gets the `ondisconnect` property. 
*/
jb_Any HID_ondisconnect(const HID *self);

/**
 * @brief Sets the `ondisconnect` property. 
*/
void HID_set_ondisconnect(HID* self, jb_Any * value);

/**
 * @brief Calls the `getDevices` method. 
*/
jb_Promise HID_getDevices(HID* self );

/**
 * @brief Calls the `requestDevice` method. 
*/
jb_Promise HID_requestDevice(HID* self , HIDDeviceRequestOptions * options);

#ifdef __cplusplus
}
#endif
