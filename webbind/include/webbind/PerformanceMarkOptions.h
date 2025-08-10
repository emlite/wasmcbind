#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);

jb_Any PerformanceMarkOptions_detail(const PerformanceMarkOptions *self);

void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, jb_Any * value);

jb_Any PerformanceMarkOptions_startTime(const PerformanceMarkOptions *self);

void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, jb_Any * value);

PerformanceMarkOptions PerformanceMarkOptions_new();

#ifdef __cplusplus
}
#endif
