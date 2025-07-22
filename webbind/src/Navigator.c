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
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void MediaKeySystemConfiguration_set_label(MediaKeySystemConfiguration* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Sequence MediaKeySystemConfiguration_initDataTypes(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initDataTypes")));
}


void MediaKeySystemConfiguration_set_initDataTypes(MediaKeySystemConfiguration* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initDataTypes"), em_Val_from(value));
}


jb_Sequence MediaKeySystemConfiguration_audioCapabilities(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioCapabilities")));
}


void MediaKeySystemConfiguration_set_audioCapabilities(MediaKeySystemConfiguration* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audioCapabilities"), em_Val_from(value));
}


jb_Sequence MediaKeySystemConfiguration_videoCapabilities(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("videoCapabilities")));
}


void MediaKeySystemConfiguration_set_videoCapabilities(MediaKeySystemConfiguration* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("videoCapabilities"), em_Val_from(value));
}


MediaKeysRequirement MediaKeySystemConfiguration_distinctiveIdentifier(const MediaKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("distinctiveIdentifier")));
}


void MediaKeySystemConfiguration_set_distinctiveIdentifier(MediaKeySystemConfiguration* self, MediaKeysRequirement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("distinctiveIdentifier"), em_Val_from(value));
}


MediaKeysRequirement MediaKeySystemConfiguration_persistentState(const MediaKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("persistentState")));
}


void MediaKeySystemConfiguration_set_persistentState(MediaKeySystemConfiguration* self, MediaKeysRequirement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("persistentState"), em_Val_from(value));
}


jb_Sequence MediaKeySystemConfiguration_sessionTypes(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sessionTypes")));
}


void MediaKeySystemConfiguration_set_sessionTypes(MediaKeySystemConfiguration* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sessionTypes"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RelatedApplication, em_Val);


jb_USVString RelatedApplication_platform(const RelatedApplication *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("platform")));
}


void RelatedApplication_set_platform(RelatedApplication* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("platform"), em_Val_from(value));
}


jb_USVString RelatedApplication_url(const RelatedApplication *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void RelatedApplication_set_url(RelatedApplication* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


jb_DOMString RelatedApplication_id(const RelatedApplication *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RelatedApplication_set_id(RelatedApplication* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_USVString RelatedApplication_version(const RelatedApplication *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void RelatedApplication_set_version(RelatedApplication* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HandwritingRecognizerQueryResult, em_Val);


bool HandwritingRecognizerQueryResult_textAlternatives(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textAlternatives")));
}


void HandwritingRecognizerQueryResult_set_textAlternatives(HandwritingRecognizerQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textAlternatives"), em_Val_from(value));
}


bool HandwritingRecognizerQueryResult_textSegmentation(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textSegmentation")));
}


void HandwritingRecognizerQueryResult_set_textSegmentation(HandwritingRecognizerQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textSegmentation"), em_Val_from(value));
}


jb_Any HandwritingRecognizerQueryResult_hints(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void HandwritingRecognizerQueryResult_set_hints(HandwritingRecognizerQueryResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HandwritingModelConstraint, em_Val);


jb_Sequence HandwritingModelConstraint_languages(const HandwritingModelConstraint *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("languages")));
}


void HandwritingModelConstraint_set_languages(HandwritingModelConstraint* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("languages"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AuctionAdInterestGroup, em_Val);


double AuctionAdInterestGroup_priority(const AuctionAdInterestGroup *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void AuctionAdInterestGroup_set_priority(AuctionAdInterestGroup* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


jb_Record AuctionAdInterestGroup_prioritySignalsOverrides(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("prioritySignalsOverrides")));
}


void AuctionAdInterestGroup_set_prioritySignalsOverrides(AuctionAdInterestGroup* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("prioritySignalsOverrides"), em_Val_from(value));
}


double AuctionAdInterestGroup_lifetimeMs(const AuctionAdInterestGroup *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lifetimeMs")));
}


void AuctionAdInterestGroup_set_lifetimeMs(AuctionAdInterestGroup* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lifetimeMs"), em_Val_from(value));
}


jb_DOMString AuctionAdInterestGroup_additionalBidKey(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("additionalBidKey")));
}


void AuctionAdInterestGroup_set_additionalBidKey(AuctionAdInterestGroup* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("additionalBidKey"), em_Val_from(value));
}


jb_Any AuctionAdInterestGroup_privateAggregationConfig(const AuctionAdInterestGroup *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig")));
}


void AuctionAdInterestGroup_set_privateAggregationConfig(AuctionAdInterestGroup* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AuctionAdInterestGroupKey, em_Val);


jb_USVString AuctionAdInterestGroupKey_owner(const AuctionAdInterestGroupKey *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("owner")));
}


