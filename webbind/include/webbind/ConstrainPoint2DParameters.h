#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstrainPoint2DParameters, em_Val);

jb_Array ConstrainPoint2DParameters_exact(const ConstrainPoint2DParameters *self);

void ConstrainPoint2DParameters_set_exact(ConstrainPoint2DParameters* self, jb_Array * value);

jb_Array ConstrainPoint2DParameters_ideal(const ConstrainPoint2DParameters *self);

void ConstrainPoint2DParameters_set_ideal(ConstrainPoint2DParameters* self, jb_Array * value);

ConstrainPoint2DParameters ConstrainPoint2DParameters_new();

#ifdef __cplusplus
}
#endif
