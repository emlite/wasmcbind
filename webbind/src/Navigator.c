#include <webbind/Navigator.h>
#include <webbind/AudioSession.h>
#include <webbind/AudioContext.h>
#include <webbind/BatteryManager.h>
#include <webbind/Clipboard.h>
#include <webbind/ContactsManager.h>
#include <webbind/CredentialsContainer.h>
#include <webbind/DevicePosture.h>
#include <webbind/MediaKeySystemAccess.h>
#include <webbind/Gamepad.h>
#include <webbind/Geolocation.h>
#include <webbind/HandwritingRecognizer.h>
#include <webbind/UserActivation.h>
#include <webbind/Ink.h>
#include <webbind/Scheduling.h>
#include <webbind/Keyboard.h>
#include <webbind/NavigatorLogin.h>
#include <webbind/NavigatorManagedData.h>
#include <webbind/MediaCapabilities.h>
#include <webbind/MediaDevices.h>
#include <webbind/PreferenceManager.h>
#include <webbind/MediaSession.h>
#include <webbind/Permissions.h>
#include <webbind/Presentation.h>
#include <webbind/Attribution.h>
#include <webbind/WakeLock.h>
#include <webbind/Serial.h>
#include <webbind/ServiceWorkerContainer.h>
#include <webbind/ProtectedAudience.h>
#include <webbind/VirtualKeyboard.h>
#include <webbind/Bluetooth.h>
#include <webbind/HID.h>
#include <webbind/MIDIAccess.h>
#include <webbind/USB.h>
#include <webbind/XRSystem.h>
#include <webbind/WindowControlsOverlay.h>
#include <webbind/PluginArray.h>
#include <webbind/MimeTypeArray.h>
#include <webbind/NetworkInformation.h>
#include <webbind/StorageBucketManager.h>
#include <webbind/StorageManager.h>
#include <webbind/NavigatorUAData.h>
#include <webbind/LockManager.h>
#include <webbind/GPU.h>
#include <webbind/ML.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(MediaKeySystemConfiguration, em_Val);


jb_DOMString MediaKeySystemConfiguration_label(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void MediaKeySystemConfiguration_set_label(MediaKeySystemConfiguration* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}


jb_Sequence MediaKeySystemConfiguration_initDataTypes(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "initDataTypes"));
}


void MediaKeySystemConfiguration_set_initDataTypes(MediaKeySystemConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "initDataTypes", value);
}


jb_Sequence MediaKeySystemConfiguration_audioCapabilities(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "audioCapabilities"));
}


void MediaKeySystemConfiguration_set_audioCapabilities(MediaKeySystemConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "audioCapabilities", value);
}


jb_Sequence MediaKeySystemConfiguration_videoCapabilities(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "videoCapabilities"));
}


void MediaKeySystemConfiguration_set_videoCapabilities(MediaKeySystemConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "videoCapabilities", value);
}


MediaKeysRequirement MediaKeySystemConfiguration_distinctiveIdentifier(const MediaKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), "distinctiveIdentifier"));
}


void MediaKeySystemConfiguration_set_distinctiveIdentifier(MediaKeySystemConfiguration* self, const MediaKeysRequirement* value) {
    em_Val_set(em_Val_as_val(self->inner), "distinctiveIdentifier", value);
}


MediaKeysRequirement MediaKeySystemConfiguration_persistentState(const MediaKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), "persistentState"));
}


void MediaKeySystemConfiguration_set_persistentState(MediaKeySystemConfiguration* self, const MediaKeysRequirement* value) {
    em_Val_set(em_Val_as_val(self->inner), "persistentState", value);
}


jb_Sequence MediaKeySystemConfiguration_sessionTypes(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "sessionTypes"));
}


void MediaKeySystemConfiguration_set_sessionTypes(MediaKeySystemConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "sessionTypes", value);
}

DEFINE_EMLITE_TYPE(RelatedApplication, em_Val);


jb_USVString RelatedApplication_platform(const RelatedApplication *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "platform"));
}


void RelatedApplication_set_platform(RelatedApplication* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "platform", value);
}


