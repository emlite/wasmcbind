#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"


typedef struct {
  WorkletGlobalScope inner;
} LayoutWorkletGlobalScope;


DECLARE_EMLITE_TYPE(LayoutWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined LayoutWorkletGlobalScope_registerLayout(LayoutWorkletGlobalScope* self , const jb_DOMString* name, const jb_Any* layoutCtor);
