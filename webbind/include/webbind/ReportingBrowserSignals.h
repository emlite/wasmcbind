#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReportingBrowserSignals, em_Val);

jb_String ReportingBrowserSignals_topWindowHostname(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_topWindowHostname(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_interestGroupOwner(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_interestGroupOwner(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_renderURL(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_renderURL(ReportingBrowserSignals* self, jb_String * value);

double ReportingBrowserSignals_bid(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_bid(ReportingBrowserSignals* self, double value);

double ReportingBrowserSignals_highestScoringOtherBid(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_highestScoringOtherBid(ReportingBrowserSignals* self, double value);

jb_String ReportingBrowserSignals_bidCurrency(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_bidCurrency(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_highestScoringOtherBidCurrency(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_highestScoringOtherBidCurrency(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_topLevelSeller(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_topLevelSeller(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_componentSeller(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_componentSeller(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_buyerAndSellerReportingId(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_buyerAndSellerReportingId(ReportingBrowserSignals* self, jb_String * value);

jb_String ReportingBrowserSignals_selectedBuyerAndSellerReportingId(const ReportingBrowserSignals *self);

void ReportingBrowserSignals_set_selectedBuyerAndSellerReportingId(ReportingBrowserSignals* self, jb_String * value);

ReportingBrowserSignals ReportingBrowserSignals_new();

#ifdef __cplusplus
}
#endif
