#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(LayoutOptions, em_Val);

ChildDisplayType LayoutOptions_childDisplay(const LayoutOptions *self);

void LayoutOptions_set_childDisplay(LayoutOptions* self, ChildDisplayType * value);

LayoutSizingMode LayoutOptions_sizing(const LayoutOptions *self);

void LayoutOptions_set_sizing(LayoutOptions* self, LayoutSizingMode * value);

LayoutOptions LayoutOptions_new();

#ifdef __cplusplus
}
#endif
