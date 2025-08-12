#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HkdfParams */
DECLARE_EMLITE_TYPE(HkdfParams, Algorithm);

/** @brief Getter of the hash property */
jb_Any HkdfParams_hash(const HkdfParams *self);

/** @brief Setter of the hash property */
void HkdfParams_set_hash(HkdfParams* self, jb_Any * value);

/** @brief Getter of the salt property */
jb_Any HkdfParams_salt(const HkdfParams *self);

/** @brief Setter of the salt property */
void HkdfParams_set_salt(HkdfParams* self, jb_Any * value);

/** @brief Getter of the info property */
jb_Any HkdfParams_info(const HkdfParams *self);

/** @brief Setter of the info property */
void HkdfParams_set_info(HkdfParams* self, jb_Any * value);

/** @brief Constructor of the HkdfParams dictionary type */
HkdfParams HkdfParams_new();

#ifdef __cplusplus
}
#endif
