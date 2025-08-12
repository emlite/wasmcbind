#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ResizeObserverOptions */
DECLARE_EMLITE_TYPE(ResizeObserverOptions, em_Val);

/** @brief Getter of the box property */
ResizeObserverBoxOptions ResizeObserverOptions_box(const ResizeObserverOptions *self);

/** @brief Setter of the box property */
void ResizeObserverOptions_set_box(ResizeObserverOptions* self, ResizeObserverBoxOptions * value);

/** @brief Constructor of the ResizeObserverOptions dictionary type */
ResizeObserverOptions ResizeObserverOptions_new();

#ifdef __cplusplus
}
#endif
