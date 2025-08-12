#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CustomEventInit */
DECLARE_EMLITE_TYPE(CustomEventInit, EventInit);

/** @brief Getter of the detail property */
jb_Any CustomEventInit_detail(const CustomEventInit *self);

/** @brief Setter of the detail property */
void CustomEventInit_set_detail(CustomEventInit* self, jb_Any * value);

/** @brief Constructor of the CustomEventInit dictionary type */
CustomEventInit CustomEventInit_new();

#ifdef __cplusplus
}
#endif
