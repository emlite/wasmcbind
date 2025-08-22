#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AssignedNodesOptions */
DECLARE_EMLITE_TYPE(AssignedNodesOptions, em_Val);

/** @brief Getter of the flatten property */
bool AssignedNodesOptions_flatten(const AssignedNodesOptions *self);

/** @brief Setter of the flatten property */
void AssignedNodesOptions_set_flatten(AssignedNodesOptions* self, bool value);

/** @brief Constructor of the AssignedNodesOptions dictionary type */
AssignedNodesOptions AssignedNodesOptions_new();

#ifdef __cplusplus
}
#endif
