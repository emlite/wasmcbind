#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "TextTrackCue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DataCue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DataCue)
 */
DECLARE_EMLITE_TYPE(DataCue, TextTrackCue);

/**
 * @brief Creates a new `DataCue` object. 
*/
DataCue DataCue_new0(double startTime, double endTime, jb_Any * value);

/**
 * @brief Creates a new `DataCue` object. 
*/
DataCue DataCue_new1(double startTime, double endTime, jb_Any * value, jb_String * type);

/**
 * @brief Gets the `value` property. 
*/
jb_Any DataCue_value(const DataCue *self);

/**
 * @brief Sets the `value` property. 
*/
void DataCue_set_value(DataCue* self, jb_Any * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String DataCue_type(const DataCue *self);

#ifdef __cplusplus
}
#endif
