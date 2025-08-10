#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ResizeObserverOptions, em_Val);

ResizeObserverBoxOptions ResizeObserverOptions_box(const ResizeObserverOptions *self);

void ResizeObserverOptions_set_box(ResizeObserverOptions* self, ResizeObserverBoxOptions * value);

ResizeObserverOptions ResizeObserverOptions_new();

#ifdef __cplusplus
}
#endif
