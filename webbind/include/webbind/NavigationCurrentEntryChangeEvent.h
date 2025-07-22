#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct NavigationHistoryEntry NavigationHistoryEntry;


typedef struct {
  Event inner;
} NavigationCurrentEntryChangeEvent;


DECLARE_EMLITE_TYPE(NavigationCurrentEntryChangeEvent, Event);

NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

NavigationType NavigationCurrentEntryChangeEvent_navigationType( const NavigationCurrentEntryChangeEvent *self);

NavigationHistoryEntry NavigationCurrentEntryChangeEvent_from( const NavigationCurrentEntryChangeEvent *self);
