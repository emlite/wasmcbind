#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CompositionEventInit, UIEventInit);

jb_String CompositionEventInit_data(const CompositionEventInit *self);

void CompositionEventInit_set_data(CompositionEventInit* self, jb_String * value);

CompositionEventInit CompositionEventInit_new();

#ifdef __cplusplus
}
#endif