jb_USVString RelatedApplication_url(const RelatedApplication *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


void RelatedApplication_set_url(RelatedApplication* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "url", value);
}


jb_DOMString RelatedApplication_id(const RelatedApplication *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


void RelatedApplication_set_id(RelatedApplication* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "id", value);
}


jb_USVString RelatedApplication_version(const RelatedApplication *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "version"));
}


void RelatedApplication_set_version(RelatedApplication* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "version", value);
}

DEFINE_EMLITE_TYPE(HandwritingRecognizerQueryResult, em_Val);


bool HandwritingRecognizerQueryResult_textAlternatives(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "textAlternatives"));
}


void HandwritingRecognizerQueryResult_set_textAlternatives(HandwritingRecognizerQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "textAlternatives", value);
}


bool HandwritingRecognizerQueryResult_textSegmentation(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "textSegmentation"));
}


void HandwritingRecognizerQueryResult_set_textSegmentation(HandwritingRecognizerQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "textSegmentation", value);
}


jb_Any HandwritingRecognizerQueryResult_hints(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "hints"));
}


void HandwritingRecognizerQueryResult_set_hints(HandwritingRecognizerQueryResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "hints", value);
}

DEFINE_EMLITE_TYPE(HandwritingModelConstraint, em_Val);


jb_Sequence HandwritingModelConstraint_languages(const HandwritingModelConstraint *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "languages"));
}


void HandwritingModelConstraint_set_languages(HandwritingModelConstraint* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "languages", value);
}

DEFINE_EMLITE_TYPE(AuctionAdInterestGroup, em_Val);


double AuctionAdInterestGroup_priority(const AuctionAdInterestGroup *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "priority"));
}


void AuctionAdInterestGroup_set_priority(AuctionAdInterestGroup* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "priority", value);
}


jb_Record AuctionAdInterestGroup_prioritySignalsOverrides(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "prioritySignalsOverrides"));
}


void AuctionAdInterestGroup_set_prioritySignalsOverrides(AuctionAdInterestGroup* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "prioritySignalsOverrides", value);
}


double AuctionAdInterestGroup_lifetimeMs(const AuctionAdInterestGroup *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "lifetimeMs"));
}


void AuctionAdInterestGroup_set_lifetimeMs(AuctionAdInterestGroup* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "lifetimeMs", value);
}


jb_DOMString AuctionAdInterestGroup_additionalBidKey(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "additionalBidKey"));
}


void AuctionAdInterestGroup_set_additionalBidKey(AuctionAdInterestGroup* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "additionalBidKey", value);
}


jb_Any AuctionAdInterestGroup_privateAggregationConfig(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "privateAggregationConfig"));
}


void AuctionAdInterestGroup_set_privateAggregationConfig(AuctionAdInterestGroup* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "privateAggregationConfig", value);
}

DEFINE_EMLITE_TYPE(AuctionAdInterestGroupKey, em_Val);


jb_USVString AuctionAdInterestGroupKey_owner(const AuctionAdInterestGroupKey *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "owner"));
}


void AuctionAdInterestGroupKey_set_owner(AuctionAdInterestGroupKey* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "owner", value);
}


jb_USVString AuctionAdInterestGroupKey_name(const AuctionAdInterestGroupKey *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void AuctionAdInterestGroupKey_set_name(AuctionAdInterestGroupKey* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}

DEFINE_EMLITE_TYPE(AuctionAdConfig, em_Val);


jb_USVString AuctionAdConfig_seller(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "seller"));
}


void AuctionAdConfig_set_seller(AuctionAdConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "seller", value);
}


jb_USVString AuctionAdConfig_decisionLogicURL(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "decisionLogicURL"));
}


void AuctionAdConfig_set_decisionLogicURL(AuctionAdConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "decisionLogicURL", value);
}


jb_USVString AuctionAdConfig_trustedScoringSignalsURL(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "trustedScoringSignalsURL"));
}


void AuctionAdConfig_set_trustedScoringSignalsURL(AuctionAdConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "trustedScoringSignalsURL", value);
}


