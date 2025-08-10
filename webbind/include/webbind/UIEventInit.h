#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(UIEventInit, em_Val);

unsigned long UIEventInit_which(const UIEventInit *self);

void UIEventInit_set_which(UIEventInit* self, unsigned long value);

UIEventInit UIEventInit_new();

#ifdef __cplusplus
}
#endif
