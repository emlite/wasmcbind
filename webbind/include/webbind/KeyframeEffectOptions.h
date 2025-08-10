#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EffectTiming.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(KeyframeEffectOptions, EffectTiming);

CompositeOperation KeyframeEffectOptions_composite(const KeyframeEffectOptions *self);

void KeyframeEffectOptions_set_composite(KeyframeEffectOptions* self, CompositeOperation * value);

jb_String KeyframeEffectOptions_pseudoElement(const KeyframeEffectOptions *self);

void KeyframeEffectOptions_set_pseudoElement(KeyframeEffectOptions* self, jb_String * value);

KeyframeEffectOptions KeyframeEffectOptions_new();

#ifdef __cplusplus
}
#endif
