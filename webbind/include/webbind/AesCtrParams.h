#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AesCtrParams, Algorithm);

jb_Any AesCtrParams_counter(const AesCtrParams *self);

void AesCtrParams_set_counter(AesCtrParams* self, jb_Any * value);

unsigned char AesCtrParams_length(const AesCtrParams *self);

void AesCtrParams_set_length(AesCtrParams* self, unsigned char value);

AesCtrParams AesCtrParams_new();

#ifdef __cplusplus
}
#endif
