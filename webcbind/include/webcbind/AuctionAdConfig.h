#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuctionReportBuyersConfig.h"
#include "AuctionReportBuyerDebugModeConfig.h"
#include "ProtectedAudiencePrivateAggregationConfig.h"
#include "AuctionRealTimeReportingConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type AuctionAdConfig */
DECLARE_EMLITE_TYPE(AuctionAdConfig, em_Val);

/** @brief Getter of the seller property */
jb_String AuctionAdConfig_seller(const AuctionAdConfig *self);

/** @brief Setter of the seller property */
void AuctionAdConfig_set_seller(AuctionAdConfig* self, jb_String * value);

/** @brief Getter of the decisionLogicURL property */
jb_String AuctionAdConfig_decisionLogicURL(const AuctionAdConfig *self);

/** @brief Setter of the decisionLogicURL property */
void AuctionAdConfig_set_decisionLogicURL(AuctionAdConfig* self, jb_String * value);

/** @brief Getter of the trustedScoringSignalsURL property */
jb_String AuctionAdConfig_trustedScoringSignalsURL(const AuctionAdConfig *self);

/** @brief Setter of the trustedScoringSignalsURL property */
void AuctionAdConfig_set_trustedScoringSignalsURL(AuctionAdConfig* self, jb_String * value);

/** @brief Getter of the maxTrustedScoringSignalsURLLength property */
long AuctionAdConfig_maxTrustedScoringSignalsURLLength(const AuctionAdConfig *self);

/** @brief Setter of the maxTrustedScoringSignalsURLLength property */
void AuctionAdConfig_set_maxTrustedScoringSignalsURLLength(AuctionAdConfig* self, long value);

/** @brief Getter of the trustedScoringSignalsCoordinator property */
jb_String AuctionAdConfig_trustedScoringSignalsCoordinator(const AuctionAdConfig *self);

/** @brief Setter of the trustedScoringSignalsCoordinator property */
void AuctionAdConfig_set_trustedScoringSignalsCoordinator(AuctionAdConfig* self, jb_String * value);

/** @brief Getter of the sendCreativeScanningMetadata property */
bool AuctionAdConfig_sendCreativeScanningMetadata(const AuctionAdConfig *self);

/** @brief Setter of the sendCreativeScanningMetadata property */
void AuctionAdConfig_set_sendCreativeScanningMetadata(AuctionAdConfig* self, bool value);

/** @brief Getter of the interestGroupBuyers property */
jb_Array AuctionAdConfig_interestGroupBuyers(const AuctionAdConfig *self);

/** @brief Setter of the interestGroupBuyers property */
void AuctionAdConfig_set_interestGroupBuyers(AuctionAdConfig* self, jb_Array * value);

/** @brief Getter of the auctionSignals property */
jb_Promise AuctionAdConfig_auctionSignals(const AuctionAdConfig *self);

