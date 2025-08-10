#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReportingObserverOptions, em_Val);

jb_Array ReportingObserverOptions_types(const ReportingObserverOptions *self);

void ReportingObserverOptions_set_types(ReportingObserverOptions* self, jb_Array * value);

bool ReportingObserverOptions_buffered(const ReportingObserverOptions *self);

void ReportingObserverOptions_set_buffered(ReportingObserverOptions* self, bool value);

ReportingObserverOptions ReportingObserverOptions_new();

#ifdef __cplusplus
}
#endif
