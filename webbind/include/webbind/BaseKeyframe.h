#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BaseKeyframe, em_Val);

double BaseKeyframe_offset(const BaseKeyframe *self);

void BaseKeyframe_set_offset(BaseKeyframe* self, double value);

jb_String BaseKeyframe_easing(const BaseKeyframe *self);

void BaseKeyframe_set_easing(BaseKeyframe* self, jb_String * value);

CompositeOperationOrAuto BaseKeyframe_composite(const BaseKeyframe *self);

void BaseKeyframe_set_composite(BaseKeyframe* self, CompositeOperationOrAuto * value);

BaseKeyframe BaseKeyframe_new();

#ifdef __cplusplus
}
#endif
