#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RealTimeContribution, em_Val);

long RealTimeContribution_bucket(const RealTimeContribution *self);

void RealTimeContribution_set_bucket(RealTimeContribution* self, long value);

double RealTimeContribution_priorityWeight(const RealTimeContribution *self);

void RealTimeContribution_set_priorityWeight(RealTimeContribution* self, double value);

long RealTimeContribution_latencyThreshold(const RealTimeContribution *self);

void RealTimeContribution_set_latencyThreshold(RealTimeContribution* self, long value);

RealTimeContribution RealTimeContribution_new();

#ifdef __cplusplus
}
#endif
