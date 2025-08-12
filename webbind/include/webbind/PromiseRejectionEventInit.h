#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PromiseRejectionEventInit */
DECLARE_EMLITE_TYPE(PromiseRejectionEventInit, EventInit);

/** @brief Getter of the promise property */
jb_Object PromiseRejectionEventInit_promise(const PromiseRejectionEventInit *self);

/** @brief Setter of the promise property */
void PromiseRejectionEventInit_set_promise(PromiseRejectionEventInit* self, jb_Object * value);

/** @brief Getter of the reason property */
jb_Any PromiseRejectionEventInit_reason(const PromiseRejectionEventInit *self);

/** @brief Setter of the reason property */
void PromiseRejectionEventInit_set_reason(PromiseRejectionEventInit* self, jb_Any * value);

/** @brief Constructor of the PromiseRejectionEventInit dictionary type */
PromiseRejectionEventInit PromiseRejectionEventInit_new();

#ifdef __cplusplus
}
#endif
