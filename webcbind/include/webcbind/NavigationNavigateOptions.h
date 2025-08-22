#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "NavigationOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigationNavigateOptions */
DECLARE_EMLITE_TYPE(NavigationNavigateOptions, NavigationOptions);

/** @brief Getter of the state property */
jb_Any NavigationNavigateOptions_state(const NavigationNavigateOptions *self);

/** @brief Setter of the state property */
void NavigationNavigateOptions_set_state(NavigationNavigateOptions* self, jb_Any * value);

/** @brief Getter of the history property */
NavigationHistoryBehavior NavigationNavigateOptions_history(const NavigationNavigateOptions *self);

/** @brief Setter of the history property */
void NavigationNavigateOptions_set_history(NavigationNavigateOptions* self, NavigationHistoryBehavior * value);

/** @brief Constructor of the NavigationNavigateOptions dictionary type */
NavigationNavigateOptions NavigationNavigateOptions_new();

#ifdef __cplusplus
}
#endif
