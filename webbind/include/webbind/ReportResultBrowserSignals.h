#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportingBrowserSignals.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReportResultBrowserSignals, ReportingBrowserSignals);

double ReportResultBrowserSignals_desirability(const ReportResultBrowserSignals *self);

void ReportResultBrowserSignals_set_desirability(ReportResultBrowserSignals* self, double value);

jb_String ReportResultBrowserSignals_topLevelSellerSignals(const ReportResultBrowserSignals *self);

void ReportResultBrowserSignals_set_topLevelSellerSignals(ReportResultBrowserSignals* self, jb_String * value);

double ReportResultBrowserSignals_modifiedBid(const ReportResultBrowserSignals *self);

void ReportResultBrowserSignals_set_modifiedBid(ReportResultBrowserSignals* self, double value);

unsigned long ReportResultBrowserSignals_dataVersion(const ReportResultBrowserSignals *self);

void ReportResultBrowserSignals_set_dataVersion(ReportResultBrowserSignals* self, unsigned long value);

ReportResultBrowserSignals ReportResultBrowserSignals_new();

#ifdef __cplusplus
}
#endif
