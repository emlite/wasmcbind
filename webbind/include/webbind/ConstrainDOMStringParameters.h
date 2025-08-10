#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstrainDOMStringParameters, em_Val);

jb_Any ConstrainDOMStringParameters_exact(const ConstrainDOMStringParameters *self);

void ConstrainDOMStringParameters_set_exact(ConstrainDOMStringParameters* self, jb_Any * value);

jb_Any ConstrainDOMStringParameters_ideal(const ConstrainDOMStringParameters *self);

void ConstrainDOMStringParameters_set_ideal(ConstrainDOMStringParameters* self, jb_Any * value);

ConstrainDOMStringParameters ConstrainDOMStringParameters_new();

#ifdef __cplusplus
}
#endif
