#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WorkerOptions */
DECLARE_EMLITE_TYPE(WorkerOptions, em_Val);

/** @brief Getter of the name property */
jb_String WorkerOptions_name(const WorkerOptions *self);

/** @brief Setter of the name property */
void WorkerOptions_set_name(WorkerOptions* self, jb_String * value);

/** @brief Getter of the type property */
WorkerType WorkerOptions_type(const WorkerOptions *self);

/** @brief Setter of the type property */
void WorkerOptions_set_type(WorkerOptions* self, WorkerType * value);

/** @brief Getter of the credentials property */
RequestCredentials WorkerOptions_credentials(const WorkerOptions *self);

/** @brief Setter of the credentials property */
void WorkerOptions_set_credentials(WorkerOptions* self, RequestCredentials * value);

/** @brief Constructor of the WorkerOptions dictionary type */
WorkerOptions WorkerOptions_new();

#ifdef __cplusplus
}
#endif
