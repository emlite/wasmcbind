#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "NavigationOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigationReloadOptions */
DECLARE_EMLITE_TYPE(NavigationReloadOptions, NavigationOptions);

/** @brief Getter of the state property */
jb_Any NavigationReloadOptions_state(const NavigationReloadOptions *self);

/** @brief Setter of the state property */
void NavigationReloadOptions_set_state(NavigationReloadOptions* self, jb_Any * value);

/** @brief Constructor of the NavigationReloadOptions dictionary type */
NavigationReloadOptions NavigationReloadOptions_new();

#ifdef __cplusplus
}
#endif
