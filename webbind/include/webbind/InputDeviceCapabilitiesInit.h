#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(InputDeviceCapabilitiesInit, em_Val);

bool InputDeviceCapabilitiesInit_firesTouchEvents(const InputDeviceCapabilitiesInit *self);

void InputDeviceCapabilitiesInit_set_firesTouchEvents(InputDeviceCapabilitiesInit* self, bool value);

bool InputDeviceCapabilitiesInit_pointerMovementScrolls(const InputDeviceCapabilitiesInit *self);

void InputDeviceCapabilitiesInit_set_pointerMovementScrolls(InputDeviceCapabilitiesInit* self, bool value);

InputDeviceCapabilitiesInit InputDeviceCapabilitiesInit_new();

#ifdef __cplusplus
}
#endif
