#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;

/** @brief Dictionary type NavigationResult */
DECLARE_EMLITE_TYPE(NavigationResult, em_Val);

/** @brief Getter of the committed property */
jb_Promise NavigationResult_committed(const NavigationResult *self);

/** @brief Setter of the committed property */
void NavigationResult_set_committed(NavigationResult* self, jb_Promise * value);

/** @brief Getter of the finished property */
jb_Promise NavigationResult_finished(const NavigationResult *self);

/** @brief Setter of the finished property */
void NavigationResult_set_finished(NavigationResult* self, jb_Promise * value);

/** @brief Constructor of the NavigationResult dictionary type */
NavigationResult NavigationResult_new();

#ifdef __cplusplus
}
#endif
