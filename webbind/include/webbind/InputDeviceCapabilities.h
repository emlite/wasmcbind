#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct InputDeviceCapabilitiesInit InputDeviceCapabilitiesInit;


/**
 * @brief Interface InputDeviceCapabilities
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceCapabilities)
 */
DECLARE_EMLITE_TYPE(InputDeviceCapabilities, em_Val);

/**
 * @brief Creates a new `InputDeviceCapabilities` object. 
*/
InputDeviceCapabilities InputDeviceCapabilities_new0();

/**
 * @brief Creates a new `InputDeviceCapabilities` object. 
*/
InputDeviceCapabilities InputDeviceCapabilities_new1(InputDeviceCapabilitiesInit * deviceInitDict);

/**
 * @brief Gets the `firesTouchEvents` property. 
*/
bool InputDeviceCapabilities_firesTouchEvents(const InputDeviceCapabilities *self);

/**
 * @brief Gets the `pointerMovementScrolls` property. 
*/
bool InputDeviceCapabilities_pointerMovementScrolls(const InputDeviceCapabilities *self);

#ifdef __cplusplus
}
#endif
