#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StartViewTransitionOptions */
DECLARE_EMLITE_TYPE(StartViewTransitionOptions, em_Val);

/** @brief Getter of the update property */
jb_Function StartViewTransitionOptions_update(const StartViewTransitionOptions *self);

/** @brief Setter of the update property */
void StartViewTransitionOptions_set_update(StartViewTransitionOptions* self, jb_Function * value);

/** @brief Getter of the types property */
jb_Array StartViewTransitionOptions_types(const StartViewTransitionOptions *self);

/** @brief Setter of the types property */
void StartViewTransitionOptions_set_types(StartViewTransitionOptions* self, jb_Array * value);

/** @brief Constructor of the StartViewTransitionOptions dictionary type */
StartViewTransitionOptions StartViewTransitionOptions_new();

#ifdef __cplusplus
}
#endif
