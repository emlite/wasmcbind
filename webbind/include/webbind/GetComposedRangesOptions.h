#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

DECLARE_EMLITE_TYPE(GetComposedRangesOptions, em_Val);

jb_Array GetComposedRangesOptions_shadowRoots(const GetComposedRangesOptions *self);

void GetComposedRangesOptions_set_shadowRoots(GetComposedRangesOptions* self, jb_Array * value);

GetComposedRangesOptions GetComposedRangesOptions_new();

#ifdef __cplusplus
}
#endif
