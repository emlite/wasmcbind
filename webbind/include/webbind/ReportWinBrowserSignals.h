#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReportingBrowserSignals.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReportWinBrowserSignals, ReportingBrowserSignals);

double ReportWinBrowserSignals_adCost(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_adCost(ReportWinBrowserSignals* self, double value);

jb_String ReportWinBrowserSignals_seller(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_seller(ReportWinBrowserSignals* self, jb_String * value);

bool ReportWinBrowserSignals_madeHighestScoringOtherBid(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_madeHighestScoringOtherBid(ReportWinBrowserSignals* self, bool value);

jb_String ReportWinBrowserSignals_interestGroupName(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_interestGroupName(ReportWinBrowserSignals* self, jb_String * value);

jb_String ReportWinBrowserSignals_buyerReportingId(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_buyerReportingId(ReportWinBrowserSignals* self, jb_String * value);

unsigned short ReportWinBrowserSignals_modelingSignals(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_modelingSignals(ReportWinBrowserSignals* self, unsigned short value);

unsigned long ReportWinBrowserSignals_dataVersion(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_dataVersion(ReportWinBrowserSignals* self, unsigned long value);

KAnonStatus ReportWinBrowserSignals_kAnonStatus(const ReportWinBrowserSignals *self);

void ReportWinBrowserSignals_set_kAnonStatus(ReportWinBrowserSignals* self, KAnonStatus * value);

ReportWinBrowserSignals ReportWinBrowserSignals_new();

#ifdef __cplusplus
}
#endif
