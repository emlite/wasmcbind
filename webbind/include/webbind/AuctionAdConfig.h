#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuctionReportBuyersConfig.h"
#include "AuctionReportBuyerDebugModeConfig.h"
#include "ProtectedAudiencePrivateAggregationConfig.h"
#include "AuctionRealTimeReportingConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(AuctionAdConfig, em_Val);

jb_String AuctionAdConfig_seller(const AuctionAdConfig *self);

void AuctionAdConfig_set_seller(AuctionAdConfig* self, jb_String * value);

jb_String AuctionAdConfig_decisionLogicURL(const AuctionAdConfig *self);

void AuctionAdConfig_set_decisionLogicURL(AuctionAdConfig* self, jb_String * value);

jb_String AuctionAdConfig_trustedScoringSignalsURL(const AuctionAdConfig *self);

void AuctionAdConfig_set_trustedScoringSignalsURL(AuctionAdConfig* self, jb_String * value);

long AuctionAdConfig_maxTrustedScoringSignalsURLLength(const AuctionAdConfig *self);

void AuctionAdConfig_set_maxTrustedScoringSignalsURLLength(AuctionAdConfig* self, long value);

jb_String AuctionAdConfig_trustedScoringSignalsCoordinator(const AuctionAdConfig *self);

void AuctionAdConfig_set_trustedScoringSignalsCoordinator(AuctionAdConfig* self, jb_String * value);

bool AuctionAdConfig_sendCreativeScanningMetadata(const AuctionAdConfig *self);

void AuctionAdConfig_set_sendCreativeScanningMetadata(AuctionAdConfig* self, bool value);

jb_Array AuctionAdConfig_interestGroupBuyers(const AuctionAdConfig *self);

void AuctionAdConfig_set_interestGroupBuyers(AuctionAdConfig* self, jb_Array * value);

jb_Promise AuctionAdConfig_auctionSignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionSignals(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_sellerSignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerSignals(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_directFromSellerSignalsHeaderAdSlot(const AuctionAdConfig *self);

void AuctionAdConfig_set_directFromSellerSignalsHeaderAdSlot(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_deprecatedRenderURLReplacements(const AuctionAdConfig *self);

void AuctionAdConfig_set_deprecatedRenderURLReplacements(AuctionAdConfig* self, jb_Promise * value);

long long AuctionAdConfig_sellerTimeout(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerTimeout(AuctionAdConfig* self, long long value);

unsigned short AuctionAdConfig_sellerExperimentGroupId(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerExperimentGroupId(AuctionAdConfig* self, unsigned short value);

jb_Promise AuctionAdConfig_perBuyerSignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerSignals(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_perBuyerTimeouts(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerTimeouts(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_perBuyerCumulativeTimeouts(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerCumulativeTimeouts(AuctionAdConfig* self, jb_Promise * value);

long long AuctionAdConfig_reportingTimeout(const AuctionAdConfig *self);

void AuctionAdConfig_set_reportingTimeout(AuctionAdConfig* self, long long value);

jb_String AuctionAdConfig_sellerCurrency(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerCurrency(AuctionAdConfig* self, jb_String * value);

jb_Promise AuctionAdConfig_perBuyerCurrencies(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerCurrencies(AuctionAdConfig* self, jb_Promise * value);

jb_Object AuctionAdConfig_perBuyerMultiBidLimits(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerMultiBidLimits(AuctionAdConfig* self, jb_Object * value);

jb_Object AuctionAdConfig_perBuyerGroupLimits(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerGroupLimits(AuctionAdConfig* self, jb_Object * value);

jb_Object AuctionAdConfig_perBuyerExperimentGroupIds(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerExperimentGroupIds(AuctionAdConfig* self, jb_Object * value);

jb_Object AuctionAdConfig_perBuyerPrioritySignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerPrioritySignals(AuctionAdConfig* self, jb_Object * value);

jb_Array AuctionAdConfig_auctionReportBuyerKeys(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionReportBuyerKeys(AuctionAdConfig* self, jb_Array * value);

jb_Object AuctionAdConfig_auctionReportBuyers(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionReportBuyers(AuctionAdConfig* self, jb_Object * value);

AuctionReportBuyerDebugModeConfig AuctionAdConfig_auctionReportBuyerDebugModeConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionReportBuyerDebugModeConfig(AuctionAdConfig* self, AuctionReportBuyerDebugModeConfig * value);

jb_Array AuctionAdConfig_requiredSellerCapabilities(const AuctionAdConfig *self);

void AuctionAdConfig_set_requiredSellerCapabilities(AuctionAdConfig* self, jb_Array * value);

ProtectedAudiencePrivateAggregationConfig AuctionAdConfig_privateAggregationConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_privateAggregationConfig(AuctionAdConfig* self, ProtectedAudiencePrivateAggregationConfig * value);

jb_Object AuctionAdConfig_requestedSize(const AuctionAdConfig *self);

void AuctionAdConfig_set_requestedSize(AuctionAdConfig* self, jb_Object * value);

jb_Array AuctionAdConfig_allSlotsRequestedSizes(const AuctionAdConfig *self);

void AuctionAdConfig_set_allSlotsRequestedSizes(AuctionAdConfig* self, jb_Array * value);

jb_Promise AuctionAdConfig_additionalBids(const AuctionAdConfig *self);

void AuctionAdConfig_set_additionalBids(AuctionAdConfig* self, jb_Promise * value);

jb_String AuctionAdConfig_auctionNonce(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionNonce(AuctionAdConfig* self, jb_String * value);

AuctionRealTimeReportingConfig AuctionAdConfig_sellerRealTimeReportingConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerRealTimeReportingConfig(AuctionAdConfig* self, AuctionRealTimeReportingConfig * value);

jb_Object AuctionAdConfig_perBuyerRealTimeReportingConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerRealTimeReportingConfig(AuctionAdConfig* self, jb_Object * value);

jb_Array AuctionAdConfig_componentAuctions(const AuctionAdConfig *self);

void AuctionAdConfig_set_componentAuctions(AuctionAdConfig* self, jb_Array * value);

AbortSignal AuctionAdConfig_signal(const AuctionAdConfig *self);

void AuctionAdConfig_set_signal(AuctionAdConfig* self, AbortSignal * value);

jb_Promise AuctionAdConfig_resolveToConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_resolveToConfig(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_serverResponse(const AuctionAdConfig *self);

void AuctionAdConfig_set_serverResponse(AuctionAdConfig* self, jb_Promise * value);

jb_String AuctionAdConfig_requestId(const AuctionAdConfig *self);

void AuctionAdConfig_set_requestId(AuctionAdConfig* self, jb_String * value);

AuctionAdConfig AuctionAdConfig_new();

#ifdef __cplusplus
}
#endif
