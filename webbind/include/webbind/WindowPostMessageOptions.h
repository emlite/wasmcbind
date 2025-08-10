#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "StructuredSerializeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WindowPostMessageOptions, StructuredSerializeOptions);

jb_String WindowPostMessageOptions_targetOrigin(const WindowPostMessageOptions *self);

void WindowPostMessageOptions_set_targetOrigin(WindowPostMessageOptions* self, jb_String * value);

WindowPostMessageOptions WindowPostMessageOptions_new();

#ifdef __cplusplus
}
#endif
