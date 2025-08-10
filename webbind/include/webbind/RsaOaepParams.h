#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaOaepParams, Algorithm);

jb_Any RsaOaepParams_label(const RsaOaepParams *self);

void RsaOaepParams_set_label(RsaOaepParams* self, jb_Any * value);

RsaOaepParams RsaOaepParams_new();

#ifdef __cplusplus
}
#endif
