#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WorkerOptions, em_Val);

WorkerType WorkerOptions_type(const WorkerOptions *self);

void WorkerOptions_set_type(WorkerOptions* self, WorkerType * value);

RequestCredentials WorkerOptions_credentials(const WorkerOptions *self);

void WorkerOptions_set_credentials(WorkerOptions* self, RequestCredentials * value);

jb_String WorkerOptions_name(const WorkerOptions *self);

void WorkerOptions_set_name(WorkerOptions* self, jb_String * value);

WorkerOptions WorkerOptions_new();

#ifdef __cplusplus
}
#endif
