#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

typedef struct PerformanceMarkOptions PerformanceMarkOptions;


typedef struct {
  PerformanceEntry inner;
} PerformanceMark;


DECLARE_EMLITE_TYPE(PerformanceMark, PerformanceEntry);

PerformanceMark PerformanceMark_new(const jb_DOMString* markName);

PerformanceMark PerformanceMark_new(const jb_DOMString* markName, const PerformanceMarkOptions* markOptions);

jb_Any PerformanceMark_detail( const PerformanceMark *self);
