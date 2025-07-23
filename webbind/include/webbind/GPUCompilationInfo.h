#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUCompilationMessage GPUCompilationMessage;


DECLARE_EMLITE_TYPE(GPUCompilationInfo, em_Val);

jb_FrozenArray GPUCompilationInfo_messages(const GPUCompilationInfo *self);
