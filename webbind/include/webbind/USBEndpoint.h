#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBAlternateInterface USBAlternateInterface;


/**
 * @brief Interface USBEndpoint
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpoint)
 */
DECLARE_EMLITE_TYPE(USBEndpoint, em_Val);

/**
 * @brief Creates a new `USBEndpoint` object. 
*/
USBEndpoint USBEndpoint_new(USBAlternateInterface * alternate, unsigned char endpointNumber, USBDirection * direction);

/**
 * @brief Gets the `endpointNumber` property. 
*/
unsigned char USBEndpoint_endpointNumber(const USBEndpoint *self);

/**
 * @brief Gets the `direction` property. 
*/
USBDirection USBEndpoint_direction(const USBEndpoint *self);

/**
 * @brief Gets the `type` property. 
*/
USBEndpointType USBEndpoint_type(const USBEndpoint *self);

/**
 * @brief Gets the `packetSize` property. 
*/
unsigned long USBEndpoint_packetSize(const USBEndpoint *self);

#ifdef __cplusplus
}
#endif
