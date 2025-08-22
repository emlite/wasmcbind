#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;
typedef struct SerialPortInfo SerialPortInfo;
typedef struct SerialOptions SerialOptions;
typedef struct SerialOutputSignals SerialOutputSignals;
typedef struct SerialInputSignals SerialInputSignals;


/**
 * @brief Interface SerialPort
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort)
 */
DECLARE_EMLITE_TYPE(SerialPort, EventTarget);

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any SerialPort_onconnect(const SerialPort *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void SerialPort_set_onconnect(SerialPort* self, jb_Any * value);

/**
 * @brief Gets the `ondisconnect` property. 
*/
jb_Any SerialPort_ondisconnect(const SerialPort *self);

/**
 * @brief Sets the `ondisconnect` property. 
*/
void SerialPort_set_ondisconnect(SerialPort* self, jb_Any * value);

/**
 * @brief Gets the `connected` property. 
*/
bool SerialPort_connected(const SerialPort *self);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream SerialPort_readable(const SerialPort *self);

/**
 * @brief Gets the `writable` property. 
*/
WritableStream SerialPort_writable(const SerialPort *self);

/**
 * @brief Calls the `getInfo` method. 
*/
SerialPortInfo SerialPort_getInfo(SerialPort* self );

/**
 * @brief Calls the `open` method. 
*/
jb_Promise SerialPort_open(SerialPort* self , SerialOptions * options);

/**
 * @brief Calls the `setSignals` method. 
*/
jb_Promise SerialPort_setSignals0(SerialPort* self );

/**
 * @brief Calls the `setSignals` method. 
*/
jb_Promise SerialPort_setSignals1(SerialPort* self , SerialOutputSignals * signals);

/**
 * @brief Calls the `getSignals` method. 
*/
jb_Promise SerialPort_getSignals(SerialPort* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Promise SerialPort_close(SerialPort* self );

/**
 * @brief Calls the `forget` method. 
*/
jb_Promise SerialPort_forget(SerialPort* self );

#ifdef __cplusplus
}
#endif