void AuctionAdInterestGroupKey_set_owner(AuctionAdInterestGroupKey* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("owner"), em_Val_from(value));
}


jb_USVString AuctionAdInterestGroupKey_name(const AuctionAdInterestGroupKey *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void AuctionAdInterestGroupKey_set_name(AuctionAdInterestGroupKey* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AuctionAdConfig, em_Val);


jb_USVString AuctionAdConfig_seller(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void AuctionAdConfig_set_seller(AuctionAdConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


jb_USVString AuctionAdConfig_decisionLogicURL(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("decisionLogicURL")));
}


void AuctionAdConfig_set_decisionLogicURL(AuctionAdConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("decisionLogicURL"), em_Val_from(value));
}


jb_USVString AuctionAdConfig_trustedScoringSignalsURL(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsURL")));
}


void AuctionAdConfig_set_trustedScoringSignalsURL(AuctionAdConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsURL"), em_Val_from(value));
}


long AuctionAdConfig_maxTrustedScoringSignalsURLLength(const AuctionAdConfig *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTrustedScoringSignalsURLLength")));
}


void AuctionAdConfig_set_maxTrustedScoringSignalsURLLength(AuctionAdConfig* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxTrustedScoringSignalsURLLength"), em_Val_from(value));
}


jb_USVString AuctionAdConfig_trustedScoringSignalsCoordinator(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsCoordinator")));
}


void AuctionAdConfig_set_trustedScoringSignalsCoordinator(AuctionAdConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trustedScoringSignalsCoordinator"), em_Val_from(value));
}


bool AuctionAdConfig_sendCreativeScanningMetadata(const AuctionAdConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sendCreativeScanningMetadata")));
}


void AuctionAdConfig_set_sendCreativeScanningMetadata(AuctionAdConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sendCreativeScanningMetadata"), em_Val_from(value));
}


jb_Sequence AuctionAdConfig_interestGroupBuyers(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interestGroupBuyers")));
}


void AuctionAdConfig_set_interestGroupBuyers(AuctionAdConfig* self, jb_Sequence * value) {
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


jb_USVString AuctionAdConfig_sellerCurrency(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerCurrency")));
}


void AuctionAdConfig_set_sellerCurrency(AuctionAdConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerCurrency"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_perBuyerCurrencies(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerCurrencies")));
}


void AuctionAdConfig_set_perBuyerCurrencies(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerCurrencies"), em_Val_from(value));
}


jb_Record AuctionAdConfig_perBuyerMultiBidLimits(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerMultiBidLimits")));
}


void AuctionAdConfig_set_perBuyerMultiBidLimits(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerMultiBidLimits"), em_Val_from(value));
}


jb_Record AuctionAdConfig_perBuyerGroupLimits(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerGroupLimits")));
}


void AuctionAdConfig_set_perBuyerGroupLimits(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerGroupLimits"), em_Val_from(value));
}


jb_Record AuctionAdConfig_perBuyerExperimentGroupIds(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerExperimentGroupIds")));
}


void AuctionAdConfig_set_perBuyerExperimentGroupIds(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerExperimentGroupIds"), em_Val_from(value));
}


jb_Record AuctionAdConfig_perBuyerPrioritySignals(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerPrioritySignals")));
}


void AuctionAdConfig_set_perBuyerPrioritySignals(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerPrioritySignals"), em_Val_from(value));
}


jb_Sequence AuctionAdConfig_auctionReportBuyerKeys(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerKeys")));
}


void AuctionAdConfig_set_auctionReportBuyerKeys(AuctionAdConfig* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerKeys"), em_Val_from(value));
}


jb_Record AuctionAdConfig_auctionReportBuyers(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyers")));
}


void AuctionAdConfig_set_auctionReportBuyers(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyers"), em_Val_from(value));
}


