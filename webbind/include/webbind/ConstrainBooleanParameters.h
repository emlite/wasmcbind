#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstrainBooleanParameters, em_Val);

bool ConstrainBooleanParameters_exact(const ConstrainBooleanParameters *self);

void ConstrainBooleanParameters_set_exact(ConstrainBooleanParameters* self, bool value);

bool ConstrainBooleanParameters_ideal(const ConstrainBooleanParameters *self);

void ConstrainBooleanParameters_set_ideal(ConstrainBooleanParameters* self, bool value);

ConstrainBooleanParameters ConstrainBooleanParameters_new();

#ifdef __cplusplus
}
#endif
