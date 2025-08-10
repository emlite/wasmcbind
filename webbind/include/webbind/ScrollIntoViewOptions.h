#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ScrollOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ScrollIntoViewOptions, ScrollOptions);

ScrollLogicalPosition ScrollIntoViewOptions_block(const ScrollIntoViewOptions *self);

void ScrollIntoViewOptions_set_block(ScrollIntoViewOptions* self, ScrollLogicalPosition * value);

ScrollLogicalPosition ScrollIntoViewOptions_inline_(const ScrollIntoViewOptions *self);

void ScrollIntoViewOptions_set_inline_(ScrollIntoViewOptions* self, ScrollLogicalPosition * value);

ScrollIntoViewContainer ScrollIntoViewOptions_container(const ScrollIntoViewOptions *self);

void ScrollIntoViewOptions_set_container(ScrollIntoViewOptions* self, ScrollIntoViewContainer * value);

ScrollIntoViewOptions ScrollIntoViewOptions_new();

#ifdef __cplusplus
}
#endif
