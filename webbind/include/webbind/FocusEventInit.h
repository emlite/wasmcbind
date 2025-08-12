#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

/** @brief Dictionary type FocusEventInit */
DECLARE_EMLITE_TYPE(FocusEventInit, UIEventInit);

/** @brief Getter of the relatedTarget property */
EventTarget FocusEventInit_relatedTarget(const FocusEventInit *self);

/** @brief Setter of the relatedTarget property */
void FocusEventInit_set_relatedTarget(FocusEventInit* self, EventTarget * value);

/** @brief Constructor of the FocusEventInit dictionary type */
FocusEventInit FocusEventInit_new();

#ifdef __cplusplus
}
#endif
