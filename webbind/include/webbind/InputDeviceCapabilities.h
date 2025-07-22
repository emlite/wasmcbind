#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} InputDeviceCapabilities;


DECLARE_EMLITE_TYPE(InputDeviceCapabilities, em_Val);

InputDeviceCapabilities InputDeviceCapabilities_new();

InputDeviceCapabilities InputDeviceCapabilities_new(const jb_Any* deviceInitDict);

bool InputDeviceCapabilities_firesTouchEvents( const InputDeviceCapabilities *self);

bool InputDeviceCapabilities_pointerMovementScrolls( const InputDeviceCapabilities *self);
