#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Pbkdf2Params, Algorithm);

jb_Any Pbkdf2Params_salt(const Pbkdf2Params *self);

void Pbkdf2Params_set_salt(Pbkdf2Params* self, jb_Any * value);

unsigned long Pbkdf2Params_iterations(const Pbkdf2Params *self);

void Pbkdf2Params_set_iterations(Pbkdf2Params* self, unsigned long value);

jb_Any Pbkdf2Params_hash(const Pbkdf2Params *self);

void Pbkdf2Params_set_hash(Pbkdf2Params* self, jb_Any * value);

Pbkdf2Params Pbkdf2Params_new();

#ifdef __cplusplus
}
#endif
