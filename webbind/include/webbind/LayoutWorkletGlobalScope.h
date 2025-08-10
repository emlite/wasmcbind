#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(LayoutWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined LayoutWorkletGlobalScope_registerLayout(LayoutWorkletGlobalScope* self , jb_String * name, jb_Function * layoutCtor);

#ifdef __cplusplus
}
#endif
