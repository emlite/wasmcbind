#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigationOptions */
DECLARE_EMLITE_TYPE(NavigationOptions, em_Val);

/** @brief Getter of the info property */
jb_Any NavigationOptions_info(const NavigationOptions *self);

/** @brief Setter of the info property */
void NavigationOptions_set_info(NavigationOptions* self, jb_Any * value);

/** @brief Constructor of the NavigationOptions dictionary type */
NavigationOptions NavigationOptions_new();

#ifdef __cplusplus
}
#endif
