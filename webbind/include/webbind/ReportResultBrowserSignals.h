#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportingBrowserSignals.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReportResultBrowserSignals */
DECLARE_EMLITE_TYPE(ReportResultBrowserSignals, ReportingBrowserSignals);

/** @brief Getter of the desirability property */
double ReportResultBrowserSignals_desirability(const ReportResultBrowserSignals *self);

/** @brief Setter of the desirability property */
void ReportResultBrowserSignals_set_desirability(ReportResultBrowserSignals* self, double value);

/** @brief Getter of the topLevelSellerSignals property */
jb_String ReportResultBrowserSignals_topLevelSellerSignals(const ReportResultBrowserSignals *self);

/** @brief Setter of the topLevelSellerSignals property */
void ReportResultBrowserSignals_set_topLevelSellerSignals(ReportResultBrowserSignals* self, jb_String * value);

/** @brief Getter of the modifiedBid property */
double ReportResultBrowserSignals_modifiedBid(const ReportResultBrowserSignals *self);

/** @brief Setter of the modifiedBid property */
void ReportResultBrowserSignals_set_modifiedBid(ReportResultBrowserSignals* self, double value);

/** @brief Getter of the dataVersion property */
unsigned long ReportResultBrowserSignals_dataVersion(const ReportResultBrowserSignals *self);

/** @brief Setter of the dataVersion property */
void ReportResultBrowserSignals_set_dataVersion(ReportResultBrowserSignals* self, unsigned long value);

/** @brief Constructor of the ReportResultBrowserSignals dictionary type */
ReportResultBrowserSignals ReportResultBrowserSignals_new();

#ifdef __cplusplus
}
#endif
