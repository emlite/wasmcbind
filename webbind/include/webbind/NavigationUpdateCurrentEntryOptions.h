#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigationUpdateCurrentEntryOptions */
DECLARE_EMLITE_TYPE(NavigationUpdateCurrentEntryOptions, em_Val);

/** @brief Getter of the state property */
jb_Any NavigationUpdateCurrentEntryOptions_state(const NavigationUpdateCurrentEntryOptions *self);

/** @brief Setter of the state property */
void NavigationUpdateCurrentEntryOptions_set_state(NavigationUpdateCurrentEntryOptions* self, jb_Any * value);

/** @brief Constructor of the NavigationUpdateCurrentEntryOptions dictionary type */
NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions_new();

#ifdef __cplusplus
}
#endif
