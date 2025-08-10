#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;

DECLARE_EMLITE_TYPE(GetHTMLOptions, em_Val);

bool GetHTMLOptions_serializableShadowRoots(const GetHTMLOptions *self);

void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value);

jb_Array GetHTMLOptions_shadowRoots(const GetHTMLOptions *self);

void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, jb_Array * value);

GetHTMLOptions GetHTMLOptions_new();

#ifdef __cplusplus
}
#endif