long AuctionAdConfig_maxTrustedScoringSignalsURLLength(const AuctionAdConfig *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "maxTrustedScoringSignalsURLLength"));
}


void AuctionAdConfig_set_maxTrustedScoringSignalsURLLength(AuctionAdConfig* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "maxTrustedScoringSignalsURLLength", value);
}


jb_USVString AuctionAdConfig_trustedScoringSignalsCoordinator(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "trustedScoringSignalsCoordinator"));
}


void AuctionAdConfig_set_trustedScoringSignalsCoordinator(AuctionAdConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "trustedScoringSignalsCoordinator", value);
}


bool AuctionAdConfig_sendCreativeScanningMetadata(const AuctionAdConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "sendCreativeScanningMetadata"));
}


void AuctionAdConfig_set_sendCreativeScanningMetadata(AuctionAdConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "sendCreativeScanningMetadata", value);
}


jb_Sequence AuctionAdConfig_interestGroupBuyers(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "interestGroupBuyers"));
}


void AuctionAdConfig_set_interestGroupBuyers(AuctionAdConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "interestGroupBuyers", value);
}


jb_Promise AuctionAdConfig_auctionSignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "auctionSignals"));
}


void AuctionAdConfig_set_auctionSignals(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "auctionSignals", value);
}


jb_Promise AuctionAdConfig_sellerSignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "sellerSignals"));
}


void AuctionAdConfig_set_sellerSignals(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "sellerSignals", value);
}


jb_Promise AuctionAdConfig_directFromSellerSignalsHeaderAdSlot(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "directFromSellerSignalsHeaderAdSlot"));
}


void AuctionAdConfig_set_directFromSellerSignalsHeaderAdSlot(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "directFromSellerSignalsHeaderAdSlot", value);
}


jb_Promise AuctionAdConfig_deprecatedRenderURLReplacements(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "deprecatedRenderURLReplacements"));
}


void AuctionAdConfig_set_deprecatedRenderURLReplacements(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "deprecatedRenderURLReplacements", value);
}


long long AuctionAdConfig_sellerTimeout(const AuctionAdConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "sellerTimeout"));
}


void AuctionAdConfig_set_sellerTimeout(AuctionAdConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "sellerTimeout", value);
}


unsigned short AuctionAdConfig_sellerExperimentGroupId(const AuctionAdConfig *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "sellerExperimentGroupId"));
}


void AuctionAdConfig_set_sellerExperimentGroupId(AuctionAdConfig* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "sellerExperimentGroupId", value);
}


jb_Promise AuctionAdConfig_perBuyerSignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "perBuyerSignals"));
}


void AuctionAdConfig_set_perBuyerSignals(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerSignals", value);
}


jb_Promise AuctionAdConfig_perBuyerTimeouts(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "perBuyerTimeouts"));
}


void AuctionAdConfig_set_perBuyerTimeouts(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerTimeouts", value);
}


jb_Promise AuctionAdConfig_perBuyerCumulativeTimeouts(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "perBuyerCumulativeTimeouts"));
}


void AuctionAdConfig_set_perBuyerCumulativeTimeouts(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerCumulativeTimeouts", value);
}


long long AuctionAdConfig_reportingTimeout(const AuctionAdConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "reportingTimeout"));
}


void AuctionAdConfig_set_reportingTimeout(AuctionAdConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "reportingTimeout", value);
}


jb_USVString AuctionAdConfig_sellerCurrency(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "sellerCurrency"));
}


void AuctionAdConfig_set_sellerCurrency(AuctionAdConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sellerCurrency", value);
}


jb_Promise AuctionAdConfig_perBuyerCurrencies(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "perBuyerCurrencies"));
}


void AuctionAdConfig_set_perBuyerCurrencies(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerCurrencies", value);
}


jb_Record AuctionAdConfig_perBuyerMultiBidLimits(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "perBuyerMultiBidLimits"));
}


void AuctionAdConfig_set_perBuyerMultiBidLimits(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerMultiBidLimits", value);
}


jb_Record AuctionAdConfig_perBuyerGroupLimits(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "perBuyerGroupLimits"));
}


