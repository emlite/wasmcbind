#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BaseKeyframe */
DECLARE_EMLITE_TYPE(BaseKeyframe, em_Val);

/** @brief Getter of the offset property */
double BaseKeyframe_offset(const BaseKeyframe *self);

/** @brief Setter of the offset property */
void BaseKeyframe_set_offset(BaseKeyframe* self, double value);

/** @brief Getter of the easing property */
jb_String BaseKeyframe_easing(const BaseKeyframe *self);

/** @brief Setter of the easing property */
void BaseKeyframe_set_easing(BaseKeyframe* self, jb_String * value);

/** @brief Getter of the composite property */
CompositeOperationOrAuto BaseKeyframe_composite(const BaseKeyframe *self);

/** @brief Setter of the composite property */
void BaseKeyframe_set_composite(BaseKeyframe* self, CompositeOperationOrAuto * value);

/** @brief Constructor of the BaseKeyframe dictionary type */
BaseKeyframe BaseKeyframe_new();

#ifdef __cplusplus
}
#endif
