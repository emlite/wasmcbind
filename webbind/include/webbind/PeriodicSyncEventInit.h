#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PeriodicSyncEventInit */
DECLARE_EMLITE_TYPE(PeriodicSyncEventInit, ExtendableEventInit);

/** @brief Getter of the tag property */
jb_String PeriodicSyncEventInit_tag(const PeriodicSyncEventInit *self);

/** @brief Setter of the tag property */
void PeriodicSyncEventInit_set_tag(PeriodicSyncEventInit* self, jb_String * value);

/** @brief Constructor of the PeriodicSyncEventInit dictionary type */
PeriodicSyncEventInit PeriodicSyncEventInit_new();

#ifdef __cplusplus
}
#endif
