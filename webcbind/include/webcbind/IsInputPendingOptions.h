#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IsInputPendingOptions */
DECLARE_EMLITE_TYPE(IsInputPendingOptions, em_Val);

/** @brief Getter of the includeContinuous property */
bool IsInputPendingOptions_includeContinuous(const IsInputPendingOptions *self);

/** @brief Setter of the includeContinuous property */
void IsInputPendingOptions_set_includeContinuous(IsInputPendingOptions* self, bool value);

/** @brief Constructor of the IsInputPendingOptions dictionary type */
IsInputPendingOptions IsInputPendingOptions_new();

#ifdef __cplusplus
}
#endif
