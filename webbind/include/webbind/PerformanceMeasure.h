#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"


typedef struct {
  PerformanceEntry inner;
} PerformanceMeasure;


DECLARE_EMLITE_TYPE(PerformanceMeasure, PerformanceEntry);

jb_Any PerformanceMeasure_detail( const PerformanceMeasure *self);