/** @brief Setter of the auctionSignals property */
void AuctionAdConfig_set_auctionSignals(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the sellerSignals property */
jb_Promise AuctionAdConfig_sellerSignals(const AuctionAdConfig *self);

/** @brief Setter of the sellerSignals property */
void AuctionAdConfig_set_sellerSignals(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the directFromSellerSignalsHeaderAdSlot property */
jb_Promise AuctionAdConfig_directFromSellerSignalsHeaderAdSlot(const AuctionAdConfig *self);

/** @brief Setter of the directFromSellerSignalsHeaderAdSlot property */
void AuctionAdConfig_set_directFromSellerSignalsHeaderAdSlot(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the deprecatedRenderURLReplacements property */
jb_Promise AuctionAdConfig_deprecatedRenderURLReplacements(const AuctionAdConfig *self);

/** @brief Setter of the deprecatedRenderURLReplacements property */
void AuctionAdConfig_set_deprecatedRenderURLReplacements(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the sellerTimeout property */
long long AuctionAdConfig_sellerTimeout(const AuctionAdConfig *self);

/** @brief Setter of the sellerTimeout property */
void AuctionAdConfig_set_sellerTimeout(AuctionAdConfig* self, long long value);

/** @brief Getter of the sellerExperimentGroupId property */
unsigned short AuctionAdConfig_sellerExperimentGroupId(const AuctionAdConfig *self);

/** @brief Setter of the sellerExperimentGroupId property */
void AuctionAdConfig_set_sellerExperimentGroupId(AuctionAdConfig* self, unsigned short value);

/** @brief Getter of the perBuyerSignals property */
jb_Promise AuctionAdConfig_perBuyerSignals(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerSignals property */
void AuctionAdConfig_set_perBuyerSignals(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the perBuyerTimeouts property */
jb_Promise AuctionAdConfig_perBuyerTimeouts(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerTimeouts property */
void AuctionAdConfig_set_perBuyerTimeouts(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the perBuyerCumulativeTimeouts property */
jb_Promise AuctionAdConfig_perBuyerCumulativeTimeouts(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerCumulativeTimeouts property */
void AuctionAdConfig_set_perBuyerCumulativeTimeouts(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the reportingTimeout property */
long long AuctionAdConfig_reportingTimeout(const AuctionAdConfig *self);

/** @brief Setter of the reportingTimeout property */
void AuctionAdConfig_set_reportingTimeout(AuctionAdConfig* self, long long value);

/** @brief Getter of the sellerCurrency property */
jb_String AuctionAdConfig_sellerCurrency(const AuctionAdConfig *self);

/** @brief Setter of the sellerCurrency property */
void AuctionAdConfig_set_sellerCurrency(AuctionAdConfig* self, jb_String * value);

/** @brief Getter of the perBuyerCurrencies property */
jb_Promise AuctionAdConfig_perBuyerCurrencies(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerCurrencies property */
void AuctionAdConfig_set_perBuyerCurrencies(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the perBuyerMultiBidLimits property */
jb_Object AuctionAdConfig_perBuyerMultiBidLimits(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerMultiBidLimits property */
void AuctionAdConfig_set_perBuyerMultiBidLimits(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the perBuyerGroupLimits property */
jb_Object AuctionAdConfig_perBuyerGroupLimits(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerGroupLimits property */
void AuctionAdConfig_set_perBuyerGroupLimits(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the perBuyerExperimentGroupIds property */
jb_Object AuctionAdConfig_perBuyerExperimentGroupIds(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerExperimentGroupIds property */
void AuctionAdConfig_set_perBuyerExperimentGroupIds(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the perBuyerPrioritySignals property */
jb_Object AuctionAdConfig_perBuyerPrioritySignals(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerPrioritySignals property */
void AuctionAdConfig_set_perBuyerPrioritySignals(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the auctionReportBuyerKeys property */
jb_Array AuctionAdConfig_auctionReportBuyerKeys(const AuctionAdConfig *self);

/** @brief Setter of the auctionReportBuyerKeys property */
void AuctionAdConfig_set_auctionReportBuyerKeys(AuctionAdConfig* self, jb_Array * value);

/** @brief Getter of the auctionReportBuyers property */
jb_Object AuctionAdConfig_auctionReportBuyers(const AuctionAdConfig *self);

/** @brief Setter of the auctionReportBuyers property */
void AuctionAdConfig_set_auctionReportBuyers(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the auctionReportBuyerDebugModeConfig property */
AuctionReportBuyerDebugModeConfig AuctionAdConfig_auctionReportBuyerDebugModeConfig(const AuctionAdConfig *self);

/** @brief Setter of the auctionReportBuyerDebugModeConfig property */
void AuctionAdConfig_set_auctionReportBuyerDebugModeConfig(AuctionAdConfig* self, AuctionReportBuyerDebugModeConfig * value);

/** @brief Getter of the requiredSellerCapabilities property */
jb_Array AuctionAdConfig_requiredSellerCapabilities(const AuctionAdConfig *self);

/** @brief Setter of the requiredSellerCapabilities property */
void AuctionAdConfig_set_requiredSellerCapabilities(AuctionAdConfig* self, jb_Array * value);

/** @brief Getter of the privateAggregationConfig property */
ProtectedAudiencePrivateAggregationConfig AuctionAdConfig_privateAggregationConfig(const AuctionAdConfig *self);

/** @brief Setter of the privateAggregationConfig property */
void AuctionAdConfig_set_privateAggregationConfig(AuctionAdConfig* self, ProtectedAudiencePrivateAggregationConfig * value);

/** @brief Getter of the requestedSize property */
jb_Object AuctionAdConfig_requestedSize(const AuctionAdConfig *self);

/** @brief Setter of the requestedSize property */
void AuctionAdConfig_set_requestedSize(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the allSlotsRequestedSizes property */
jb_Array AuctionAdConfig_allSlotsRequestedSizes(const AuctionAdConfig *self);

/** @brief Setter of the allSlotsRequestedSizes property */
void AuctionAdConfig_set_allSlotsRequestedSizes(AuctionAdConfig* self, jb_Array * value);

/** @brief Getter of the additionalBids property */
jb_Promise AuctionAdConfig_additionalBids(const AuctionAdConfig *self);

/** @brief Setter of the additionalBids property */
void AuctionAdConfig_set_additionalBids(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the auctionNonce property */
jb_String AuctionAdConfig_auctionNonce(const AuctionAdConfig *self);

/** @brief Setter of the auctionNonce property */
void AuctionAdConfig_set_auctionNonce(AuctionAdConfig* self, jb_String * value);

/** @brief Getter of the sellerRealTimeReportingConfig property */
AuctionRealTimeReportingConfig AuctionAdConfig_sellerRealTimeReportingConfig(const AuctionAdConfig *self);

/** @brief Setter of the sellerRealTimeReportingConfig property */
void AuctionAdConfig_set_sellerRealTimeReportingConfig(AuctionAdConfig* self, AuctionRealTimeReportingConfig * value);

/** @brief Getter of the perBuyerRealTimeReportingConfig property */
jb_Object AuctionAdConfig_perBuyerRealTimeReportingConfig(const AuctionAdConfig *self);

/** @brief Setter of the perBuyerRealTimeReportingConfig property */
void AuctionAdConfig_set_perBuyerRealTimeReportingConfig(AuctionAdConfig* self, jb_Object * value);

/** @brief Getter of the componentAuctions property */
jb_Array AuctionAdConfig_componentAuctions(const AuctionAdConfig *self);

/** @brief Setter of the componentAuctions property */
void AuctionAdConfig_set_componentAuctions(AuctionAdConfig* self, jb_Array * value);

/** @brief Getter of the signal property */
AbortSignal AuctionAdConfig_signal(const AuctionAdConfig *self);

/** @brief Setter of the signal property */
void AuctionAdConfig_set_signal(AuctionAdConfig* self, AbortSignal * value);

/** @brief Getter of the resolveToConfig property */
jb_Promise AuctionAdConfig_resolveToConfig(const AuctionAdConfig *self);

/** @brief Setter of the resolveToConfig property */
void AuctionAdConfig_set_resolveToConfig(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the serverResponse property */
jb_Promise AuctionAdConfig_serverResponse(const AuctionAdConfig *self);

/** @brief Setter of the serverResponse property */
void AuctionAdConfig_set_serverResponse(AuctionAdConfig* self, jb_Promise * value);

/** @brief Getter of the requestId property */
jb_String AuctionAdConfig_requestId(const AuctionAdConfig *self);

/** @brief Setter of the requestId property */
void AuctionAdConfig_set_requestId(AuctionAdConfig* self, jb_String * value);

/** @brief Constructor of the AuctionAdConfig dictionary type */
AuctionAdConfig AuctionAdConfig_new();

#ifdef __cplusplus
}
#endif
