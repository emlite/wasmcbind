#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PushEventInit */
DECLARE_EMLITE_TYPE(PushEventInit, ExtendableEventInit);

/** @brief Getter of the data property */
jb_Any PushEventInit_data(const PushEventInit *self);

/** @brief Setter of the data property */
void PushEventInit_set_data(PushEventInit* self, jb_Any * value);

/** @brief Constructor of the PushEventInit dictionary type */
PushEventInit PushEventInit_new();

#ifdef __cplusplus
}
#endif
