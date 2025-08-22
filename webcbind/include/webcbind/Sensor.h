#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Sensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Sensor)
 */
DECLARE_EMLITE_TYPE(Sensor, EventTarget);

/**
 * @brief Gets the `activated` property. 
*/
bool Sensor_activated(const Sensor *self);

/**
 * @brief Gets the `hasReading` property. 
*/
bool Sensor_hasReading(const Sensor *self);

/**
 * @brief Gets the `timestamp` property. 
*/
jb_Any Sensor_timestamp(const Sensor *self);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined Sensor_start(Sensor* self );

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined Sensor_stop(Sensor* self );

/**
 * @brief Gets the `onreading` property. 
*/
jb_Any Sensor_onreading(const Sensor *self);

/**
 * @brief Sets the `onreading` property. 
*/
void Sensor_set_onreading(Sensor* self, jb_Any * value);

/**
 * @brief Gets the `onactivate` property. 
*/
jb_Any Sensor_onactivate(const Sensor *self);

/**
 * @brief Sets the `onactivate` property. 
*/
void Sensor_set_onactivate(Sensor* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any Sensor_onerror(const Sensor *self);

/**
 * @brief Sets the `onerror` property. 
*/
void Sensor_set_onerror(Sensor* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
