#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RegistrationOptions, em_Val);

jb_String RegistrationOptions_scope(const RegistrationOptions *self);

void RegistrationOptions_set_scope(RegistrationOptions* self, jb_String * value);

WorkerType RegistrationOptions_type(const RegistrationOptions *self);

void RegistrationOptions_set_type(RegistrationOptions* self, WorkerType * value);

ServiceWorkerUpdateViaCache RegistrationOptions_updateViaCache(const RegistrationOptions *self);

void RegistrationOptions_set_updateViaCache(RegistrationOptions* self, ServiceWorkerUpdateViaCache * value);

RegistrationOptions RegistrationOptions_new();

#ifdef __cplusplus
}
#endif
