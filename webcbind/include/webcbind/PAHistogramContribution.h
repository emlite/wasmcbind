#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PAHistogramContribution */
DECLARE_EMLITE_TYPE(PAHistogramContribution, em_Val);

/** @brief Getter of the bucket property */
long long PAHistogramContribution_bucket(const PAHistogramContribution *self);

/** @brief Setter of the bucket property */
void PAHistogramContribution_set_bucket(PAHistogramContribution* self, long long value);

/** @brief Getter of the value property */
long PAHistogramContribution_value(const PAHistogramContribution *self);

/** @brief Setter of the value property */
void PAHistogramContribution_set_value(PAHistogramContribution* self, long value);

/** @brief Getter of the filteringId property */
long long PAHistogramContribution_filteringId(const PAHistogramContribution *self);

/** @brief Setter of the filteringId property */
void PAHistogramContribution_set_filteringId(PAHistogramContribution* self, long long value);

/** @brief Constructor of the PAHistogramContribution dictionary type */
PAHistogramContribution PAHistogramContribution_new();

#ifdef __cplusplus
}
#endif
