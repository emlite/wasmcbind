#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PAHistogramContribution, em_Val);

long long PAHistogramContribution_bucket(const PAHistogramContribution *self);

void PAHistogramContribution_set_bucket(PAHistogramContribution* self, long long value);

long PAHistogramContribution_value(const PAHistogramContribution *self);

void PAHistogramContribution_set_value(PAHistogramContribution* self, long value);

long long PAHistogramContribution_filteringId(const PAHistogramContribution *self);

void PAHistogramContribution_set_filteringId(PAHistogramContribution* self, long long value);

PAHistogramContribution PAHistogramContribution_new();

#ifdef __cplusplus
}
#endif
