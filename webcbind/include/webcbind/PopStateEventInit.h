#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PopStateEventInit */
DECLARE_EMLITE_TYPE(PopStateEventInit, EventInit);

/** @brief Getter of the state property */
jb_Any PopStateEventInit_state(const PopStateEventInit *self);

/** @brief Setter of the state property */
void PopStateEventInit_set_state(PopStateEventInit* self, jb_Any * value);

/** @brief Getter of the hasUAVisualTransition property */
bool PopStateEventInit_hasUAVisualTransition(const PopStateEventInit *self);

/** @brief Setter of the hasUAVisualTransition property */
void PopStateEventInit_set_hasUAVisualTransition(PopStateEventInit* self, bool value);

/** @brief Constructor of the PopStateEventInit dictionary type */
PopStateEventInit PopStateEventInit_new();

#ifdef __cplusplus
}
#endif
