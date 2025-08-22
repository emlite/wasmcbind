#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionLogicOptions */
DECLARE_EMLITE_TYPE(AttributionLogicOptions, em_Val);

/** @brief Getter of the credit property */
jb_Array AttributionLogicOptions_credit(const AttributionLogicOptions *self);

/** @brief Setter of the credit property */
void AttributionLogicOptions_set_credit(AttributionLogicOptions* self, jb_Array * value);

/** @brief Constructor of the AttributionLogicOptions dictionary type */
AttributionLogicOptions AttributionLogicOptions_new();

#ifdef __cplusplus
}
#endif
