#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type LockInfo */
DECLARE_EMLITE_TYPE(LockInfo, em_Val);

/** @brief Getter of the name property */
jb_String LockInfo_name(const LockInfo *self);

/** @brief Setter of the name property */
void LockInfo_set_name(LockInfo* self, jb_String * value);

/** @brief Getter of the mode property */
LockMode LockInfo_mode(const LockInfo *self);

/** @brief Setter of the mode property */
void LockInfo_set_mode(LockInfo* self, LockMode * value);

/** @brief Getter of the clientId property */
jb_String LockInfo_clientId(const LockInfo *self);

/** @brief Setter of the clientId property */
void LockInfo_set_clientId(LockInfo* self, jb_String * value);

/** @brief Constructor of the LockInfo dictionary type */
LockInfo LockInfo_new();

#ifdef __cplusplus
}
#endif
