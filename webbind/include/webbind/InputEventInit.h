#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(InputEventInit, UIEventInit);

jb_String InputEventInit_data(const InputEventInit *self);

void InputEventInit_set_data(InputEventInit* self, jb_String * value);

bool InputEventInit_isComposing(const InputEventInit *self);

void InputEventInit_set_isComposing(InputEventInit* self, bool value);

jb_String InputEventInit_inputType(const InputEventInit *self);

void InputEventInit_set_inputType(InputEventInit* self, jb_String * value);

InputEventInit InputEventInit_new();

#ifdef __cplusplus
}
#endif
