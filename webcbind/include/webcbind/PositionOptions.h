#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PositionOptions */
DECLARE_EMLITE_TYPE(PositionOptions, em_Val);

/** @brief Getter of the enableHighAccuracy property */
bool PositionOptions_enableHighAccuracy(const PositionOptions *self);

/** @brief Setter of the enableHighAccuracy property */
void PositionOptions_set_enableHighAccuracy(PositionOptions* self, bool value);

/** @brief Getter of the timeout property */
unsigned long PositionOptions_timeout(const PositionOptions *self);

/** @brief Setter of the timeout property */
void PositionOptions_set_timeout(PositionOptions* self, unsigned long value);

/** @brief Getter of the maximumAge property */
unsigned long PositionOptions_maximumAge(const PositionOptions *self);

/** @brief Setter of the maximumAge property */
void PositionOptions_set_maximumAge(PositionOptions* self, unsigned long value);

/** @brief Constructor of the PositionOptions dictionary type */
PositionOptions PositionOptions_new();

#ifdef __cplusplus
}
#endif
