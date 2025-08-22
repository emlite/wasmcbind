#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ToggleEventInit */
DECLARE_EMLITE_TYPE(ToggleEventInit, EventInit);

/** @brief Getter of the oldState property */
jb_String ToggleEventInit_oldState(const ToggleEventInit *self);

/** @brief Setter of the oldState property */
void ToggleEventInit_set_oldState(ToggleEventInit* self, jb_String * value);

/** @brief Getter of the newState property */
jb_String ToggleEventInit_newState(const ToggleEventInit *self);

/** @brief Setter of the newState property */
void ToggleEventInit_set_newState(ToggleEventInit* self, jb_String * value);

/** @brief Constructor of the ToggleEventInit dictionary type */
ToggleEventInit ToggleEventInit_new();

#ifdef __cplusplus
}
#endif
