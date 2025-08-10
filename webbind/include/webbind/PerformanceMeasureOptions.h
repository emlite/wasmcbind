#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PerformanceMeasureOptions, em_Val);

jb_Any PerformanceMeasureOptions_detail(const PerformanceMeasureOptions *self);

void PerformanceMeasureOptions_set_detail(PerformanceMeasureOptions* self, jb_Any * value);

jb_Any PerformanceMeasureOptions_start(const PerformanceMeasureOptions *self);

void PerformanceMeasureOptions_set_start(PerformanceMeasureOptions* self, jb_Any * value);

jb_Any PerformanceMeasureOptions_duration(const PerformanceMeasureOptions *self);

void PerformanceMeasureOptions_set_duration(PerformanceMeasureOptions* self, jb_Any * value);

jb_Any PerformanceMeasureOptions_end(const PerformanceMeasureOptions *self);

void PerformanceMeasureOptions_set_end(PerformanceMeasureOptions* self, jb_Any * value);

PerformanceMeasureOptions PerformanceMeasureOptions_new();

#ifdef __cplusplus
}
#endif
