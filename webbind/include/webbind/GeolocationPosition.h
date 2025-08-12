#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GeolocationCoordinates GeolocationCoordinates;


/**
 * @brief Interface GeolocationPosition
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPosition)
 */
DECLARE_EMLITE_TYPE(GeolocationPosition, em_Val);

/**
 * @brief Gets the `coords` property. 
*/
GeolocationCoordinates GeolocationPosition_coords(const GeolocationPosition *self);

/**
 * @brief Gets the `timestamp` property. 
*/
jb_Any GeolocationPosition_timestamp(const GeolocationPosition *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object GeolocationPosition_toJSON(GeolocationPosition* self );

#ifdef __cplusplus
}
#endif
