#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PointerLockOptions */
DECLARE_EMLITE_TYPE(PointerLockOptions, em_Val);

/** @brief Getter of the unadjustedMovement property */
bool PointerLockOptions_unadjustedMovement(const PointerLockOptions *self);

/** @brief Setter of the unadjustedMovement property */
void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value);

/** @brief Constructor of the PointerLockOptions dictionary type */
PointerLockOptions PointerLockOptions_new();

#ifdef __cplusplus
}
#endif
