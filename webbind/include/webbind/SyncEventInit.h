#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SyncEventInit */
DECLARE_EMLITE_TYPE(SyncEventInit, ExtendableEventInit);

/** @brief Getter of the tag property */
jb_String SyncEventInit_tag(const SyncEventInit *self);

/** @brief Setter of the tag property */
void SyncEventInit_set_tag(SyncEventInit* self, jb_String * value);

/** @brief Getter of the lastChance property */
bool SyncEventInit_lastChance(const SyncEventInit *self);

/** @brief Setter of the lastChance property */
void SyncEventInit_set_lastChance(SyncEventInit* self, bool value);

/** @brief Constructor of the SyncEventInit dictionary type */
SyncEventInit SyncEventInit_new();

#ifdef __cplusplus
}
#endif
