#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AssignedNodesOptions, em_Val);

bool AssignedNodesOptions_flatten(const AssignedNodesOptions *self);

void AssignedNodesOptions_set_flatten(AssignedNodesOptions* self, bool value);

AssignedNodesOptions AssignedNodesOptions_new();

#ifdef __cplusplus
}
#endif
