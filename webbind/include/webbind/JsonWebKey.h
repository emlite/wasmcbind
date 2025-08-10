#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RsaOtherPrimesInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(JsonWebKey, em_Val);

jb_String JsonWebKey_kty(const JsonWebKey *self);

void JsonWebKey_set_kty(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_use(const JsonWebKey *self);

void JsonWebKey_set_use(JsonWebKey* self, jb_String * value);

jb_Array JsonWebKey_key_ops(const JsonWebKey *self);

void JsonWebKey_set_key_ops(JsonWebKey* self, jb_Array * value);

jb_String JsonWebKey_alg(const JsonWebKey *self);

void JsonWebKey_set_alg(JsonWebKey* self, jb_String * value);

bool JsonWebKey_ext(const JsonWebKey *self);

void JsonWebKey_set_ext(JsonWebKey* self, bool value);

jb_String JsonWebKey_crv(const JsonWebKey *self);

void JsonWebKey_set_crv(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_x(const JsonWebKey *self);

void JsonWebKey_set_x(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_y(const JsonWebKey *self);

void JsonWebKey_set_y(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_d(const JsonWebKey *self);

void JsonWebKey_set_d(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_n(const JsonWebKey *self);

void JsonWebKey_set_n(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_e(const JsonWebKey *self);

void JsonWebKey_set_e(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_p(const JsonWebKey *self);

void JsonWebKey_set_p(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_q(const JsonWebKey *self);

void JsonWebKey_set_q(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_dp(const JsonWebKey *self);

void JsonWebKey_set_dp(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_dq(const JsonWebKey *self);

void JsonWebKey_set_dq(JsonWebKey* self, jb_String * value);

jb_String JsonWebKey_qi(const JsonWebKey *self);

void JsonWebKey_set_qi(JsonWebKey* self, jb_String * value);

jb_Array JsonWebKey_oth(const JsonWebKey *self);

void JsonWebKey_set_oth(JsonWebKey* self, jb_Array * value);

jb_String JsonWebKey_k(const JsonWebKey *self);

void JsonWebKey_set_k(JsonWebKey* self, jb_String * value);

JsonWebKey JsonWebKey_new();

#ifdef __cplusplus
}
#endif
