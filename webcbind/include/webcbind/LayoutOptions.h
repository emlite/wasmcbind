#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type LayoutOptions */
DECLARE_EMLITE_TYPE(LayoutOptions, em_Val);

/** @brief Getter of the childDisplay property */
ChildDisplayType LayoutOptions_childDisplay(const LayoutOptions *self);

/** @brief Setter of the childDisplay property */
void LayoutOptions_set_childDisplay(LayoutOptions* self, ChildDisplayType * value);

/** @brief Getter of the sizing property */
LayoutSizingMode LayoutOptions_sizing(const LayoutOptions *self);

/** @brief Setter of the sizing property */
void LayoutOptions_set_sizing(LayoutOptions* self, LayoutSizingMode * value);

/** @brief Constructor of the LayoutOptions dictionary type */
LayoutOptions LayoutOptions_new();

#ifdef __cplusplus
}
#endif
