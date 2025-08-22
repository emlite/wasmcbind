#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBInterface USBInterface;
typedef struct USBEndpoint USBEndpoint;


/**
 * @brief Interface USBAlternateInterface
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface)
 */
DECLARE_EMLITE_TYPE(USBAlternateInterface, em_Val);

/**
 * @brief Creates a new `USBAlternateInterface` object. 
*/
USBAlternateInterface USBAlternateInterface_new(USBInterface * deviceInterface, unsigned char alternateSetting);

/**
 * @brief Gets the `alternateSetting` property. 
*/
unsigned char USBAlternateInterface_alternateSetting(const USBAlternateInterface *self);

/**
 * @brief Gets the `interfaceClass` property. 
*/
unsigned char USBAlternateInterface_interfaceClass(const USBAlternateInterface *self);

/**
 * @brief Gets the `interfaceSubclass` property. 
*/
unsigned char USBAlternateInterface_interfaceSubclass(const USBAlternateInterface *self);

/**
 * @brief Gets the `interfaceProtocol` property. 
*/
unsigned char USBAlternateInterface_interfaceProtocol(const USBAlternateInterface *self);

/**
 * @brief Gets the `interfaceName` property. 
*/
jb_String USBAlternateInterface_interfaceName(const USBAlternateInterface *self);

/**
 * @brief Gets the `endpoints` property. 
*/
jb_Array USBAlternateInterface_endpoints(const USBAlternateInterface *self);

#ifdef __cplusplus
}
#endif
