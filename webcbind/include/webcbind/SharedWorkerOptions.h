#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WorkerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedWorkerOptions */
DECLARE_EMLITE_TYPE(SharedWorkerOptions, WorkerOptions);

/** @brief Getter of the sameSiteCookies property */
SameSiteCookiesType SharedWorkerOptions_sameSiteCookies(const SharedWorkerOptions *self);

/** @brief Setter of the sameSiteCookies property */
void SharedWorkerOptions_set_sameSiteCookies(SharedWorkerOptions* self, SameSiteCookiesType * value);

/** @brief Constructor of the SharedWorkerOptions dictionary type */
SharedWorkerOptions SharedWorkerOptions_new();

#ifdef __cplusplus
}
#endif
