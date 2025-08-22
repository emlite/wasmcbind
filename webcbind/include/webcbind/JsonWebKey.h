#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RsaOtherPrimesInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type JsonWebKey */
DECLARE_EMLITE_TYPE(JsonWebKey, em_Val);

/** @brief Getter of the kty property */
jb_String JsonWebKey_kty(const JsonWebKey *self);

/** @brief Setter of the kty property */
void JsonWebKey_set_kty(JsonWebKey* self, jb_String * value);

/** @brief Getter of the use property */
jb_String JsonWebKey_use(const JsonWebKey *self);

/** @brief Setter of the use property */
void JsonWebKey_set_use(JsonWebKey* self, jb_String * value);

/** @brief Getter of the key_ops property */
jb_Array JsonWebKey_key_ops(const JsonWebKey *self);

/** @brief Setter of the key_ops property */
void JsonWebKey_set_key_ops(JsonWebKey* self, jb_Array * value);

/** @brief Getter of the alg property */
jb_String JsonWebKey_alg(const JsonWebKey *self);

/** @brief Setter of the alg property */
void JsonWebKey_set_alg(JsonWebKey* self, jb_String * value);

/** @brief Getter of the ext property */
bool JsonWebKey_ext(const JsonWebKey *self);

/** @brief Setter of the ext property */
void JsonWebKey_set_ext(JsonWebKey* self, bool value);

/** @brief Getter of the crv property */
jb_String JsonWebKey_crv(const JsonWebKey *self);

/** @brief Setter of the crv property */
void JsonWebKey_set_crv(JsonWebKey* self, jb_String * value);

/** @brief Getter of the x property */
jb_String JsonWebKey_x(const JsonWebKey *self);

/** @brief Setter of the x property */
void JsonWebKey_set_x(JsonWebKey* self, jb_String * value);

/** @brief Getter of the y property */
jb_String JsonWebKey_y(const JsonWebKey *self);

/** @brief Setter of the y property */
void JsonWebKey_set_y(JsonWebKey* self, jb_String * value);

/** @brief Getter of the d property */
jb_String JsonWebKey_d(const JsonWebKey *self);

/** @brief Setter of the d property */
void JsonWebKey_set_d(JsonWebKey* self, jb_String * value);

/** @brief Getter of the n property */
jb_String JsonWebKey_n(const JsonWebKey *self);

/** @brief Setter of the n property */
void JsonWebKey_set_n(JsonWebKey* self, jb_String * value);

/** @brief Getter of the e property */
jb_String JsonWebKey_e(const JsonWebKey *self);

/** @brief Setter of the e property */
void JsonWebKey_set_e(JsonWebKey* self, jb_String * value);

/** @brief Getter of the p property */
jb_String JsonWebKey_p(const JsonWebKey *self);

/** @brief Setter of the p property */
void JsonWebKey_set_p(JsonWebKey* self, jb_String * value);

/** @brief Getter of the q property */
jb_String JsonWebKey_q(const JsonWebKey *self);

/** @brief Setter of the q property */
void JsonWebKey_set_q(JsonWebKey* self, jb_String * value);

/** @brief Getter of the dp property */
jb_String JsonWebKey_dp(const JsonWebKey *self);

/** @brief Setter of the dp property */
void JsonWebKey_set_dp(JsonWebKey* self, jb_String * value);

/** @brief Getter of the dq property */
jb_String JsonWebKey_dq(const JsonWebKey *self);

/** @brief Setter of the dq property */
void JsonWebKey_set_dq(JsonWebKey* self, jb_String * value);

/** @brief Getter of the qi property */
jb_String JsonWebKey_qi(const JsonWebKey *self);

/** @brief Setter of the qi property */
void JsonWebKey_set_qi(JsonWebKey* self, jb_String * value);

/** @brief Getter of the oth property */
jb_Array JsonWebKey_oth(const JsonWebKey *self);

/** @brief Setter of the oth property */
void JsonWebKey_set_oth(JsonWebKey* self, jb_Array * value);

/** @brief Getter of the k property */
jb_String JsonWebKey_k(const JsonWebKey *self);

/** @brief Setter of the k property */
void JsonWebKey_set_k(JsonWebKey* self, jb_String * value);

/** @brief Constructor of the JsonWebKey dictionary type */
JsonWebKey JsonWebKey_new();

#ifdef __cplusplus
}
#endif
