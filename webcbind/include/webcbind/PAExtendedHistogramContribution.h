#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PAExtendedHistogramContribution */
DECLARE_EMLITE_TYPE(PAExtendedHistogramContribution, em_Val);

/** @brief Getter of the bucket property */
jb_Any PAExtendedHistogramContribution_bucket(const PAExtendedHistogramContribution *self);

/** @brief Setter of the bucket property */
void PAExtendedHistogramContribution_set_bucket(PAExtendedHistogramContribution* self, jb_Any * value);

/** @brief Getter of the value property */
jb_Any PAExtendedHistogramContribution_value(const PAExtendedHistogramContribution *self);

/** @brief Setter of the value property */
void PAExtendedHistogramContribution_set_value(PAExtendedHistogramContribution* self, jb_Any * value);

/** @brief Getter of the filteringId property */
long long PAExtendedHistogramContribution_filteringId(const PAExtendedHistogramContribution *self);

/** @brief Setter of the filteringId property */
void PAExtendedHistogramContribution_set_filteringId(PAExtendedHistogramContribution* self, long long value);

/** @brief Constructor of the PAExtendedHistogramContribution dictionary type */
PAExtendedHistogramContribution PAExtendedHistogramContribution_new();

#ifdef __cplusplus
}
#endif
