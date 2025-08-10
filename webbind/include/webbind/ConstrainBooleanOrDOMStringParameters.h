#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstrainBooleanOrDOMStringParameters, em_Val);

jb_Any ConstrainBooleanOrDOMStringParameters_exact(const ConstrainBooleanOrDOMStringParameters *self);

void ConstrainBooleanOrDOMStringParameters_set_exact(ConstrainBooleanOrDOMStringParameters* self, jb_Any * value);

jb_Any ConstrainBooleanOrDOMStringParameters_ideal(const ConstrainBooleanOrDOMStringParameters *self);

void ConstrainBooleanOrDOMStringParameters_set_ideal(ConstrainBooleanOrDOMStringParameters* self, jb_Any * value);

ConstrainBooleanOrDOMStringParameters ConstrainBooleanOrDOMStringParameters_new();

#ifdef __cplusplus
}
#endif
