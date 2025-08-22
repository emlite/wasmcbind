#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BasePropertyIndexedKeyframe */
DECLARE_EMLITE_TYPE(BasePropertyIndexedKeyframe, em_Val);

/** @brief Getter of the offset property */
jb_Any BasePropertyIndexedKeyframe_offset(const BasePropertyIndexedKeyframe *self);

/** @brief Setter of the offset property */
void BasePropertyIndexedKeyframe_set_offset(BasePropertyIndexedKeyframe* self, jb_Any * value);

/** @brief Getter of the easing property */
jb_Any BasePropertyIndexedKeyframe_easing(const BasePropertyIndexedKeyframe *self);

/** @brief Setter of the easing property */
void BasePropertyIndexedKeyframe_set_easing(BasePropertyIndexedKeyframe* self, jb_Any * value);

/** @brief Getter of the composite property */
jb_Any BasePropertyIndexedKeyframe_composite(const BasePropertyIndexedKeyframe *self);

/** @brief Setter of the composite property */
void BasePropertyIndexedKeyframe_set_composite(BasePropertyIndexedKeyframe* self, jb_Any * value);

/** @brief Constructor of the BasePropertyIndexedKeyframe dictionary type */
BasePropertyIndexedKeyframe BasePropertyIndexedKeyframe_new();

#ifdef __cplusplus
}
#endif
