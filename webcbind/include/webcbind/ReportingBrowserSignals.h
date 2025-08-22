#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReportingBrowserSignals */
DECLARE_EMLITE_TYPE(ReportingBrowserSignals, em_Val);

/** @brief Getter of the topWindowHostname property */
jb_String ReportingBrowserSignals_topWindowHostname(const ReportingBrowserSignals *self);

/** @brief Setter of the topWindowHostname property */
void ReportingBrowserSignals_set_topWindowHostname(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the interestGroupOwner property */
jb_String ReportingBrowserSignals_interestGroupOwner(const ReportingBrowserSignals *self);

/** @brief Setter of the interestGroupOwner property */
void ReportingBrowserSignals_set_interestGroupOwner(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the renderURL property */
jb_String ReportingBrowserSignals_renderURL(const ReportingBrowserSignals *self);

/** @brief Setter of the renderURL property */
void ReportingBrowserSignals_set_renderURL(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the bid property */
double ReportingBrowserSignals_bid(const ReportingBrowserSignals *self);

/** @brief Setter of the bid property */
void ReportingBrowserSignals_set_bid(ReportingBrowserSignals* self, double value);

/** @brief Getter of the highestScoringOtherBid property */
double ReportingBrowserSignals_highestScoringOtherBid(const ReportingBrowserSignals *self);

/** @brief Setter of the highestScoringOtherBid property */
void ReportingBrowserSignals_set_highestScoringOtherBid(ReportingBrowserSignals* self, double value);

/** @brief Getter of the bidCurrency property */
jb_String ReportingBrowserSignals_bidCurrency(const ReportingBrowserSignals *self);

/** @brief Setter of the bidCurrency property */
void ReportingBrowserSignals_set_bidCurrency(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the highestScoringOtherBidCurrency property */
jb_String ReportingBrowserSignals_highestScoringOtherBidCurrency(const ReportingBrowserSignals *self);

/** @brief Setter of the highestScoringOtherBidCurrency property */
void ReportingBrowserSignals_set_highestScoringOtherBidCurrency(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the topLevelSeller property */
jb_String ReportingBrowserSignals_topLevelSeller(const ReportingBrowserSignals *self);

/** @brief Setter of the topLevelSeller property */
void ReportingBrowserSignals_set_topLevelSeller(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the componentSeller property */
jb_String ReportingBrowserSignals_componentSeller(const ReportingBrowserSignals *self);

/** @brief Setter of the componentSeller property */
void ReportingBrowserSignals_set_componentSeller(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the buyerAndSellerReportingId property */
jb_String ReportingBrowserSignals_buyerAndSellerReportingId(const ReportingBrowserSignals *self);

/** @brief Setter of the buyerAndSellerReportingId property */
void ReportingBrowserSignals_set_buyerAndSellerReportingId(ReportingBrowserSignals* self, jb_String * value);

/** @brief Getter of the selectedBuyerAndSellerReportingId property */
jb_String ReportingBrowserSignals_selectedBuyerAndSellerReportingId(const ReportingBrowserSignals *self);

/** @brief Setter of the selectedBuyerAndSellerReportingId property */
void ReportingBrowserSignals_set_selectedBuyerAndSellerReportingId(ReportingBrowserSignals* self, jb_String * value);

/** @brief Constructor of the ReportingBrowserSignals dictionary type */
ReportingBrowserSignals ReportingBrowserSignals_new();

#ifdef __cplusplus
}
#endif
