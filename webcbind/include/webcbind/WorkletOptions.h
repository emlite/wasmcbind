#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WorkletOptions */
DECLARE_EMLITE_TYPE(WorkletOptions, em_Val);

/** @brief Getter of the credentials property */
RequestCredentials WorkletOptions_credentials(const WorkletOptions *self);

/** @brief Setter of the credentials property */
void WorkletOptions_set_credentials(WorkletOptions* self, RequestCredentials * value);

/** @brief Constructor of the WorkletOptions dictionary type */
WorkletOptions WorkletOptions_new();

#ifdef __cplusplus
}
#endif
