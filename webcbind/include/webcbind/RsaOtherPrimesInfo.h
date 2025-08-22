#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaOtherPrimesInfo */
DECLARE_EMLITE_TYPE(RsaOtherPrimesInfo, em_Val);

/** @brief Getter of the r property */
jb_String RsaOtherPrimesInfo_r(const RsaOtherPrimesInfo *self);

/** @brief Setter of the r property */
void RsaOtherPrimesInfo_set_r(RsaOtherPrimesInfo* self, jb_String * value);

/** @brief Getter of the d property */
jb_String RsaOtherPrimesInfo_d(const RsaOtherPrimesInfo *self);

/** @brief Setter of the d property */
void RsaOtherPrimesInfo_set_d(RsaOtherPrimesInfo* self, jb_String * value);

/** @brief Getter of the t property */
jb_String RsaOtherPrimesInfo_t(const RsaOtherPrimesInfo *self);

/** @brief Setter of the t property */
void RsaOtherPrimesInfo_set_t(RsaOtherPrimesInfo* self, jb_String * value);

/** @brief Constructor of the RsaOtherPrimesInfo dictionary type */
RsaOtherPrimesInfo RsaOtherPrimesInfo_new();

#ifdef __cplusplus
}
#endif