void AuctionAdConfig_set_perBuyerGroupLimits(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerGroupLimits", value);
}


jb_Record AuctionAdConfig_perBuyerExperimentGroupIds(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "perBuyerExperimentGroupIds"));
}


void AuctionAdConfig_set_perBuyerExperimentGroupIds(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerExperimentGroupIds", value);
}


jb_Record AuctionAdConfig_perBuyerPrioritySignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "perBuyerPrioritySignals"));
}


void AuctionAdConfig_set_perBuyerPrioritySignals(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerPrioritySignals", value);
}


jb_Sequence AuctionAdConfig_auctionReportBuyerKeys(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "auctionReportBuyerKeys"));
}


void AuctionAdConfig_set_auctionReportBuyerKeys(AuctionAdConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "auctionReportBuyerKeys", value);
}


jb_Record AuctionAdConfig_auctionReportBuyers(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "auctionReportBuyers"));
}


void AuctionAdConfig_set_auctionReportBuyers(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "auctionReportBuyers", value);
}


jb_Any AuctionAdConfig_auctionReportBuyerDebugModeConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "auctionReportBuyerDebugModeConfig"));
}


void AuctionAdConfig_set_auctionReportBuyerDebugModeConfig(AuctionAdConfig* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "auctionReportBuyerDebugModeConfig", value);
}


jb_Sequence AuctionAdConfig_requiredSellerCapabilities(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "requiredSellerCapabilities"));
}


void AuctionAdConfig_set_requiredSellerCapabilities(AuctionAdConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "requiredSellerCapabilities", value);
}


jb_Any AuctionAdConfig_privateAggregationConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "privateAggregationConfig"));
}


void AuctionAdConfig_set_privateAggregationConfig(AuctionAdConfig* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "privateAggregationConfig", value);
}


jb_Record AuctionAdConfig_requestedSize(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "requestedSize"));
}


void AuctionAdConfig_set_requestedSize(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "requestedSize", value);
}


jb_Sequence AuctionAdConfig_allSlotsRequestedSizes(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "allSlotsRequestedSizes"));
}


void AuctionAdConfig_set_allSlotsRequestedSizes(AuctionAdConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "allSlotsRequestedSizes", value);
}


jb_Promise AuctionAdConfig_additionalBids(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "additionalBids"));
}


void AuctionAdConfig_set_additionalBids(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "additionalBids", value);
}


jb_DOMString AuctionAdConfig_auctionNonce(const AuctionAdConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "auctionNonce"));
}


void AuctionAdConfig_set_auctionNonce(AuctionAdConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "auctionNonce", value);
}


jb_Any AuctionAdConfig_sellerRealTimeReportingConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "sellerRealTimeReportingConfig"));
}


void AuctionAdConfig_set_sellerRealTimeReportingConfig(AuctionAdConfig* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "sellerRealTimeReportingConfig", value);
}


jb_Record AuctionAdConfig_perBuyerRealTimeReportingConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "perBuyerRealTimeReportingConfig"));
}


void AuctionAdConfig_set_perBuyerRealTimeReportingConfig(AuctionAdConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerRealTimeReportingConfig", value);
}


jb_Sequence AuctionAdConfig_componentAuctions(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "componentAuctions"));
}


void AuctionAdConfig_set_componentAuctions(AuctionAdConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "componentAuctions", value);
}


AbortSignal AuctionAdConfig_signal(const AuctionAdConfig *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void AuctionAdConfig_set_signal(AuctionAdConfig* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}


jb_Promise AuctionAdConfig_resolveToConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "resolveToConfig"));
}


void AuctionAdConfig_set_resolveToConfig(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "resolveToConfig", value);
}


jb_Promise AuctionAdConfig_serverResponse(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "serverResponse"));
}


void AuctionAdConfig_set_serverResponse(AuctionAdConfig* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "serverResponse", value);
}


jb_USVString AuctionAdConfig_requestId(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "requestId"));
}


void AuctionAdConfig_set_requestId(AuctionAdConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "requestId", value);
}

