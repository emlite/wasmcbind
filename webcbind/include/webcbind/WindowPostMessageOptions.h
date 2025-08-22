#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "StructuredSerializeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WindowPostMessageOptions */
DECLARE_EMLITE_TYPE(WindowPostMessageOptions, StructuredSerializeOptions);

/** @brief Getter of the targetOrigin property */
jb_String WindowPostMessageOptions_targetOrigin(const WindowPostMessageOptions *self);

/** @brief Setter of the targetOrigin property */
void WindowPostMessageOptions_set_targetOrigin(WindowPostMessageOptions* self, jb_String * value);

/** @brief Constructor of the WindowPostMessageOptions dictionary type */
WindowPostMessageOptions WindowPostMessageOptions_new();

#ifdef __cplusplus
}
#endif
