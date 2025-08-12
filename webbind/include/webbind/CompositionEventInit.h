#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CompositionEventInit */
DECLARE_EMLITE_TYPE(CompositionEventInit, UIEventInit);

/** @brief Getter of the data property */
jb_String CompositionEventInit_data(const CompositionEventInit *self);

/** @brief Setter of the data property */
void CompositionEventInit_set_data(CompositionEventInit* self, jb_String * value);

/** @brief Constructor of the CompositionEventInit dictionary type */
CompositionEventInit CompositionEventInit_new();

#ifdef __cplusplus
}
#endif
