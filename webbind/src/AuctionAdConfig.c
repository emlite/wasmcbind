#include <webbind/AuctionAdConfig.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(AuctionAdConfig, em_Val);


jb_String AuctionAdConfig_seller(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void AuctionAdConfig_set_seller(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


jb_String AuctionAdConfig_decisionLogicURL(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("decisionLogicURL")));
}


void AuctionAdConfig_set_decisionLogicURL(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("decisionLogicURL"), em_Val_from(value));
}


jb_String AuctionAdConfig_trustedScoringSignalsURL(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsURL")));
}


void AuctionAdConfig_set_trustedScoringSignalsURL(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsURL"), em_Val_from(value));
}


long AuctionAdConfig_maxTrustedScoringSignalsURLLength(const AuctionAdConfig *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTrustedScoringSignalsURLLength")));
}


void AuctionAdConfig_set_maxTrustedScoringSignalsURLLength(AuctionAdConfig* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxTrustedScoringSignalsURLLength"), em_Val_from(value));
}


jb_String AuctionAdConfig_trustedScoringSignalsCoordinator(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsCoordinator")));
}


void AuctionAdConfig_set_trustedScoringSignalsCoordinator(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsCoordinator"), em_Val_from(value));
}


bool AuctionAdConfig_sendCreativeScanningMetadata(const AuctionAdConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sendCreativeScanningMetadata")));
}


void AuctionAdConfig_set_sendCreativeScanningMetadata(AuctionAdConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sendCreativeScanningMetadata"), em_Val_from(value));
}


jb_Array AuctionAdConfig_interestGroupBuyers(const AuctionAdConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interestGroupBuyers")));
}


void AuctionAdConfig_set_interestGroupBuyers(AuctionAdConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("interestGroupBuyers"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_auctionSignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionSignals")));
}


void AuctionAdConfig_set_auctionSignals(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionSignals"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_sellerSignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerSignals")));
}


void AuctionAdConfig_set_sellerSignals(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerSignals"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_directFromSellerSignalsHeaderAdSlot(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("directFromSellerSignalsHeaderAdSlot")));
}


void AuctionAdConfig_set_directFromSellerSignalsHeaderAdSlot(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("directFromSellerSignalsHeaderAdSlot"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_deprecatedRenderURLReplacements(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deprecatedRenderURLReplacements")));
}


void AuctionAdConfig_set_deprecatedRenderURLReplacements(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("deprecatedRenderURLReplacements"), em_Val_from(value));
}


long long AuctionAdConfig_sellerTimeout(const AuctionAdConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerTimeout")));
}


void AuctionAdConfig_set_sellerTimeout(AuctionAdConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerTimeout"), em_Val_from(value));
}


unsigned short AuctionAdConfig_sellerExperimentGroupId(const AuctionAdConfig *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerExperimentGroupId")));
}


void AuctionAdConfig_set_sellerExperimentGroupId(AuctionAdConfig* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerExperimentGroupId"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_perBuyerSignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerSignals")));
}


void AuctionAdConfig_set_perBuyerSignals(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerSignals"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_perBuyerTimeouts(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerTimeouts")));
}


void AuctionAdConfig_set_perBuyerTimeouts(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerTimeouts"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_perBuyerCumulativeTimeouts(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerCumulativeTimeouts")));
}


void AuctionAdConfig_set_perBuyerCumulativeTimeouts(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerCumulativeTimeouts"), em_Val_from(value));
}


long long AuctionAdConfig_reportingTimeout(const AuctionAdConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reportingTimeout")));
}


void AuctionAdConfig_set_reportingTimeout(AuctionAdConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reportingTimeout"), em_Val_from(value));
}


jb_String AuctionAdConfig_sellerCurrency(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerCurrency")));
}


void AuctionAdConfig_set_sellerCurrency(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerCurrency"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_perBuyerCurrencies(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerCurrencies")));
}


void AuctionAdConfig_set_perBuyerCurrencies(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerCurrencies"), em_Val_from(value));
}


jb_Object AuctionAdConfig_perBuyerMultiBidLimits(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerMultiBidLimits")));
}


void AuctionAdConfig_set_perBuyerMultiBidLimits(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerMultiBidLimits"), em_Val_from(value));
}


jb_Object AuctionAdConfig_perBuyerGroupLimits(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerGroupLimits")));
}


void AuctionAdConfig_set_perBuyerGroupLimits(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerGroupLimits"), em_Val_from(value));
}


