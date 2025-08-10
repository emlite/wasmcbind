#include <webbind/Navigator.h>

#include <webbind/AudioSession.h>
#include <webbind/AudioContext.h>
#include <webbind/BatteryManager.h>
#include <webbind/Clipboard.h>
#include <webbind/ContactsManager.h>
#include <webbind/CredentialsContainer.h>
#include <webbind/DevicePosture.h>
#include <webbind/MediaKeySystemAccess.h>
#include <webbind/MediaKeySystemConfiguration.h>
#include <webbind/Gamepad.h>
#include <webbind/Geolocation.h>
#include <webbind/RelatedApplication.h>
#include <webbind/HandwritingRecognizerQueryResult.h>
#include <webbind/HandwritingModelConstraint.h>
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
#include <webbind/AuctionAdInterestGroup.h>
#include <webbind/AuctionAdInterestGroupKey.h>
#include <webbind/AuctionAdConfig.h>
#include <webbind/AdAuctionData.h>
#include <webbind/AdAuctionDataConfig.h>
#include <webbind/ProtectedAudience.h>
#include <webbind/VirtualKeyboard.h>
#include <webbind/Bluetooth.h>
#include <webbind/ShareData.h>
#include <webbind/HID.h>
#include <webbind/MIDIAccess.h>
#include <webbind/MIDIOptions.h>
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


bool Navigator_sendBeacon0(Navigator* self , jb_String * url) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "sendBeacon", em_Val_from(url)));
}


bool Navigator_sendBeacon1(Navigator* self , jb_String * url, jb_Any * data) {
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


jb_Promise Navigator_requestMediaKeySystemAccess(Navigator* self , jb_String * keySystem, jb_Array * supportedConfigurations) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestMediaKeySystemAccess", em_Val_from(keySystem), em_Val_from(supportedConfigurations)));
}


jb_Promise Navigator_deprecatedReplaceInURN(Navigator* self , jb_Any * urnOrConfig, jb_Object * replacements) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedReplaceInURN", em_Val_from(urnOrConfig), em_Val_from(replacements)));
}


jb_Promise Navigator_deprecatedURNtoURL0(Navigator* self , jb_Any * urnOrConfig) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedURNtoURL", em_Val_from(urnOrConfig)));
}


jb_Promise Navigator_deprecatedURNtoURL1(Navigator* self , jb_Any * urnOrConfig, bool send_reports) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deprecatedURNtoURL", em_Val_from(urnOrConfig), em_Val_from(send_reports)));
}


jb_Array Navigator_adAuctionComponents(Navigator* self , unsigned short numAdComponents) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "adAuctionComponents", em_Val_from(numAdComponents)));
}


jb_Array Navigator_getGamepads(Navigator* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getGamepads"));
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


jb_Promise Navigator_clearOriginJoinedAdInterestGroups0(Navigator* self , jb_String * owner) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearOriginJoinedAdInterestGroups", em_Val_from(owner)));
}


jb_Promise Navigator_clearOriginJoinedAdInterestGroups1(Navigator* self , jb_String * owner, jb_Array * interestGroupsToKeep) {
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


jb_String Navigator_oscpu(const Navigator *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("oscpu")));
}


jb_String Navigator_language(const Navigator *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("language")));
}


jb_Array Navigator_languages(const Navigator *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("languages")));
}


bool Navigator_onLine(const Navigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("onLine")));
}


jb_Undefined Navigator_registerProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "registerProtocolHandler", em_Val_from(scheme), em_Val_from(url)));
}


jb_Undefined Navigator_unregisterProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url) {
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

