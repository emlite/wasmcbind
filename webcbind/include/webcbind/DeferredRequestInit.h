#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RequestInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DeferredRequestInit */
DECLARE_EMLITE_TYPE(DeferredRequestInit, RequestInit);

/** @brief Getter of the activateAfter property */
jb_Any DeferredRequestInit_activateAfter(const DeferredRequestInit *self);

/** @brief Setter of the activateAfter property */
void DeferredRequestInit_set_activateAfter(DeferredRequestInit* self, jb_Any * value);

/** @brief Constructor of the DeferredRequestInit dictionary type */
DeferredRequestInit DeferredRequestInit_new();

#ifdef __cplusplus
}
#endif
