#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigationPreloadState */
DECLARE_EMLITE_TYPE(NavigationPreloadState, em_Val);

/** @brief Getter of the enabled property */
bool NavigationPreloadState_enabled(const NavigationPreloadState *self);

/** @brief Setter of the enabled property */
void NavigationPreloadState_set_enabled(NavigationPreloadState* self, bool value);

/** @brief Getter of the headerValue property */
jb_String NavigationPreloadState_headerValue(const NavigationPreloadState *self);

/** @brief Setter of the headerValue property */
void NavigationPreloadState_set_headerValue(NavigationPreloadState* self, jb_String * value);

/** @brief Constructor of the NavigationPreloadState dictionary type */
NavigationPreloadState NavigationPreloadState_new();

#ifdef __cplusplus
}
#endif
