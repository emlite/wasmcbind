#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SharedWorkerOptions, WorkerOptions);

SameSiteCookiesType SharedWorkerOptions_sameSiteCookies(const SharedWorkerOptions *self);

void SharedWorkerOptions_set_sameSiteCookies(SharedWorkerOptions* self, SameSiteCookiesType * value);

SharedWorkerOptions SharedWorkerOptions_new();

#ifdef __cplusplus
}
#endif
