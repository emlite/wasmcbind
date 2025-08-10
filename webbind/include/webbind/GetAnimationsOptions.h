#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GetAnimationsOptions, em_Val);

bool GetAnimationsOptions_subtree(const GetAnimationsOptions *self);

void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value);

jb_String GetAnimationsOptions_pseudoElement(const GetAnimationsOptions *self);

void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, jb_String * value);

GetAnimationsOptions GetAnimationsOptions_new();

#ifdef __cplusplus
}
#endif
