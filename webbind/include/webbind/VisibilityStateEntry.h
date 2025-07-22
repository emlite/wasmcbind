#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"


typedef struct {
  PerformanceEntry inner;
} VisibilityStateEntry;


DECLARE_EMLITE_TYPE(VisibilityStateEntry, PerformanceEntry);

jb_DOMString VisibilityStateEntry_name( const VisibilityStateEntry *self);

jb_DOMString VisibilityStateEntry_entryType( const VisibilityStateEntry *self);

jb_Any VisibilityStateEntry_startTime( const VisibilityStateEntry *self);

unsigned long VisibilityStateEntry_duration( const VisibilityStateEntry *self);
