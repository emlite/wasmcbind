#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLContextLostInfo, em_Val);

jb_String MLContextLostInfo_message(const MLContextLostInfo *self);

void MLContextLostInfo_set_message(MLContextLostInfo* self, jb_String * value);

MLContextLostInfo MLContextLostInfo_new();

#ifdef __cplusplus
}
#endif
