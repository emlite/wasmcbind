#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Pbkdf2Params */
DECLARE_EMLITE_TYPE(Pbkdf2Params, Algorithm);

/** @brief Getter of the salt property */
jb_Any Pbkdf2Params_salt(const Pbkdf2Params *self);

/** @brief Setter of the salt property */
void Pbkdf2Params_set_salt(Pbkdf2Params* self, jb_Any * value);

/** @brief Getter of the iterations property */
unsigned long Pbkdf2Params_iterations(const Pbkdf2Params *self);

/** @brief Setter of the iterations property */
void Pbkdf2Params_set_iterations(Pbkdf2Params* self, unsigned long value);

/** @brief Getter of the hash property */
jb_Any Pbkdf2Params_hash(const Pbkdf2Params *self);

/** @brief Setter of the hash property */
void Pbkdf2Params_set_hash(Pbkdf2Params* self, jb_Any * value);

/** @brief Constructor of the Pbkdf2Params dictionary type */
Pbkdf2Params Pbkdf2Params_new();

#ifdef __cplusplus
}
#endif
