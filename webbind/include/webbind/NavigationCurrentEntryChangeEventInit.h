#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;

DECLARE_EMLITE_TYPE(NavigationCurrentEntryChangeEventInit, EventInit);

NavigationType NavigationCurrentEntryChangeEventInit_navigationType(const NavigationCurrentEntryChangeEventInit *self);

void NavigationCurrentEntryChangeEventInit_set_navigationType(NavigationCurrentEntryChangeEventInit* self, NavigationType * value);

NavigationHistoryEntry NavigationCurrentEntryChangeEventInit_from(const NavigationCurrentEntryChangeEventInit *self);

void NavigationCurrentEntryChangeEventInit_set_from(NavigationCurrentEntryChangeEventInit* self, NavigationHistoryEntry * value);

NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit_new();

#ifdef __cplusplus
}
#endif