jb_Any AuctionAdConfig_auctionReportBuyerDebugModeConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerDebugModeConfig")));
}


void AuctionAdConfig_set_auctionReportBuyerDebugModeConfig(AuctionAdConfig* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionReportBuyerDebugModeConfig"), em_Val_from(value));
}


jb_Sequence AuctionAdConfig_requiredSellerCapabilities(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requiredSellerCapabilities")));
}


void AuctionAdConfig_set_requiredSellerCapabilities(AuctionAdConfig* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requiredSellerCapabilities"), em_Val_from(value));
}


jb_Any AuctionAdConfig_privateAggregationConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig")));
}


void AuctionAdConfig_set_privateAggregationConfig(AuctionAdConfig* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig"), em_Val_from(value));
}


jb_Record AuctionAdConfig_requestedSize(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestedSize")));
}


void AuctionAdConfig_set_requestedSize(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestedSize"), em_Val_from(value));
}


jb_Sequence AuctionAdConfig_allSlotsRequestedSizes(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allSlotsRequestedSizes")));
}


void AuctionAdConfig_set_allSlotsRequestedSizes(AuctionAdConfig* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allSlotsRequestedSizes"), em_Val_from(value));
}


jb_Promise AuctionAdConfig_additionalBids(const AuctionAdConfig *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("additionalBids")));
}


void AuctionAdConfig_set_additionalBids(AuctionAdConfig* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("additionalBids"), em_Val_from(value));
}


jb_DOMString AuctionAdConfig_auctionNonce(const AuctionAdConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("auctionNonce")));
}


void AuctionAdConfig_set_auctionNonce(AuctionAdConfig* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("auctionNonce"), em_Val_from(value));
}


jb_Any AuctionAdConfig_sellerRealTimeReportingConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellerRealTimeReportingConfig")));
}


void AuctionAdConfig_set_sellerRealTimeReportingConfig(AuctionAdConfig* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellerRealTimeReportingConfig"), em_Val_from(value));
}


jb_Record AuctionAdConfig_perBuyerRealTimeReportingConfig(const AuctionAdConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerRealTimeReportingConfig")));
}


void AuctionAdConfig_set_perBuyerRealTimeReportingConfig(AuctionAdConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerRealTimeReportingConfig"), em_Val_from(value));
}


jb_Sequence AuctionAdConfig_componentAuctions(const AuctionAdConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("componentAuctions")));
}


void AuctionAdConfig_set_componentAuctions(AuctionAdConfig* self, jb_Sequence * value) {
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


jb_USVString AuctionAdConfig_requestId(const AuctionAdConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestId")));
}


void AuctionAdConfig_set_requestId(AuctionAdConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestId"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AdAuctionData, em_Val);


jb_USVString AdAuctionData_requestId(const AdAuctionData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestId")));
}


void AdAuctionData_set_requestId(AdAuctionData* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestId"), em_Val_from(value));
}


jb_Uint8Array AdAuctionData_request(const AdAuctionData *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("request")));
}


void AdAuctionData_set_request(AdAuctionData* self, jb_Uint8Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("request"), em_Val_from(value));
}


jb_Sequence AdAuctionData_requests(const AdAuctionData *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requests")));
}


void AdAuctionData_set_requests(AdAuctionData* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requests"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AdAuctionDataConfig, em_Val);


jb_USVString AdAuctionDataConfig_seller(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seller")));
}


void AdAuctionDataConfig_set_seller(AdAuctionDataConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seller"), em_Val_from(value));
}


jb_USVString AdAuctionDataConfig_coordinatorOrigin(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("coordinatorOrigin")));
}


void AdAuctionDataConfig_set_coordinatorOrigin(AdAuctionDataConfig* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("coordinatorOrigin"), em_Val_from(value));
}


jb_Sequence AdAuctionDataConfig_sellers(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sellers")));
}


void AdAuctionDataConfig_set_sellers(AdAuctionDataConfig* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sellers"), em_Val_from(value));
}


unsigned long AdAuctionDataConfig_requestSize(const AdAuctionDataConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestSize")));
}


void AdAuctionDataConfig_set_requestSize(AdAuctionDataConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestSize"), em_Val_from(value));
}


