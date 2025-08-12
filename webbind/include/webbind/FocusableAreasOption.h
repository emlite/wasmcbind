#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FocusableAreasOption */
DECLARE_EMLITE_TYPE(FocusableAreasOption, em_Val);

/** @brief Getter of the mode property */
FocusableAreaSearchMode FocusableAreasOption_mode(const FocusableAreasOption *self);

/** @brief Setter of the mode property */
void FocusableAreasOption_set_mode(FocusableAreasOption* self, FocusableAreaSearchMode * value);

/** @brief Constructor of the FocusableAreasOption dictionary type */
FocusableAreasOption FocusableAreasOption_new();

#ifdef __cplusplus
}
#endif