DEFINE_EMLITE_TYPE(AdAuctionData, em_Val);


jb_USVString AdAuctionData_requestId(const AdAuctionData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "requestId"));
}


void AdAuctionData_set_requestId(AdAuctionData* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "requestId", value);
}


jb_Uint8Array AdAuctionData_request(const AdAuctionData *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), "request"));
}


void AdAuctionData_set_request(AdAuctionData* self, const jb_Uint8Array* value) {
    em_Val_set(em_Val_as_val(self->inner), "request", value);
}


jb_Sequence AdAuctionData_requests(const AdAuctionData *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "requests"));
}


void AdAuctionData_set_requests(AdAuctionData* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "requests", value);
}

DEFINE_EMLITE_TYPE(AdAuctionDataConfig, em_Val);


jb_USVString AdAuctionDataConfig_seller(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "seller"));
}


void AdAuctionDataConfig_set_seller(AdAuctionDataConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "seller", value);
}


jb_USVString AdAuctionDataConfig_coordinatorOrigin(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "coordinatorOrigin"));
}


void AdAuctionDataConfig_set_coordinatorOrigin(AdAuctionDataConfig* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "coordinatorOrigin", value);
}


jb_Sequence AdAuctionDataConfig_sellers(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "sellers"));
}


void AdAuctionDataConfig_set_sellers(AdAuctionDataConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "sellers", value);
}


unsigned long AdAuctionDataConfig_requestSize(const AdAuctionDataConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "requestSize"));
}


void AdAuctionDataConfig_set_requestSize(AdAuctionDataConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "requestSize", value);
}


jb_Record AdAuctionDataConfig_perBuyerConfig(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "perBuyerConfig"));
}


void AdAuctionDataConfig_set_perBuyerConfig(AdAuctionDataConfig* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "perBuyerConfig", value);
}

DEFINE_EMLITE_TYPE(ShareData, em_Val);


jb_Sequence ShareData_files(const ShareData *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "files"));
}


void ShareData_set_files(ShareData* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "files", value);
}


jb_USVString ShareData_title(const ShareData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "title"));
}


void ShareData_set_title(ShareData* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "title", value);
}


jb_USVString ShareData_text(const ShareData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "text"));
}


void ShareData_set_text(ShareData* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "text", value);
}


jb_USVString ShareData_url(const ShareData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


void ShareData_set_url(ShareData* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "url", value);
}

DEFINE_EMLITE_TYPE(MIDIOptions, em_Val);


bool MIDIOptions_sysex(const MIDIOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "sysex"));
}


void MIDIOptions_set_sysex(MIDIOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "sysex", value);
}


bool MIDIOptions_software(const MIDIOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "software"));
}


void MIDIOptions_set_software(MIDIOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "software", value);
}

DEFINE_EMLITE_TYPE(Navigator, em_Val);


AudioSession Navigator_audioSession(const Navigator *self) {
    return em_Val_as(AudioSession, em_Val_get(em_Val_as_val(self->inner), "audioSession"));
}


AutoplayPolicy Navigator_getAutoplayPolicy(Navigator* self , const AudioContext* context) {
    return em_Val_as(AutoplayPolicy, em_Val_call(em_Val_as_val(self->inner), "getAutoplayPolicy", em_Val_from(context)));
}


jb_Promise Navigator_getBattery(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getBattery"));
}


bool Navigator_sendBeacon(Navigator* self , const jb_USVString* url) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "sendBeacon", em_Val_from(url)));
}


bool Navigator_sendBeacon(Navigator* self , const jb_USVString* url, const jb_Any* data) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "sendBeacon", em_Val_from(url), em_Val_from(data)));
}


Clipboard Navigator_clipboard(const Navigator *self) {
    return em_Val_as(Clipboard, em_Val_get(em_Val_as_val(self->inner), "clipboard"));
}


ContactsManager Navigator_contacts(const Navigator *self) {
    return em_Val_as(ContactsManager, em_Val_get(em_Val_as_val(self->inner), "contacts"));
}


