#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GetRootNodeOptions */
DECLARE_EMLITE_TYPE(GetRootNodeOptions, em_Val);

/** @brief Getter of the composed property */
bool GetRootNodeOptions_composed(const GetRootNodeOptions *self);

/** @brief Setter of the composed property */
void GetRootNodeOptions_set_composed(GetRootNodeOptions* self, bool value);

/** @brief Constructor of the GetRootNodeOptions dictionary type */
GetRootNodeOptions GetRootNodeOptions_new();

#ifdef __cplusplus
}
#endif
