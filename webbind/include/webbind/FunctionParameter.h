#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FunctionParameter, em_Val);

jb_String FunctionParameter_name(const FunctionParameter *self);

void FunctionParameter_set_name(FunctionParameter* self, jb_String * value);

jb_String FunctionParameter_type(const FunctionParameter *self);

void FunctionParameter_set_type(FunctionParameter* self, jb_String * value);

jb_String FunctionParameter_defaultValue(const FunctionParameter *self);

void FunctionParameter_set_defaultValue(FunctionParameter* self, jb_String * value);

FunctionParameter FunctionParameter_new();

#ifdef __cplusplus
}
#endif
