#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;

DECLARE_EMLITE_TYPE(NavigationResult, em_Val);

jb_Promise NavigationResult_committed(const NavigationResult *self);

void NavigationResult_set_committed(NavigationResult* self, jb_Promise * value);

jb_Promise NavigationResult_finished(const NavigationResult *self);

void NavigationResult_set_finished(NavigationResult* self, jb_Promise * value);

NavigationResult NavigationResult_new();

#ifdef __cplusplus
}
#endif
