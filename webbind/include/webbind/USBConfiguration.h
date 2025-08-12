#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBDevice USBDevice;
typedef struct USBInterface USBInterface;


/**
 * @brief Interface USBConfiguration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBConfiguration)
 */
DECLARE_EMLITE_TYPE(USBConfiguration, em_Val);

/**
 * @brief Creates a new `USBConfiguration` object. 
*/
USBConfiguration USBConfiguration_new(USBDevice * device, unsigned char configurationValue);

/**
 * @brief Gets the `configurationValue` property. 
*/
unsigned char USBConfiguration_configurationValue(const USBConfiguration *self);

/**
 * @brief Gets the `configurationName` property. 
*/
jb_String USBConfiguration_configurationName(const USBConfiguration *self);

/**
 * @brief Gets the `interfaces` property. 
*/
jb_Array USBConfiguration_interfaces(const USBConfiguration *self);

#ifdef __cplusplus
}
#endif
