#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLResample2dOptions, MLOperatorOptions);

MLInterpolationMode MLResample2dOptions_mode(const MLResample2dOptions *self);

void MLResample2dOptions_set_mode(MLResample2dOptions* self, MLInterpolationMode * value);

jb_Array MLResample2dOptions_scales(const MLResample2dOptions *self);

void MLResample2dOptions_set_scales(MLResample2dOptions* self, jb_Array * value);

jb_Array MLResample2dOptions_sizes(const MLResample2dOptions *self);

void MLResample2dOptions_set_sizes(MLResample2dOptions* self, jb_Array * value);

jb_Array MLResample2dOptions_axes(const MLResample2dOptions *self);

void MLResample2dOptions_set_axes(MLResample2dOptions* self, jb_Array * value);

MLResample2dOptions MLResample2dOptions_new();

#ifdef __cplusplus
}
#endif
