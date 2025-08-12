#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBDevice USBDevice;
typedef struct USBDeviceRequestOptions USBDeviceRequestOptions;


/**
 * @brief Interface USB
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USB)
 */
DECLARE_EMLITE_TYPE(USB, EventTarget);

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any USB_onconnect(const USB *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void USB_set_onconnect(USB* self, jb_Any * value);

/**
 * @brief Gets the `ondisconnect` property. 
*/
jb_Any USB_ondisconnect(const USB *self);

/**
 * @brief Sets the `ondisconnect` property. 
*/
void USB_set_ondisconnect(USB* self, jb_Any * value);

/**
 * @brief Calls the `getDevices` method. 
*/
jb_Promise USB_getDevices(USB* self );

/**
 * @brief Calls the `requestDevice` method. 
*/
jb_Promise USB_requestDevice(USB* self , USBDeviceRequestOptions * options);

#ifdef __cplusplus
}
#endif
