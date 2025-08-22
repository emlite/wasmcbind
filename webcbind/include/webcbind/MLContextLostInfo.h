#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLContextLostInfo */
DECLARE_EMLITE_TYPE(MLContextLostInfo, em_Val);

/** @brief Getter of the message property */
jb_String MLContextLostInfo_message(const MLContextLostInfo *self);

/** @brief Setter of the message property */
void MLContextLostInfo_set_message(MLContextLostInfo* self, jb_String * value);

/** @brief Constructor of the MLContextLostInfo dictionary type */
MLContextLostInfo MLContextLostInfo_new();

#ifdef __cplusplus
}
#endif
