#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(InkTrailStyle, em_Val);

jb_String InkTrailStyle_color(const InkTrailStyle *self);

void InkTrailStyle_set_color(InkTrailStyle* self, jb_String * value);

double InkTrailStyle_diameter(const InkTrailStyle *self);

void InkTrailStyle_set_diameter(InkTrailStyle* self, double value);

InkTrailStyle InkTrailStyle_new();

#ifdef __cplusplus
}
#endif
