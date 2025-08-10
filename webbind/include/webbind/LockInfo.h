#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(LockInfo, em_Val);

jb_String LockInfo_name(const LockInfo *self);

void LockInfo_set_name(LockInfo* self, jb_String * value);

LockMode LockInfo_mode(const LockInfo *self);

void LockInfo_set_mode(LockInfo* self, LockMode * value);

jb_String LockInfo_clientId(const LockInfo *self);

void LockInfo_set_clientId(LockInfo* self, jb_String * value);

LockInfo LockInfo_new();

#ifdef __cplusplus
}
#endif
