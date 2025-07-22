#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

typedef struct LayoutShiftAttribution LayoutShiftAttribution;


typedef struct {
  PerformanceEntry inner;
} LayoutShift;


DECLARE_EMLITE_TYPE(LayoutShift, PerformanceEntry);

double LayoutShift_value( const LayoutShift *self);

bool LayoutShift_hadRecentInput( const LayoutShift *self);

jb_Any LayoutShift_lastInputTime( const LayoutShift *self);

jb_FrozenArray LayoutShift_sources( const LayoutShift *self);

jb_Object LayoutShift_toJSON(LayoutShift* self );
