#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PerformanceMeasure, PerformanceEntry);

jb_Any PerformanceMeasure_detail(const PerformanceMeasure *self);

#ifdef __cplusplus
}
#endif
