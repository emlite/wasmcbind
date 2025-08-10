#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(LockOptions, em_Val);

LockMode LockOptions_mode(const LockOptions *self);

void LockOptions_set_mode(LockOptions* self, LockMode * value);

bool LockOptions_ifAvailable(const LockOptions *self);

void LockOptions_set_ifAvailable(LockOptions* self, bool value);

bool LockOptions_steal(const LockOptions *self);

void LockOptions_set_steal(LockOptions* self, bool value);

AbortSignal LockOptions_signal(const LockOptions *self);

void LockOptions_set_signal(LockOptions* self, AbortSignal * value);

LockOptions LockOptions_new();

#ifdef __cplusplus
}
#endif
