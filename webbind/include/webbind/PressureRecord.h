#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PressureRecord
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord)
 */
DECLARE_EMLITE_TYPE(PressureRecord, em_Val);

/**
 * @brief Gets the `source` property. 
*/
PressureSource PressureRecord_source(const PressureRecord *self);

/**
 * @brief Gets the `state` property. 
*/
PressureState PressureRecord_state(const PressureRecord *self);

/**
 * @brief Gets the `time` property. 
*/
jb_Any PressureRecord_time(const PressureRecord *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PressureRecord_toJSON(PressureRecord* self );

#ifdef __cplusplus
}
#endif
