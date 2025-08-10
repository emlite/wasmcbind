#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GetRootNodeOptions, em_Val);

bool GetRootNodeOptions_composed(const GetRootNodeOptions *self);

void GetRootNodeOptions_set_composed(GetRootNodeOptions* self, bool value);

GetRootNodeOptions GetRootNodeOptions_new();

#ifdef __cplusplus
}
#endif
