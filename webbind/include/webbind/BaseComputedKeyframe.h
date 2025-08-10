#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BaseComputedKeyframe, em_Val);

double BaseComputedKeyframe_offset(const BaseComputedKeyframe *self);

void BaseComputedKeyframe_set_offset(BaseComputedKeyframe* self, double value);

double BaseComputedKeyframe_computedOffset(const BaseComputedKeyframe *self);

void BaseComputedKeyframe_set_computedOffset(BaseComputedKeyframe* self, double value);

jb_String BaseComputedKeyframe_easing(const BaseComputedKeyframe *self);

void BaseComputedKeyframe_set_easing(BaseComputedKeyframe* self, jb_String * value);

CompositeOperationOrAuto BaseComputedKeyframe_composite(const BaseComputedKeyframe *self);

void BaseComputedKeyframe_set_composite(BaseComputedKeyframe* self, CompositeOperationOrAuto * value);

BaseComputedKeyframe BaseComputedKeyframe_new();

#ifdef __cplusplus
}
#endif
