#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PointerLockOptions, em_Val);

bool PointerLockOptions_unadjustedMovement(const PointerLockOptions *self);

void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value);

PointerLockOptions PointerLockOptions_new();

#ifdef __cplusplus
}
#endif
