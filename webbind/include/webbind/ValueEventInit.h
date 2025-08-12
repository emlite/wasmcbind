#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ValueEventInit */
DECLARE_EMLITE_TYPE(ValueEventInit, EventInit);

/** @brief Getter of the value property */
jb_Any ValueEventInit_value(const ValueEventInit *self);

/** @brief Setter of the value property */
void ValueEventInit_set_value(ValueEventInit* self, jb_Any * value);

/** @brief Constructor of the ValueEventInit dictionary type */
ValueEventInit ValueEventInit_new();

#ifdef __cplusplus
}
#endif
