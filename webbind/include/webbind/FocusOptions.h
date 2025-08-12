#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FocusOptions */
DECLARE_EMLITE_TYPE(FocusOptions, em_Val);

/** @brief Getter of the preventScroll property */
bool FocusOptions_preventScroll(const FocusOptions *self);

/** @brief Setter of the preventScroll property */
void FocusOptions_set_preventScroll(FocusOptions* self, bool value);

/** @brief Getter of the focusVisible property */
bool FocusOptions_focusVisible(const FocusOptions *self);

/** @brief Setter of the focusVisible property */
void FocusOptions_set_focusVisible(FocusOptions* self, bool value);

/** @brief Constructor of the FocusOptions dictionary type */
FocusOptions FocusOptions_new();

#ifdef __cplusplus
}
#endif
