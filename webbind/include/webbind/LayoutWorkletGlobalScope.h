#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(LayoutWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined LayoutWorkletGlobalScope_registerLayout(LayoutWorkletGlobalScope* self , jb_DOMString * name, jb_Any * layoutCtor);