jb_Record AdAuctionDataConfig_perBuyerConfig(const AdAuctionDataConfig *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), em_Val_from("perBuyerConfig")));
}


void AdAuctionDataConfig_set_perBuyerConfig(AdAuctionDataConfig* self, jb_Record * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("perBuyerConfig"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ShareData, em_Val);


jb_Sequence ShareData_files(const ShareData *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("files")));
}


void ShareData_set_files(ShareData* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("files"), em_Val_from(value));
}


jb_USVString ShareData_title(const ShareData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("title")));
}


void ShareData_set_title(ShareData* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_USVString ShareData_text(const ShareData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("text")));
}


void ShareData_set_text(ShareData* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_USVString ShareData_url(const ShareData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void ShareData_set_url(ShareData* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MIDIOptions, em_Val);


bool MIDIOptions_sysex(const MIDIOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sysex")));
}


void MIDIOptions_set_sysex(MIDIOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sysex"), em_Val_from(value));
}


bool MIDIOptions_software(const MIDIOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("software")));
}


void MIDIOptions_set_software(MIDIOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("software"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Navigator, em_Val);


AudioSession Navigator_audioSession(const Navigator *self) {
    return em_Val_as(AudioSession, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioSession")));
}


AutoplayPolicy Navigator_getAutoplayPolicy(Navigator* self , AudioContext * context) {
    return em_Val_as(AutoplayPolicy, em_Val_call(em_Val_as_val(self->inner), "getAutoplayPolicy", em_Val_from(context)));
}


jb_Promise Navigator_getBattery(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getBattery"));
}


bool Navigator_sendBeacon0(Navigator* self , jb_USVString * url) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "sendBeacon", em_Val_from(url)));
}


bool Navigator_sendBeacon1(Navigator* self , jb_USVString * url, jb_Any * data) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "sendBeacon", em_Val_from(url), em_Val_from(data)));
}


Clipboard Navigator_clipboard(const Navigator *self) {
    return em_Val_as(Clipboard, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clipboard")));
}


ContactsManager Navigator_contacts(const Navigator *self) {
    return em_Val_as(ContactsManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contacts")));
}


CredentialsContainer Navigator_credentials(const Navigator *self) {
    return em_Val_as(CredentialsContainer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentials")));
}


DevicePosture Navigator_devicePosture(const Navigator *self) {
    return em_Val_as(DevicePosture, em_Val_get(em_Val_as_val(self->inner), em_Val_from("devicePosture")));
}


jb_Promise Navigator_requestMediaKeySystemAccess(Navigator* self , jb_DOMString * keySystem, jb_Sequence * supportedConfigurations) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMediaKeySystemAccess", em_Val_from(keySystem), em_Val_from(supportedConfigurations)));
}


jb_Promise Navigator_deprecatedReplaceInURN(Navigator* self , jb_Any * urnOrConfig, jb_Record * replacements) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedReplaceInURN", em_Val_from(urnOrConfig), em_Val_from(replacements)));
}


jb_Promise Navigator_deprecatedURNtoURL0(Navigator* self , jb_Any * urnOrConfig) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedURNtoURL", em_Val_from(urnOrConfig)));
}


jb_Promise Navigator_deprecatedURNtoURL1(Navigator* self , jb_Any * urnOrConfig, bool send_reports) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedURNtoURL", em_Val_from(urnOrConfig), em_Val_from(send_reports)));
}


jb_Sequence Navigator_adAuctionComponents(Navigator* self , unsigned short numAdComponents) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "adAuctionComponents", em_Val_from(numAdComponents)));
}


jb_Sequence Navigator_getGamepads(Navigator* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getGamepads"));
}


Geolocation Navigator_geolocation(const Navigator *self) {
    return em_Val_as(Geolocation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("geolocation")));
}


jb_Promise Navigator_getInstalledRelatedApps(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getInstalledRelatedApps"));
}


jb_Promise Navigator_queryHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "queryHandwritingRecognizer", em_Val_from(constraint)));
}


jb_Promise Navigator_createHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createHandwritingRecognizer", em_Val_from(constraint)));
}


