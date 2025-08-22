#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type UIEventInit */
DECLARE_EMLITE_TYPE(UIEventInit, em_Val);

/** @brief Getter of the which property */
unsigned long UIEventInit_which(const UIEventInit *self);

/** @brief Setter of the which property */
void UIEventInit_set_which(UIEventInit* self, unsigned long value);

/** @brief Constructor of the UIEventInit dictionary type */
UIEventInit UIEventInit_new();

#ifdef __cplusplus
}
#endif
