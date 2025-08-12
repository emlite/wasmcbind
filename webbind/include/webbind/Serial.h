#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SerialPort SerialPort;
typedef struct SerialPortRequestOptions SerialPortRequestOptions;


/**
 * @brief Interface Serial
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Serial)
 */
DECLARE_EMLITE_TYPE(Serial, EventTarget);

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any Serial_onconnect(const Serial *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void Serial_set_onconnect(Serial* self, jb_Any * value);

/**
 * @brief Gets the `ondisconnect` property. 
*/
jb_Any Serial_ondisconnect(const Serial *self);

/**
 * @brief Sets the `ondisconnect` property. 
*/
void Serial_set_ondisconnect(Serial* self, jb_Any * value);

/**
 * @brief Calls the `getPorts` method. 
*/
jb_Promise Serial_getPorts(Serial* self );

/**
 * @brief Calls the `requestPort` method. 
*/
jb_Promise Serial_requestPort0(Serial* self );

/**
 * @brief Calls the `requestPort` method. 
*/
jb_Promise Serial_requestPort1(Serial* self , SerialPortRequestOptions * options);

#ifdef __cplusplus
}
#endif
