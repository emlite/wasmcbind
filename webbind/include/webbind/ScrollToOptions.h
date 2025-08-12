#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ScrollOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ScrollToOptions */
DECLARE_EMLITE_TYPE(ScrollToOptions, ScrollOptions);

/** @brief Getter of the left property */
double ScrollToOptions_left(const ScrollToOptions *self);

/** @brief Setter of the left property */
void ScrollToOptions_set_left(ScrollToOptions* self, double value);

/** @brief Getter of the top property */
double ScrollToOptions_top(const ScrollToOptions *self);

/** @brief Setter of the top property */
void ScrollToOptions_set_top(ScrollToOptions* self, double value);

/** @brief Constructor of the ScrollToOptions dictionary type */
ScrollToOptions ScrollToOptions_new();

#ifdef __cplusplus
}
#endif
