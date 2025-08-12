#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ScrollOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ScrollIntoViewOptions */
DECLARE_EMLITE_TYPE(ScrollIntoViewOptions, ScrollOptions);

/** @brief Getter of the block property */
ScrollLogicalPosition ScrollIntoViewOptions_block(const ScrollIntoViewOptions *self);

/** @brief Setter of the block property */
void ScrollIntoViewOptions_set_block(ScrollIntoViewOptions* self, ScrollLogicalPosition * value);

/** @brief Getter of the inline property */
ScrollLogicalPosition ScrollIntoViewOptions_inline_(const ScrollIntoViewOptions *self);

/** @brief Setter of the inline property */
void ScrollIntoViewOptions_set_inline_(ScrollIntoViewOptions* self, ScrollLogicalPosition * value);

/** @brief Getter of the container property */
ScrollIntoViewContainer ScrollIntoViewOptions_container(const ScrollIntoViewOptions *self);

/** @brief Setter of the container property */
void ScrollIntoViewOptions_set_container(ScrollIntoViewOptions* self, ScrollIntoViewContainer * value);

/** @brief Constructor of the ScrollIntoViewOptions dictionary type */
ScrollIntoViewOptions ScrollIntoViewOptions_new();

#ifdef __cplusplus
}
#endif
