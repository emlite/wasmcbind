#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BoxQuadOptions, em_Val);

CSSBoxType BoxQuadOptions_box(const BoxQuadOptions *self);

void BoxQuadOptions_set_box(BoxQuadOptions* self, CSSBoxType * value);

jb_Any BoxQuadOptions_relativeTo(const BoxQuadOptions *self);

void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, jb_Any * value);

BoxQuadOptions BoxQuadOptions_new();

#ifdef __cplusplus
}
#endif
