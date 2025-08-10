#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "LockInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(LockManagerSnapshot, em_Val);

jb_Array LockManagerSnapshot_held(const LockManagerSnapshot *self);

void LockManagerSnapshot_set_held(LockManagerSnapshot* self, jb_Array * value);

jb_Array LockManagerSnapshot_pending(const LockManagerSnapshot *self);

void LockManagerSnapshot_set_pending(LockManagerSnapshot* self, jb_Array * value);

LockManagerSnapshot LockManagerSnapshot_new();

#ifdef __cplusplus
}
#endif
