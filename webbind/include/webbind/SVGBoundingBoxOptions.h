#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SVGBoundingBoxOptions, em_Val);

bool SVGBoundingBoxOptions_fill(const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_fill(SVGBoundingBoxOptions* self, bool value);

bool SVGBoundingBoxOptions_stroke(const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_stroke(SVGBoundingBoxOptions* self, bool value);

bool SVGBoundingBoxOptions_markers(const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_markers(SVGBoundingBoxOptions* self, bool value);

bool SVGBoundingBoxOptions_clipped(const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_clipped(SVGBoundingBoxOptions* self, bool value);

SVGBoundingBoxOptions SVGBoundingBoxOptions_new();

#ifdef __cplusplus
}
#endif