UserActivation Navigator_userActivation(const Navigator *self) {
    return em_Val_as(UserActivation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userActivation")));
}


Ink Navigator_ink(const Navigator *self) {
    return em_Val_as(Ink, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ink")));
}


Scheduling Navigator_scheduling(const Navigator *self) {
    return em_Val_as(Scheduling, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scheduling")));
}


Keyboard Navigator_keyboard(const Navigator *self) {
    return em_Val_as(Keyboard, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyboard")));
}


NavigatorLogin Navigator_login(const Navigator *self) {
    return em_Val_as(NavigatorLogin, em_Val_get(em_Val_as_val(self->inner), em_Val_from("login")));
}


NavigatorManagedData Navigator_managed(const Navigator *self) {
    return em_Val_as(NavigatorManagedData, em_Val_get(em_Val_as_val(self->inner), em_Val_from("managed")));
}


MediaCapabilities Navigator_mediaCapabilities(const Navigator *self) {
    return em_Val_as(MediaCapabilities, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaCapabilities")));
}


MediaDevices Navigator_mediaDevices(const Navigator *self) {
    return em_Val_as(MediaDevices, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaDevices")));
}


PreferenceManager Navigator_preferences(const Navigator *self) {
    return em_Val_as(PreferenceManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preferences")));
}


MediaSession Navigator_mediaSession(const Navigator *self) {
    return em_Val_as(MediaSession, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaSession")));
}


Permissions Navigator_permissions(const Navigator *self) {
    return em_Val_as(Permissions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("permissions")));
}


long Navigator_maxTouchPoints(const Navigator *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTouchPoints")));
}


Presentation Navigator_presentation(const Navigator *self) {
    return em_Val_as(Presentation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentation")));
}


Attribution Navigator_attribution(const Navigator *self) {
    return em_Val_as(Attribution, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attribution")));
}


WakeLock Navigator_wakeLock(const Navigator *self) {
    return em_Val_as(WakeLock, em_Val_get(em_Val_as_val(self->inner), em_Val_from("wakeLock")));
}


Serial Navigator_serial(const Navigator *self) {
    return em_Val_as(Serial, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serial")));
}


ServiceWorkerContainer Navigator_serviceWorker(const Navigator *self) {
    return em_Val_as(ServiceWorkerContainer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serviceWorker")));
}


jb_Promise Navigator_joinAdInterestGroup(Navigator* self , AuctionAdInterestGroup * group) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "joinAdInterestGroup", em_Val_from(group)));
}


jb_Promise Navigator_leaveAdInterestGroup0(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "leaveAdInterestGroup"));
}


jb_Promise Navigator_leaveAdInterestGroup1(Navigator* self , AuctionAdInterestGroupKey * group) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "leaveAdInterestGroup", em_Val_from(group)));
}


jb_Promise Navigator_clearOriginJoinedAdInterestGroups0(Navigator* self , jb_USVString * owner) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearOriginJoinedAdInterestGroups", em_Val_from(owner)));
}


jb_Promise Navigator_clearOriginJoinedAdInterestGroups1(Navigator* self , jb_USVString * owner, jb_Sequence * interestGroupsToKeep) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearOriginJoinedAdInterestGroups", em_Val_from(owner), em_Val_from(interestGroupsToKeep)));
}


jb_Promise Navigator_runAdAuction(Navigator* self , AuctionAdConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "runAdAuction", em_Val_from(config)));
}


bool Navigator_deprecatedRunAdAuctionEnforcesKAnonymity(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deprecatedRunAdAuctionEnforcesKAnonymity")));
}


bool Navigator_canLoadAdAuctionFencedFrame(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "canLoadAdAuctionFencedFrame"));
}


jb_Promise Navigator_getInterestGroupAdAuctionData0(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getInterestGroupAdAuctionData"));
}


jb_Promise Navigator_getInterestGroupAdAuctionData1(Navigator* self , AdAuctionDataConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getInterestGroupAdAuctionData", em_Val_from(config)));
}


jb_Promise Navigator_createAuctionNonce(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createAuctionNonce"));
}


jb_Undefined Navigator_updateAdInterestGroups(Navigator* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateAdInterestGroups"));
}


ProtectedAudience Navigator_protectedAudience(const Navigator *self) {
    return em_Val_as(ProtectedAudience, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protectedAudience")));
}


bool Navigator_vibrate(Navigator* self , jb_Any * pattern) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "vibrate", em_Val_from(pattern)));
}


