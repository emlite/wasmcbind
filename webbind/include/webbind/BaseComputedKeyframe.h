#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BaseComputedKeyframe */
DECLARE_EMLITE_TYPE(BaseComputedKeyframe, em_Val);

/** @brief Getter of the offset property */
double BaseComputedKeyframe_offset(const BaseComputedKeyframe *self);

/** @brief Setter of the offset property */
void BaseComputedKeyframe_set_offset(BaseComputedKeyframe* self, double value);

/** @brief Getter of the computedOffset property */
double BaseComputedKeyframe_computedOffset(const BaseComputedKeyframe *self);

/** @brief Setter of the computedOffset property */
void BaseComputedKeyframe_set_computedOffset(BaseComputedKeyframe* self, double value);

/** @brief Getter of the easing property */
jb_String BaseComputedKeyframe_easing(const BaseComputedKeyframe *self);

/** @brief Setter of the easing property */
void BaseComputedKeyframe_set_easing(BaseComputedKeyframe* self, jb_String * value);

/** @brief Getter of the composite property */
CompositeOperationOrAuto BaseComputedKeyframe_composite(const BaseComputedKeyframe *self);

/** @brief Setter of the composite property */
void BaseComputedKeyframe_set_composite(BaseComputedKeyframe* self, CompositeOperationOrAuto * value);

/** @brief Constructor of the BaseComputedKeyframe dictionary type */
BaseComputedKeyframe BaseComputedKeyframe_new();

#ifdef __cplusplus
}
#endif
