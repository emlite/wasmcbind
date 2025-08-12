#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ScrollOptions */
DECLARE_EMLITE_TYPE(ScrollOptions, em_Val);

/** @brief Getter of the behavior property */
ScrollBehavior ScrollOptions_behavior(const ScrollOptions *self);

/** @brief Setter of the behavior property */
void ScrollOptions_set_behavior(ScrollOptions* self, ScrollBehavior * value);

/** @brief Constructor of the ScrollOptions dictionary type */
ScrollOptions ScrollOptions_new();

#ifdef __cplusplus
}
#endif