CredentialsContainer Navigator_credentials(const Navigator *self) {
    return em_Val_as(CredentialsContainer, em_Val_get(em_Val_as_val(self->inner), "credentials"));
}


DevicePosture Navigator_devicePosture(const Navigator *self) {
    return em_Val_as(DevicePosture, em_Val_get(em_Val_as_val(self->inner), "devicePosture"));
}


jb_Promise Navigator_requestMediaKeySystemAccess(Navigator* self , const jb_DOMString* keySystem, const jb_Sequence* supportedConfigurations) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMediaKeySystemAccess", em_Val_from(keySystem), em_Val_from(supportedConfigurations)));
}


jb_Promise Navigator_deprecatedReplaceInURN(Navigator* self , const jb_Any* urnOrConfig, const jb_Record* replacements) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedReplaceInURN", em_Val_from(urnOrConfig), em_Val_from(replacements)));
}


jb_Promise Navigator_deprecatedURNtoURL(Navigator* self , const jb_Any* urnOrConfig) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedURNtoURL", em_Val_from(urnOrConfig)));
}


jb_Promise Navigator_deprecatedURNtoURL(Navigator* self , const jb_Any* urnOrConfig, bool send_reports) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedURNtoURL", em_Val_from(urnOrConfig), em_Val_from(send_reports)));
}


jb_Sequence Navigator_adAuctionComponents(Navigator* self , unsigned short numAdComponents) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "adAuctionComponents", em_Val_from(numAdComponents)));
}


jb_Sequence Navigator_getGamepads(Navigator* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getGamepads"));
}


Geolocation Navigator_geolocation(const Navigator *self) {
    return em_Val_as(Geolocation, em_Val_get(em_Val_as_val(self->inner), "geolocation"));
}


jb_Promise Navigator_getInstalledRelatedApps(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getInstalledRelatedApps"));
}


jb_Promise Navigator_queryHandwritingRecognizer(Navigator* self , const HandwritingModelConstraint* constraint) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "queryHandwritingRecognizer", em_Val_from(constraint)));
}


jb_Promise Navigator_createHandwritingRecognizer(Navigator* self , const HandwritingModelConstraint* constraint) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createHandwritingRecognizer", em_Val_from(constraint)));
}


UserActivation Navigator_userActivation(const Navigator *self) {
    return em_Val_as(UserActivation, em_Val_get(em_Val_as_val(self->inner), "userActivation"));
}


Ink Navigator_ink(const Navigator *self) {
    return em_Val_as(Ink, em_Val_get(em_Val_as_val(self->inner), "ink"));
}


Scheduling Navigator_scheduling(const Navigator *self) {
    return em_Val_as(Scheduling, em_Val_get(em_Val_as_val(self->inner), "scheduling"));
}


Keyboard Navigator_keyboard(const Navigator *self) {
    return em_Val_as(Keyboard, em_Val_get(em_Val_as_val(self->inner), "keyboard"));
}


NavigatorLogin Navigator_login(const Navigator *self) {
    return em_Val_as(NavigatorLogin, em_Val_get(em_Val_as_val(self->inner), "login"));
}


NavigatorManagedData Navigator_managed(const Navigator *self) {
    return em_Val_as(NavigatorManagedData, em_Val_get(em_Val_as_val(self->inner), "managed"));
}


MediaCapabilities Navigator_mediaCapabilities(const Navigator *self) {
    return em_Val_as(MediaCapabilities, em_Val_get(em_Val_as_val(self->inner), "mediaCapabilities"));
}


MediaDevices Navigator_mediaDevices(const Navigator *self) {
    return em_Val_as(MediaDevices, em_Val_get(em_Val_as_val(self->inner), "mediaDevices"));
}


PreferenceManager Navigator_preferences(const Navigator *self) {
    return em_Val_as(PreferenceManager, em_Val_get(em_Val_as_val(self->inner), "preferences"));
}


MediaSession Navigator_mediaSession(const Navigator *self) {
    return em_Val_as(MediaSession, em_Val_get(em_Val_as_val(self->inner), "mediaSession"));
}


