#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigationInterceptOptions */
DECLARE_EMLITE_TYPE(NavigationInterceptOptions, em_Val);

/** @brief Getter of the handler property */
jb_Function NavigationInterceptOptions_handler(const NavigationInterceptOptions *self);

/** @brief Setter of the handler property */
void NavigationInterceptOptions_set_handler(NavigationInterceptOptions* self, jb_Function * value);

/** @brief Getter of the focusReset property */
NavigationFocusReset NavigationInterceptOptions_focusReset(const NavigationInterceptOptions *self);

/** @brief Setter of the focusReset property */
void NavigationInterceptOptions_set_focusReset(NavigationInterceptOptions* self, NavigationFocusReset * value);

/** @brief Getter of the scroll property */
NavigationScrollBehavior NavigationInterceptOptions_scroll(const NavigationInterceptOptions *self);

/** @brief Setter of the scroll property */
void NavigationInterceptOptions_set_scroll(NavigationInterceptOptions* self, NavigationScrollBehavior * value);

/** @brief Constructor of the NavigationInterceptOptions dictionary type */
NavigationInterceptOptions NavigationInterceptOptions_new();

#ifdef __cplusplus
}
#endif
