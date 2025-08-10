#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PerformanceMarkOptions PerformanceMarkOptions;

DECLARE_EMLITE_TYPE(PerformanceMark, PerformanceEntry);

PerformanceMark PerformanceMark_new0(jb_String * markName);

PerformanceMark PerformanceMark_new1(jb_String * markName, PerformanceMarkOptions * markOptions);

jb_Any PerformanceMark_detail(const PerformanceMark *self);

#ifdef __cplusplus
}
#endif
