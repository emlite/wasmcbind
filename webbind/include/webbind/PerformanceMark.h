#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

typedef struct PerformanceMarkOptions PerformanceMarkOptions;


DECLARE_EMLITE_TYPE(PerformanceMark, PerformanceEntry);

PerformanceMark PerformanceMark_new0(jb_DOMString * markName);

PerformanceMark PerformanceMark_new1(jb_DOMString * markName, PerformanceMarkOptions * markOptions);

jb_Any PerformanceMark_detail(const PerformanceMark *self);