Permissions Navigator_permissions(const Navigator *self) {
    return em_Val_as(Permissions, em_Val_get(em_Val_as_val(self->inner), "permissions"));
}


long Navigator_maxTouchPoints(const Navigator *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "maxTouchPoints"));
}


Presentation Navigator_presentation(const Navigator *self) {
    return em_Val_as(Presentation, em_Val_get(em_Val_as_val(self->inner), "presentation"));
}


Attribution Navigator_attribution(const Navigator *self) {
    return em_Val_as(Attribution, em_Val_get(em_Val_as_val(self->inner), "attribution"));
}


WakeLock Navigator_wakeLock(const Navigator *self) {
    return em_Val_as(WakeLock, em_Val_get(em_Val_as_val(self->inner), "wakeLock"));
}


Serial Navigator_serial(const Navigator *self) {
    return em_Val_as(Serial, em_Val_get(em_Val_as_val(self->inner), "serial"));
}


ServiceWorkerContainer Navigator_serviceWorker(const Navigator *self) {
    return em_Val_as(ServiceWorkerContainer, em_Val_get(em_Val_as_val(self->inner), "serviceWorker"));
}


jb_Promise Navigator_joinAdInterestGroup(Navigator* self , const AuctionAdInterestGroup* group) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "joinAdInterestGroup", em_Val_from(group)));
}


jb_Promise Navigator_leaveAdInterestGroup(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "leaveAdInterestGroup"));
}


jb_Promise Navigator_leaveAdInterestGroup(Navigator* self , const AuctionAdInterestGroupKey* group) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "leaveAdInterestGroup", em_Val_from(group)));
}


jb_Promise Navigator_clearOriginJoinedAdInterestGroups(Navigator* self , const jb_USVString* owner) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearOriginJoinedAdInterestGroups", em_Val_from(owner)));
}


jb_Promise Navigator_clearOriginJoinedAdInterestGroups(Navigator* self , const jb_USVString* owner, const jb_Sequence* interestGroupsToKeep) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearOriginJoinedAdInterestGroups", em_Val_from(owner), em_Val_from(interestGroupsToKeep)));
}


jb_Promise Navigator_runAdAuction(Navigator* self , const AuctionAdConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "runAdAuction", em_Val_from(config)));
}


bool Navigator_deprecatedRunAdAuctionEnforcesKAnonymity(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "deprecatedRunAdAuctionEnforcesKAnonymity"));
}


bool Navigator_canLoadAdAuctionFencedFrame(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "canLoadAdAuctionFencedFrame"));
}


jb_Promise Navigator_getInterestGroupAdAuctionData(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getInterestGroupAdAuctionData"));
}


jb_Promise Navigator_getInterestGroupAdAuctionData(Navigator* self , const AdAuctionDataConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getInterestGroupAdAuctionData", em_Val_from(config)));
}


jb_Promise Navigator_createAuctionNonce(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createAuctionNonce"));
}


jb_Undefined Navigator_updateAdInterestGroups(Navigator* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateAdInterestGroups"));
}


ProtectedAudience Navigator_protectedAudience(const Navigator *self) {
    return em_Val_as(ProtectedAudience, em_Val_get(em_Val_as_val(self->inner), "protectedAudience"));
}


bool Navigator_vibrate(Navigator* self , const jb_Any* pattern) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "vibrate", em_Val_from(pattern)));
}


VirtualKeyboard Navigator_virtualKeyboard(const Navigator *self) {
    return em_Val_as(VirtualKeyboard, em_Val_get(em_Val_as_val(self->inner), "virtualKeyboard"));
}


Bluetooth Navigator_bluetooth(const Navigator *self) {
    return em_Val_as(Bluetooth, em_Val_get(em_Val_as_val(self->inner), "bluetooth"));
}


jb_Promise Navigator_share(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "share"));
}


jb_Promise Navigator_share(Navigator* self , const ShareData* data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "share", em_Val_from(data)));
}


bool Navigator_canShare(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "canShare"));
}


bool Navigator_canShare(Navigator* self , const ShareData* data) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "canShare", em_Val_from(data)));
}