VirtualKeyboard Navigator_virtualKeyboard(const Navigator *self) {
    return em_Val_as(VirtualKeyboard, em_Val_get(em_Val_as_val(self->inner), em_Val_from("virtualKeyboard")));
}


Bluetooth Navigator_bluetooth(const Navigator *self) {
    return em_Val_as(Bluetooth, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bluetooth")));
}


jb_Promise Navigator_share0(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "share"));
}


jb_Promise Navigator_share1(Navigator* self , ShareData * data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "share", em_Val_from(data)));
}


bool Navigator_canShare0(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "canShare"));
}


bool Navigator_canShare1(Navigator* self , ShareData * data) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "canShare", em_Val_from(data)));
}


HID Navigator_hid(const Navigator *self) {
    return em_Val_as(HID, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hid")));
}


jb_Promise Navigator_requestMIDIAccess0(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMIDIAccess"));
}


jb_Promise Navigator_requestMIDIAccess1(Navigator* self , MIDIOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMIDIAccess", em_Val_from(options)));
}


USB Navigator_usb(const Navigator *self) {
    return em_Val_as(USB, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usb")));
}


XRSystem Navigator_xr(const Navigator *self) {
    return em_Val_as(XRSystem, em_Val_get(em_Val_as_val(self->inner), em_Val_from("xr")));
}


WindowControlsOverlay Navigator_windowControlsOverlay(const Navigator *self) {
    return em_Val_as(WindowControlsOverlay, em_Val_get(em_Val_as_val(self->inner), em_Val_from("windowControlsOverlay")));
}


jb_Promise Navigator_setAppBadge0(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setAppBadge"));
}


jb_Promise Navigator_setAppBadge1(Navigator* self , long long contents) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setAppBadge", em_Val_from(contents)));
}


jb_Promise Navigator_clearAppBadge(Navigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearAppBadge"));
}


double Navigator_deviceMemory(const Navigator *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceMemory")));
}


bool Navigator_globalPrivacyControl(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("globalPrivacyControl")));
}


bool Navigator_taintEnabled(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "taintEnabled"));
}


jb_DOMString Navigator_oscpu(const Navigator *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("oscpu")));
}


jb_DOMString Navigator_language(const Navigator *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("language")));
}


jb_FrozenArray Navigator_languages(const Navigator *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("languages")));
}


bool Navigator_onLine(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("onLine")));
}


jb_Undefined Navigator_registerProtocolHandler(Navigator* self , jb_DOMString * scheme, jb_USVString * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "registerProtocolHandler", em_Val_from(scheme), em_Val_from(url)));
}


jb_Undefined Navigator_unregisterProtocolHandler(Navigator* self , jb_DOMString * scheme, jb_USVString * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unregisterProtocolHandler", em_Val_from(scheme), em_Val_from(url)));
}


bool Navigator_cookieEnabled(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cookieEnabled")));
}


PluginArray Navigator_plugins(const Navigator *self) {
    return em_Val_as(PluginArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("plugins")));
}


MimeTypeArray Navigator_mimeTypes(const Navigator *self) {
    return em_Val_as(MimeTypeArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mimeTypes")));
}


bool Navigator_javaEnabled(Navigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "javaEnabled"));
}


bool Navigator_pdfViewerEnabled(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pdfViewerEnabled")));
}


long long Navigator_hardwareConcurrency(const Navigator *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hardwareConcurrency")));
}


NetworkInformation Navigator_connection(const Navigator *self) {
    return em_Val_as(NetworkInformation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("connection")));
}


StorageBucketManager Navigator_storageBuckets(const Navigator *self) {
    return em_Val_as(StorageBucketManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("storageBuckets")));
}


StorageManager Navigator_storage(const Navigator *self) {
    return em_Val_as(StorageManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("storage")));
}


NavigatorUAData Navigator_userAgentData(const Navigator *self) {
    return em_Val_as(NavigatorUAData, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userAgentData")));
}


LockManager Navigator_locks(const Navigator *self) {
    return em_Val_as(LockManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locks")));
}


bool Navigator_webdriver(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("webdriver")));
}


GPU Navigator_gpu(const Navigator *self) {
    return em_Val_as(GPU, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gpu")));
}


ML Navigator_ml(const Navigator *self) {
    return em_Val_as(ML, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ml")));
}

