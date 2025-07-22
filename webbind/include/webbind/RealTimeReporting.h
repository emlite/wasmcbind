#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct RealTimeContribution RealTimeContribution;


typedef struct {
  em_Val inner;
} RealTimeContribution;


DECLARE_EMLITE_TYPE(RealTimeContribution, em_Val);

long RealTimeContribution_bucket( const RealTimeContribution *self);

void RealTimeContribution_set_bucket(RealTimeContribution* self, long value);

double RealTimeContribution_priorityWeight( const RealTimeContribution *self);

void RealTimeContribution_set_priorityWeight(RealTimeContribution* self, double value);

long RealTimeContribution_latencyThreshold( const RealTimeContribution *self);

void RealTimeContribution_set_latencyThreshold(RealTimeContribution* self, long value);
typedef struct {
  em_Val inner;
} RealTimeReporting;


DECLARE_EMLITE_TYPE(RealTimeReporting, em_Val);

jb_Undefined RealTimeReporting_contributeToHistogram(RealTimeReporting* self , const RealTimeContribution* contribution);
