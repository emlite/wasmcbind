#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit;
typedef struct NavigationHistoryEntry NavigationHistoryEntry;

DECLARE_EMLITE_TYPE(NavigationCurrentEntryChangeEvent, Event);

NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent_new(jb_String * type, NavigationCurrentEntryChangeEventInit * eventInitDict);

NavigationType NavigationCurrentEntryChangeEvent_navigationType(const NavigationCurrentEntryChangeEvent *self);

NavigationHistoryEntry NavigationCurrentEntryChangeEvent_from(const NavigationCurrentEntryChangeEvent *self);

#ifdef __cplusplus
}
#endif
