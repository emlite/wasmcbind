#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ChildBreakToken ChildBreakToken;

/** @brief Dictionary type BreakTokenOptions */
DECLARE_EMLITE_TYPE(BreakTokenOptions, em_Val);

/** @brief Getter of the childBreakTokens property */
jb_Array BreakTokenOptions_childBreakTokens(const BreakTokenOptions *self);

/** @brief Setter of the childBreakTokens property */
void BreakTokenOptions_set_childBreakTokens(BreakTokenOptions* self, jb_Array * value);

/** @brief Getter of the data property */
jb_Any BreakTokenOptions_data(const BreakTokenOptions *self);

/** @brief Setter of the data property */
void BreakTokenOptions_set_data(BreakTokenOptions* self, jb_Any * value);

/** @brief Constructor of the BreakTokenOptions dictionary type */
BreakTokenOptions BreakTokenOptions_new();

#ifdef __cplusplus
}
#endif
