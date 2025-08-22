#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ReportingBrowserSignals.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReportWinBrowserSignals */
DECLARE_EMLITE_TYPE(ReportWinBrowserSignals, ReportingBrowserSignals);

/** @brief Getter of the adCost property */
double ReportWinBrowserSignals_adCost(const ReportWinBrowserSignals *self);

/** @brief Setter of the adCost property */
void ReportWinBrowserSignals_set_adCost(ReportWinBrowserSignals* self, double value);

/** @brief Getter of the seller property */
jb_String ReportWinBrowserSignals_seller(const ReportWinBrowserSignals *self);

/** @brief Setter of the seller property */
void ReportWinBrowserSignals_set_seller(ReportWinBrowserSignals* self, jb_String * value);

/** @brief Getter of the madeHighestScoringOtherBid property */
bool ReportWinBrowserSignals_madeHighestScoringOtherBid(const ReportWinBrowserSignals *self);

/** @brief Setter of the madeHighestScoringOtherBid property */
void ReportWinBrowserSignals_set_madeHighestScoringOtherBid(ReportWinBrowserSignals* self, bool value);

/** @brief Getter of the interestGroupName property */
jb_String ReportWinBrowserSignals_interestGroupName(const ReportWinBrowserSignals *self);

/** @brief Setter of the interestGroupName property */
void ReportWinBrowserSignals_set_interestGroupName(ReportWinBrowserSignals* self, jb_String * value);

/** @brief Getter of the buyerReportingId property */
jb_String ReportWinBrowserSignals_buyerReportingId(const ReportWinBrowserSignals *self);

/** @brief Setter of the buyerReportingId property */
void ReportWinBrowserSignals_set_buyerReportingId(ReportWinBrowserSignals* self, jb_String * value);

/** @brief Getter of the modelingSignals property */
unsigned short ReportWinBrowserSignals_modelingSignals(const ReportWinBrowserSignals *self);

/** @brief Setter of the modelingSignals property */
void ReportWinBrowserSignals_set_modelingSignals(ReportWinBrowserSignals* self, unsigned short value);

/** @brief Getter of the dataVersion property */
unsigned long ReportWinBrowserSignals_dataVersion(const ReportWinBrowserSignals *self);

/** @brief Setter of the dataVersion property */
void ReportWinBrowserSignals_set_dataVersion(ReportWinBrowserSignals* self, unsigned long value);

/** @brief Getter of the kAnonStatus property */
KAnonStatus ReportWinBrowserSignals_kAnonStatus(const ReportWinBrowserSignals *self);

/** @brief Setter of the kAnonStatus property */
void ReportWinBrowserSignals_set_kAnonStatus(ReportWinBrowserSignals* self, KAnonStatus * value);

/** @brief Constructor of the ReportWinBrowserSignals dictionary type */
ReportWinBrowserSignals ReportWinBrowserSignals_new();

#ifdef __cplusplus
}
#endif
