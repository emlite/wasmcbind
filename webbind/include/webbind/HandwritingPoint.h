#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingPoint, em_Val);

double HandwritingPoint_x(const HandwritingPoint *self);

void HandwritingPoint_set_x(HandwritingPoint* self, double value);

double HandwritingPoint_y(const HandwritingPoint *self);

void HandwritingPoint_set_y(HandwritingPoint* self, double value);

jb_Any HandwritingPoint_t(const HandwritingPoint *self);

void HandwritingPoint_set_t(HandwritingPoint* self, jb_Any * value);

HandwritingPoint HandwritingPoint_new();

#ifdef __cplusplus
}
#endif
