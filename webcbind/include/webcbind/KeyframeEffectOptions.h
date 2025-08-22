#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EffectTiming.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type KeyframeEffectOptions */
DECLARE_EMLITE_TYPE(KeyframeEffectOptions, EffectTiming);

/** @brief Getter of the composite property */
CompositeOperation KeyframeEffectOptions_composite(const KeyframeEffectOptions *self);

/** @brief Setter of the composite property */
void KeyframeEffectOptions_set_composite(KeyframeEffectOptions* self, CompositeOperation * value);

/** @brief Getter of the pseudoElement property */
jb_String KeyframeEffectOptions_pseudoElement(const KeyframeEffectOptions *self);

/** @brief Setter of the pseudoElement property */
void KeyframeEffectOptions_set_pseudoElement(KeyframeEffectOptions* self, jb_String * value);

/** @brief Constructor of the KeyframeEffectOptions dictionary type */
KeyframeEffectOptions KeyframeEffectOptions_new();

#ifdef __cplusplus
}
#endif
