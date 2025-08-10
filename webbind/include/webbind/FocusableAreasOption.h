#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FocusableAreasOption, em_Val);

FocusableAreaSearchMode FocusableAreasOption_mode(const FocusableAreasOption *self);

void FocusableAreasOption_set_mode(FocusableAreasOption* self, FocusableAreaSearchMode * value);

FocusableAreasOption FocusableAreasOption_new();

#ifdef __cplusplus
}
#endif
