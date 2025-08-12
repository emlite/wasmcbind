#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type InputDeviceCapabilitiesInit */
DECLARE_EMLITE_TYPE(InputDeviceCapabilitiesInit, em_Val);

/** @brief Getter of the firesTouchEvents property */
bool InputDeviceCapabilitiesInit_firesTouchEvents(const InputDeviceCapabilitiesInit *self);

/** @brief Setter of the firesTouchEvents property */
void InputDeviceCapabilitiesInit_set_firesTouchEvents(InputDeviceCapabilitiesInit* self, bool value);

/** @brief Getter of the pointerMovementScrolls property */
bool InputDeviceCapabilitiesInit_pointerMovementScrolls(const InputDeviceCapabilitiesInit *self);

/** @brief Setter of the pointerMovementScrolls property */
void InputDeviceCapabilitiesInit_set_pointerMovementScrolls(InputDeviceCapabilitiesInit* self, bool value);

/** @brief Constructor of the InputDeviceCapabilitiesInit dictionary type */
InputDeviceCapabilitiesInit InputDeviceCapabilitiesInit_new();

#ifdef __cplusplus
}
#endif
