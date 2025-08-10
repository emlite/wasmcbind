#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaOtherPrimesInfo, em_Val);

jb_String RsaOtherPrimesInfo_r(const RsaOtherPrimesInfo *self);

void RsaOtherPrimesInfo_set_r(RsaOtherPrimesInfo* self, jb_String * value);

jb_String RsaOtherPrimesInfo_d(const RsaOtherPrimesInfo *self);

void RsaOtherPrimesInfo_set_d(RsaOtherPrimesInfo* self, jb_String * value);

jb_String RsaOtherPrimesInfo_t(const RsaOtherPrimesInfo *self);

void RsaOtherPrimesInfo_set_t(RsaOtherPrimesInfo* self, jb_String * value);

RsaOtherPrimesInfo RsaOtherPrimesInfo_new();

#ifdef __cplusplus
}
#endif
