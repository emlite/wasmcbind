#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type InputEventInit */
DECLARE_EMLITE_TYPE(InputEventInit, UIEventInit);

/** @brief Getter of the data property */
jb_String InputEventInit_data(const InputEventInit *self);

/** @brief Setter of the data property */
void InputEventInit_set_data(InputEventInit* self, jb_String * value);

/** @brief Getter of the isComposing property */
bool InputEventInit_isComposing(const InputEventInit *self);

/** @brief Setter of the isComposing property */
void InputEventInit_set_isComposing(InputEventInit* self, bool value);

/** @brief Getter of the inputType property */
jb_String InputEventInit_inputType(const InputEventInit *self);

/** @brief Setter of the inputType property */
void InputEventInit_set_inputType(InputEventInit* self, jb_String * value);

/** @brief Constructor of the InputEventInit dictionary type */
InputEventInit InputEventInit_new();

#ifdef __cplusplus
}
#endif
