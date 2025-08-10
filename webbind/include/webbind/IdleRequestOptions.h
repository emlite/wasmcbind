#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdleRequestOptions, em_Val);

unsigned long IdleRequestOptions_timeout(const IdleRequestOptions *self);

void IdleRequestOptions_set_timeout(IdleRequestOptions* self, unsigned long value);

IdleRequestOptions IdleRequestOptions_new();

#ifdef __cplusplus
}
#endif
