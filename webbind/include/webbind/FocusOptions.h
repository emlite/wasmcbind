#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FocusOptions, em_Val);

bool FocusOptions_preventScroll(const FocusOptions *self);

void FocusOptions_set_preventScroll(FocusOptions* self, bool value);

bool FocusOptions_focusVisible(const FocusOptions *self);

void FocusOptions_set_focusVisible(FocusOptions* self, bool value);

FocusOptions FocusOptions_new();

#ifdef __cplusplus
}
#endif
