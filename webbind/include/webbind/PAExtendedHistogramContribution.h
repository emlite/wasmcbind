#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PAExtendedHistogramContribution, em_Val);

jb_Any PAExtendedHistogramContribution_bucket(const PAExtendedHistogramContribution *self);

void PAExtendedHistogramContribution_set_bucket(PAExtendedHistogramContribution* self, jb_Any * value);

jb_Any PAExtendedHistogramContribution_value(const PAExtendedHistogramContribution *self);

void PAExtendedHistogramContribution_set_value(PAExtendedHistogramContribution* self, jb_Any * value);

long long PAExtendedHistogramContribution_filteringId(const PAExtendedHistogramContribution *self);

void PAExtendedHistogramContribution_set_filteringId(PAExtendedHistogramContribution* self, long long value);

PAExtendedHistogramContribution PAExtendedHistogramContribution_new();

#ifdef __cplusplus
}
#endif
