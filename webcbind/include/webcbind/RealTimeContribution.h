#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RealTimeContribution */
DECLARE_EMLITE_TYPE(RealTimeContribution, em_Val);

/** @brief Getter of the bucket property */
long RealTimeContribution_bucket(const RealTimeContribution *self);

/** @brief Setter of the bucket property */
void RealTimeContribution_set_bucket(RealTimeContribution* self, long value);

/** @brief Getter of the priorityWeight property */
double RealTimeContribution_priorityWeight(const RealTimeContribution *self);

/** @brief Setter of the priorityWeight property */
void RealTimeContribution_set_priorityWeight(RealTimeContribution* self, double value);

/** @brief Getter of the latencyThreshold property */
long RealTimeContribution_latencyThreshold(const RealTimeContribution *self);

/** @brief Setter of the latencyThreshold property */
void RealTimeContribution_set_latencyThreshold(RealTimeContribution* self, long value);

/** @brief Constructor of the RealTimeContribution dictionary type */
RealTimeContribution RealTimeContribution_new();

#ifdef __cplusplus
}
#endif
