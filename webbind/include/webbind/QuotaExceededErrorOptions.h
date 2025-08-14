#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type QuotaExceededErrorOptions */
DECLARE_EMLITE_TYPE(QuotaExceededErrorOptions, em_Val);

/** @brief Getter of the quota property */
double QuotaExceededErrorOptions_quota(const QuotaExceededErrorOptions *self);

/** @brief Setter of the quota property */
void QuotaExceededErrorOptions_set_quota(QuotaExceededErrorOptions* self, double value);

/** @brief Getter of the requested property */
double QuotaExceededErrorOptions_requested(const QuotaExceededErrorOptions *self);

/** @brief Setter of the requested property */
void QuotaExceededErrorOptions_set_requested(QuotaExceededErrorOptions* self, double value);

/** @brief Constructor of the QuotaExceededErrorOptions dictionary type */
QuotaExceededErrorOptions QuotaExceededErrorOptions_new();

#ifdef __cplusplus
}
#endif