jb_Object AuctionAdConfig_perBuyerExperimentGroupIds(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerExperimentGroupIds")));
}


void AuctionAdConfig_set_perBuyerExperimentGroupIds(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerExperimentGroupIds"), em_Val_from(value));
}


jb_Object AuctionAdConfig_perBuyerPrioritySignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerPrioritySignals")));
}


void AuctionAdConfig_set_perBuyerPrioritySignals(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerPrioritySignals"), em_Val_from(value));
}


jb_Array AuctionAdConfig_auctionReportBuyerKeys(const AuctionAdConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerKeys")));
}


void AuctionAdConfig_set_auctionReportBuyerKeys(AuctionAdConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerKeys"), em_Val_from(value));
}


jb_Object AuctionAdConfig_auctionReportBuyers(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyers")));
}


void AuctionAdConfig_set_auctionReportBuyers(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyers"), em_Val_from(value));
}


AuctionReportBuyerDebugModeConfig AuctionAdConfig_auctionReportBuyerDebugModeConfig(const AuctionAdConfig *self) {
    return em_Val_as(AuctionReportBuyerDebugModeConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerDebugModeConfig")));
}


void AuctionAdConfig_set_auctionReportBuyerDebugModeConfig(AuctionAdConfig* self, AuctionReportBuyerDebugModeConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerDebugModeConfig"), em_Val_from(value));
}


jb_Array AuctionAdConfig_requiredSellerCapabilities(const AuctionAdConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requiredSellerCapabilities")));
}


void AuctionAdConfig_set_requiredSellerCapabilities(AuctionAdConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requiredSellerCapabilities"), em_Val_from(value));
}


ProtectedAudiencePrivateAggregationConfig AuctionAdConfig_privateAggregationConfig(const AuctionAdConfig *self) {
    return em_Val_as(ProtectedAudiencePrivateAggregationConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig")));
}


void AuctionAdConfig_set_privateAggregationConfig(AuctionAdConfig* self, ProtectedAudiencePrivateAggregationConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig"), em_Val_from(value));
}


jb_Object AuctionAdConfig_requestedSize(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestedSize")));
}


void AuctionAdConfig_set_requestedSize(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestedSize"), em_Val_from(value));
}


jb_Array AuctionAdConfig_allSlotsRequestedSizes(const AuctionAdConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allSlotsRequestedSizes")));
}


void AuctionAdConfig_set_allSlotsRequestedSizes(AuctionAdConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allSlotsRequestedSizes"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_additionalBids(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("additionalBids")));
}


void AuctionAdConfig_set_additionalBids(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("additionalBids"), em_Val_from(value));
}


jb_String AuctionAdConfig_auctionNonce(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionNonce")));
}


void AuctionAdConfig_set_auctionNonce(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionNonce"), em_Val_from(value));
}


AuctionRealTimeReportingConfig AuctionAdConfig_sellerRealTimeReportingConfig(const AuctionAdConfig *self) {
    return em_Val_as(AuctionRealTimeReportingConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerRealTimeReportingConfig")));
}


void AuctionAdConfig_set_sellerRealTimeReportingConfig(AuctionAdConfig* self, AuctionRealTimeReportingConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerRealTimeReportingConfig"), em_Val_from(value));
}


jb_Object AuctionAdConfig_perBuyerRealTimeReportingConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerRealTimeReportingConfig")));
}


void AuctionAdConfig_set_perBuyerRealTimeReportingConfig(AuctionAdConfig* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerRealTimeReportingConfig"), em_Val_from(value));
}


jb_Array AuctionAdConfig_componentAuctions(const AuctionAdConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("componentAuctions")));
}


void AuctionAdConfig_set_componentAuctions(AuctionAdConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("componentAuctions"), em_Val_from(value));
}


AbortSignal AuctionAdConfig_signal(const AuctionAdConfig *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void AuctionAdConfig_set_signal(AuctionAdConfig* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_resolveToConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resolveToConfig")));
}


void AuctionAdConfig_set_resolveToConfig(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resolveToConfig"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_serverResponse(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serverResponse")));
}


void AuctionAdConfig_set_serverResponse(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serverResponse"), em_Val_from(value));
}


jb_String AuctionAdConfig_requestId(const AuctionAdConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestId")));
}


void AuctionAdConfig_set_requestId(AuctionAdConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestId"), em_Val_from(value));
}


AuctionAdConfig AuctionAdConfig_new() {
    em_Val obj = em_Val_object();
    return AuctionAdConfig_from_val(&obj);
}

