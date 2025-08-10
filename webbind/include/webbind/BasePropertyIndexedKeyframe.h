#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BasePropertyIndexedKeyframe, em_Val);

jb_Any BasePropertyIndexedKeyframe_offset(const BasePropertyIndexedKeyframe *self);

void BasePropertyIndexedKeyframe_set_offset(BasePropertyIndexedKeyframe* self, jb_Any * value);

jb_Any BasePropertyIndexedKeyframe_easing(const BasePropertyIndexedKeyframe *self);

void BasePropertyIndexedKeyframe_set_easing(BasePropertyIndexedKeyframe* self, jb_Any * value);

jb_Any BasePropertyIndexedKeyframe_composite(const BasePropertyIndexedKeyframe *self);

void BasePropertyIndexedKeyframe_set_composite(BasePropertyIndexedKeyframe* self, jb_Any * value);

BasePropertyIndexedKeyframe BasePropertyIndexedKeyframe_new();

#ifdef __cplusplus
}
#endif
