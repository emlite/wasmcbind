#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

DECLARE_EMLITE_TYPE(CaretPositionFromPointOptions, em_Val);

jb_Array CaretPositionFromPointOptions_shadowRoots(const CaretPositionFromPointOptions *self);

void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, jb_Array * value);

CaretPositionFromPointOptions CaretPositionFromPointOptions_new();

#ifdef __cplusplus
}
#endif