HID Navigator_hid(const Navigator *self) {
    return em_Val_as(HID, em_Val_get(em_Val_as_val(self->inner), "hid"));
}


jb_Promise Navigator_requestMIDIAccess(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMIDIAccess"));
}


jb_Promise Navigator_requestMIDIAccess(Navigator* self , const MIDIOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMIDIAccess", em_Val_from(options)));
}


USB Navigator_usb(const Navigator *self) {
    return em_Val_as(USB, em_Val_get(em_Val_as_val(self->inner), "usb"));
}


XRSystem Navigator_xr(const Navigator *self) {
    return em_Val_as(XRSystem, em_Val_get(em_Val_as_val(self->inner), "xr"));
}


WindowControlsOverlay Navigator_windowControlsOverlay(const Navigator *self) {
    return em_Val_as(WindowControlsOverlay, em_Val_get(em_Val_as_val(self->inner), "windowControlsOverlay"));
}


jb_Promise Navigator_setAppBadge(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setAppBadge"));
}


jb_Promise Navigator_setAppBadge(Navigator* self , long long contents) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setAppBadge", em_Val_from(contents)));
}


jb_Promise Navigator_clearAppBadge(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearAppBadge"));
}


double Navigator_deviceMemory(const Navigator *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "deviceMemory"));
}


bool Navigator_globalPrivacyControl(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "globalPrivacyControl"));
}


bool Navigator_taintEnabled(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "taintEnabled"));
}


jb_DOMString Navigator_oscpu(const Navigator *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "oscpu"));
}


jb_DOMString Navigator_language(const Navigator *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "language"));
}


jb_FrozenArray Navigator_languages(const Navigator *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "languages"));
}


bool Navigator_onLine(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "onLine"));
}


jb_Undefined Navigator_registerProtocolHandler(Navigator* self , const jb_DOMString* scheme, const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "registerProtocolHandler", em_Val_from(scheme), em_Val_from(url)));
}


jb_Undefined Navigator_unregisterProtocolHandler(Navigator* self , const jb_DOMString* scheme, const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unregisterProtocolHandler", em_Val_from(scheme), em_Val_from(url)));
}


bool Navigator_cookieEnabled(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "cookieEnabled"));
}


PluginArray Navigator_plugins(const Navigator *self) {
    return em_Val_as(PluginArray, em_Val_get(em_Val_as_val(self->inner), "plugins"));
}


MimeTypeArray Navigator_mimeTypes(const Navigator *self) {
    return em_Val_as(MimeTypeArray, em_Val_get(em_Val_as_val(self->inner), "mimeTypes"));
}


bool Navigator_javaEnabled(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "javaEnabled"));
}


bool Navigator_pdfViewerEnabled(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "pdfViewerEnabled"));
}


long long Navigator_hardwareConcurrency(const Navigator *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "hardwareConcurrency"));
}


NetworkInformation Navigator_connection(const Navigator *self) {
    return em_Val_as(NetworkInformation, em_Val_get(em_Val_as_val(self->inner), "connection"));
}


StorageBucketManager Navigator_storageBuckets(const Navigator *self) {
    return em_Val_as(StorageBucketManager, em_Val_get(em_Val_as_val(self->inner), "storageBuckets"));
}


StorageManager Navigator_storage(const Navigator *self) {
    return em_Val_as(StorageManager, em_Val_get(em_Val_as_val(self->inner), "storage"));
}


NavigatorUAData Navigator_userAgentData(const Navigator *self) {
    return em_Val_as(NavigatorUAData, em_Val_get(em_Val_as_val(self->inner), "userAgentData"));
}


LockManager Navigator_locks(const Navigator *self) {
    return em_Val_as(LockManager, em_Val_get(em_Val_as_val(self->inner), "locks"));
}


bool Navigator_webdriver(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "webdriver"));
}


GPU Navigator_gpu(const Navigator *self) {
    return em_Val_as(GPU, em_Val_get(em_Val_as_val(self->inner), "gpu"));
}


ML Navigator_ml(const Navigator *self) {
    return em_Val_as(ML, em_Val_get(em_Val_as_val(self->inner), "ml"));
}

