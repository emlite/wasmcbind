#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RegistrationOptions */
DECLARE_EMLITE_TYPE(RegistrationOptions, em_Val);

/** @brief Getter of the scope property */
jb_String RegistrationOptions_scope(const RegistrationOptions *self);

/** @brief Setter of the scope property */
void RegistrationOptions_set_scope(RegistrationOptions* self, jb_String * value);

/** @brief Getter of the type property */
WorkerType RegistrationOptions_type(const RegistrationOptions *self);

/** @brief Setter of the type property */
void RegistrationOptions_set_type(RegistrationOptions* self, WorkerType * value);

/** @brief Getter of the updateViaCache property */
ServiceWorkerUpdateViaCache RegistrationOptions_updateViaCache(const RegistrationOptions *self);

/** @brief Setter of the updateViaCache property */
void RegistrationOptions_set_updateViaCache(RegistrationOptions* self, ServiceWorkerUpdateViaCache * value);

/** @brief Constructor of the RegistrationOptions dictionary type */
RegistrationOptions RegistrationOptions_new();

#ifdef __cplusplus
}
#endif
