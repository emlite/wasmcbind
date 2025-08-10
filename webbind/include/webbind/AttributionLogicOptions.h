#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AttributionLogicOptions, em_Val);

jb_Array AttributionLogicOptions_credit(const AttributionLogicOptions *self);

void AttributionLogicOptions_set_credit(AttributionLogicOptions* self, jb_Array * value);

AttributionLogicOptions AttributionLogicOptions_new();

#ifdef __cplusplus
}
#endif
