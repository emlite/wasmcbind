#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type KeyboardEventInit */
DECLARE_EMLITE_TYPE(KeyboardEventInit, em_Val);

/** @brief Getter of the charCode property */
unsigned long KeyboardEventInit_charCode(const KeyboardEventInit *self);

/** @brief Setter of the charCode property */
void KeyboardEventInit_set_charCode(KeyboardEventInit* self, unsigned long value);

/** @brief Getter of the keyCode property */
unsigned long KeyboardEventInit_keyCode(const KeyboardEventInit *self);

/** @brief Setter of the keyCode property */
void KeyboardEventInit_set_keyCode(KeyboardEventInit* self, unsigned long value);

/** @brief Constructor of the KeyboardEventInit dictionary type */
KeyboardEventInit KeyboardEventInit_new();

#ifdef __cplusplus
}
#endif
