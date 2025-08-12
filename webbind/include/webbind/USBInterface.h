#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBConfiguration USBConfiguration;
typedef struct USBAlternateInterface USBAlternateInterface;


/**
 * @brief Interface USBInterface
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface)
 */
DECLARE_EMLITE_TYPE(USBInterface, em_Val);

/**
 * @brief Creates a new `USBInterface` object. 
*/
USBInterface USBInterface_new(USBConfiguration * configuration, unsigned char interfaceNumber);

/**
 * @brief Gets the `interfaceNumber` property. 
*/
unsigned char USBInterface_interfaceNumber(const USBInterface *self);

/**
 * @brief Gets the `alternate` property. 
*/
USBAlternateInterface USBInterface_alternate(const USBInterface *self);

/**
 * @brief Gets the `alternates` property. 
*/
jb_Array USBInterface_alternates(const USBInterface *self);

/**
 * @brief Gets the `claimed` property. 
*/
bool USBInterface_claimed(const USBInterface *self);

#ifdef __cplusplus
}
#endif
