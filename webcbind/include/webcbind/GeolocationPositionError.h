#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GeolocationPositionError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPositionError)
 */
DECLARE_EMLITE_TYPE(GeolocationPositionError, em_Val);

/**
 * @brief Gets the `code` property. 
*/
unsigned short GeolocationPositionError_code(const GeolocationPositionError *self);

/**
 * @brief Gets the `message` property. 
*/
jb_String GeolocationPositionError_message(const GeolocationPositionError *self);

#ifdef __cplusplus
}
#endif
