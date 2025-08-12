#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "LockInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type LockManagerSnapshot */
DECLARE_EMLITE_TYPE(LockManagerSnapshot, em_Val);

/** @brief Getter of the held property */
jb_Array LockManagerSnapshot_held(const LockManagerSnapshot *self);

/** @brief Setter of the held property */
void LockManagerSnapshot_set_held(LockManagerSnapshot* self, jb_Array * value);

/** @brief Getter of the pending property */
jb_Array LockManagerSnapshot_pending(const LockManagerSnapshot *self);

/** @brief Setter of the pending property */
void LockManagerSnapshot_set_pending(LockManagerSnapshot* self, jb_Array * value);

/** @brief Constructor of the LockManagerSnapshot dictionary type */
LockManagerSnapshot LockManagerSnapshot_new();

#ifdef __cplusplus
}
#endif
