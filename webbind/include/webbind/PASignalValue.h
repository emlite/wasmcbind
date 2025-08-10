#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PASignalValue, em_Val);

jb_String PASignalValue_baseValue(const PASignalValue *self);

void PASignalValue_set_baseValue(PASignalValue* self, jb_String * value);

double PASignalValue_scale(const PASignalValue *self);

void PASignalValue_set_scale(PASignalValue* self, double value);

jb_Any PASignalValue_offset(const PASignalValue *self);

void PASignalValue_set_offset(PASignalValue* self, jb_Any * value);

PASignalValue PASignalValue_new();

#ifdef __cplusplus
}
#endif
