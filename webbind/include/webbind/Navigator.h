#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioSession AudioSession;
typedef struct AudioContext AudioContext;
typedef struct BatteryManager BatteryManager;
typedef struct Clipboard Clipboard;
typedef struct ContactsManager ContactsManager;
typedef struct CredentialsContainer CredentialsContainer;
typedef struct DevicePosture DevicePosture;
typedef struct MediaKeySystemAccess MediaKeySystemAccess;
typedef struct MediaKeySystemConfiguration MediaKeySystemConfiguration;
typedef struct Gamepad Gamepad;
typedef struct Geolocation Geolocation;
typedef struct RelatedApplication RelatedApplication;
typedef struct HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult;
typedef struct HandwritingModelConstraint HandwritingModelConstraint;
typedef struct HandwritingRecognizer HandwritingRecognizer;
typedef struct UserActivation UserActivation;
typedef struct Ink Ink;
typedef struct Scheduling Scheduling;
typedef struct Keyboard Keyboard;
typedef struct NavigatorLogin NavigatorLogin;
typedef struct NavigatorManagedData NavigatorManagedData;
typedef struct MediaCapabilities MediaCapabilities;
typedef struct MediaDevices MediaDevices;
typedef struct PreferenceManager PreferenceManager;
typedef struct MediaSession MediaSession;
typedef struct Permissions Permissions;
typedef struct Presentation Presentation;
typedef struct Attribution Attribution;
typedef struct WakeLock WakeLock;
typedef struct Serial Serial;
typedef struct ServiceWorkerContainer ServiceWorkerContainer;
typedef struct AuctionAdInterestGroup AuctionAdInterestGroup;
typedef struct AuctionAdInterestGroupKey AuctionAdInterestGroupKey;
typedef struct AuctionAdConfig AuctionAdConfig;
typedef struct AdAuctionData AdAuctionData;
typedef struct AdAuctionDataConfig AdAuctionDataConfig;
typedef struct ProtectedAudience ProtectedAudience;
typedef struct VirtualKeyboard VirtualKeyboard;
typedef struct Bluetooth Bluetooth;
typedef struct ShareData ShareData;
typedef struct HID HID;
typedef struct MIDIAccess MIDIAccess;
typedef struct MIDIOptions MIDIOptions;
typedef struct USB USB;
typedef struct XRSystem XRSystem;
typedef struct WindowControlsOverlay WindowControlsOverlay;
typedef struct PluginArray PluginArray;
typedef struct MimeTypeArray MimeTypeArray;
typedef struct NetworkInformation NetworkInformation;
typedef struct StorageBucketManager StorageBucketManager;
typedef struct StorageManager StorageManager;
typedef struct NavigatorUAData NavigatorUAData;
typedef struct LockManager LockManager;
typedef struct GPU GPU;
typedef struct ML ML;


/**
 * @brief Interface Navigator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Navigator)
 */
DECLARE_EMLITE_TYPE(Navigator, em_Val);

/**
 * @brief Gets the `audioSession` property. 
*/
AudioSession Navigator_audioSession(const Navigator *self);

/**
 * @brief Calls the `getAutoplayPolicy` method. 
*/
AutoplayPolicy Navigator_getAutoplayPolicy(Navigator* self , AudioContext * context);

/**
 * @brief Calls the `getBattery` method. 
*/
jb_Promise Navigator_getBattery(Navigator* self );

/**
 * @brief Calls the `sendBeacon` method. 
*/
bool Navigator_sendBeacon0(Navigator* self , jb_String * url);

/**
 * @brief Calls the `sendBeacon` method. 
*/
bool Navigator_sendBeacon1(Navigator* self , jb_String * url, jb_Any * data);

/**
 * @brief Gets the `clipboard` property. 
*/
Clipboard Navigator_clipboard(const Navigator *self);

/**
 * @brief Gets the `contacts` property. 
*/
ContactsManager Navigator_contacts(const Navigator *self);

/**
 * @brief Gets the `credentials` property. 
*/
CredentialsContainer Navigator_credentials(const Navigator *self);

/**
 * @brief Gets the `devicePosture` property. 
*/
DevicePosture Navigator_devicePosture(const Navigator *self);

/**
 * @brief Calls the `requestMediaKeySystemAccess` method. 
*/
jb_Promise Navigator_requestMediaKeySystemAccess(Navigator* self , jb_String * keySystem, jb_Array * supportedConfigurations);

/**
 * @brief Calls the `deprecatedReplaceInURN` method. 
*/
jb_Promise Navigator_deprecatedReplaceInURN(Navigator* self , jb_Any * urnOrConfig, jb_Object * replacements);

/**
 * @brief Calls the `deprecatedURNtoURL` method. 
*/
jb_Promise Navigator_deprecatedURNtoURL0(Navigator* self , jb_Any * urnOrConfig);

/**
 * @brief Calls the `deprecatedURNtoURL` method. 
*/
jb_Promise Navigator_deprecatedURNtoURL1(Navigator* self , jb_Any * urnOrConfig, bool send_reports);

/**
 * @brief Calls the `adAuctionComponents` method. 
*/
jb_Array Navigator_adAuctionComponents(Navigator* self , unsigned short numAdComponents);

/**
 * @brief Calls the `getGamepads` method. 
*/
jb_Array Navigator_getGamepads(Navigator* self );

/**
 * @brief Gets the `geolocation` property. 
*/
Geolocation Navigator_geolocation(const Navigator *self);

/**
 * @brief Calls the `getInstalledRelatedApps` method. 
*/
jb_Promise Navigator_getInstalledRelatedApps(Navigator* self );

/**
 * @brief Calls the `queryHandwritingRecognizer` method. 
*/
jb_Promise Navigator_queryHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint);

/**
 * @brief Calls the `createHandwritingRecognizer` method. 
*/
jb_Promise Navigator_createHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint);

/**
 * @brief Gets the `userActivation` property. 
*/
UserActivation Navigator_userActivation(const Navigator *self);

/**
 * @brief Gets the `ink` property. 
*/
Ink Navigator_ink(const Navigator *self);

/**
 * @brief Gets the `scheduling` property. 
*/
Scheduling Navigator_scheduling(const Navigator *self);

/**
 * @brief Gets the `keyboard` property. 
*/
Keyboard Navigator_keyboard(const Navigator *self);

/**
 * @brief Gets the `login` property. 
*/
NavigatorLogin Navigator_login(const Navigator *self);

/**
 * @brief Gets the `managed` property. 
*/
NavigatorManagedData Navigator_managed(const Navigator *self);

/**
 * @brief Gets the `mediaCapabilities` property. 
*/
MediaCapabilities Navigator_mediaCapabilities(const Navigator *self);

/**
 * @brief Gets the `mediaDevices` property. 
*/
MediaDevices Navigator_mediaDevices(const Navigator *self);

/**
 * @brief Gets the `preferences` property. 
*/
PreferenceManager Navigator_preferences(const Navigator *self);

/**
 * @brief Gets the `mediaSession` property. 
*/
MediaSession Navigator_mediaSession(const Navigator *self);

/**
 * @brief Gets the `permissions` property. 
*/
Permissions Navigator_permissions(const Navigator *self);

/**
 * @brief Gets the `maxTouchPoints` property. 
*/
long Navigator_maxTouchPoints(const Navigator *self);

/**
 * @brief Gets the `presentation` property. 
*/
Presentation Navigator_presentation(const Navigator *self);

/**
 * @brief Gets the `attribution` property. 
*/
Attribution Navigator_attribution(const Navigator *self);

/**
 * @brief Gets the `wakeLock` property. 
*/
WakeLock Navigator_wakeLock(const Navigator *self);

/**
 * @brief Gets the `serial` property. 
*/
Serial Navigator_serial(const Navigator *self);

/**
 * @brief Gets the `serviceWorker` property. 
*/
ServiceWorkerContainer Navigator_serviceWorker(const Navigator *self);

/**
 * @brief Calls the `joinAdInterestGroup` method. 
*/
jb_Promise Navigator_joinAdInterestGroup(Navigator* self , AuctionAdInterestGroup * group);

/**
 * @brief Calls the `leaveAdInterestGroup` method. 
*/
jb_Promise Navigator_leaveAdInterestGroup0(Navigator* self );

/**
 * @brief Calls the `leaveAdInterestGroup` method. 
*/
jb_Promise Navigator_leaveAdInterestGroup1(Navigator* self , AuctionAdInterestGroupKey * group);

/**
 * @brief Calls the `clearOriginJoinedAdInterestGroups` method. 
*/
jb_Promise Navigator_clearOriginJoinedAdInterestGroups0(Navigator* self , jb_String * owner);

/**
 * @brief Calls the `clearOriginJoinedAdInterestGroups` method. 
*/
jb_Promise Navigator_clearOriginJoinedAdInterestGroups1(Navigator* self , jb_String * owner, jb_Array * interestGroupsToKeep);

/**
 * @brief Calls the `runAdAuction` method. 
*/
jb_Promise Navigator_runAdAuction(Navigator* self , AuctionAdConfig * config);

/**
 * @brief Gets the `deprecatedRunAdAuctionEnforcesKAnonymity` property. 
*/
bool Navigator_deprecatedRunAdAuctionEnforcesKAnonymity(const Navigator *self);

/**
 * @brief Calls the `canLoadAdAuctionFencedFrame` method. 
*/
bool Navigator_canLoadAdAuctionFencedFrame(Navigator* self );

/**
 * @brief Calls the `getInterestGroupAdAuctionData` method. 
*/
jb_Promise Navigator_getInterestGroupAdAuctionData0(Navigator* self );

/**
 * @brief Calls the `getInterestGroupAdAuctionData` method. 
*/
jb_Promise Navigator_getInterestGroupAdAuctionData1(Navigator* self , AdAuctionDataConfig * config);

/**
 * @brief Calls the `createAuctionNonce` method. 
*/
jb_Promise Navigator_createAuctionNonce(Navigator* self );

/**
 * @brief Calls the `updateAdInterestGroups` method. 
*/
jb_Undefined Navigator_updateAdInterestGroups(Navigator* self );

/**
 * @brief Gets the `protectedAudience` property. 
*/
ProtectedAudience Navigator_protectedAudience(const Navigator *self);

/**
 * @brief Calls the `vibrate` method. 
*/
bool Navigator_vibrate(Navigator* self , jb_Any * pattern);

/**
 * @brief Gets the `virtualKeyboard` property. 
*/
VirtualKeyboard Navigator_virtualKeyboard(const Navigator *self);

/**
 * @brief Gets the `bluetooth` property. 
*/
Bluetooth Navigator_bluetooth(const Navigator *self);

/**
 * @brief Calls the `share` method. 
*/
jb_Promise Navigator_share0(Navigator* self );

/**
 * @brief Calls the `share` method. 
*/
jb_Promise Navigator_share1(Navigator* self , ShareData * data);

/**
 * @brief Calls the `canShare` method. 
*/
bool Navigator_canShare0(Navigator* self );

/**
 * @brief Calls the `canShare` method. 
*/
bool Navigator_canShare1(Navigator* self , ShareData * data);

/**
 * @brief Gets the `hid` property. 
*/
HID Navigator_hid(const Navigator *self);

/**
 * @brief Calls the `requestMIDIAccess` method. 
*/
jb_Promise Navigator_requestMIDIAccess0(Navigator* self );

/**
 * @brief Calls the `requestMIDIAccess` method. 
*/
jb_Promise Navigator_requestMIDIAccess1(Navigator* self , MIDIOptions * options);

/**
 * @brief Gets the `usb` property. 
*/
USB Navigator_usb(const Navigator *self);

/**
 * @brief Gets the `xr` property. 
*/
XRSystem Navigator_xr(const Navigator *self);

/**
 * @brief Gets the `windowControlsOverlay` property. 
*/
WindowControlsOverlay Navigator_windowControlsOverlay(const Navigator *self);

/**
 * @brief Calls the `setAppBadge` method. 
*/
jb_Promise Navigator_setAppBadge0(Navigator* self );

/**
 * @brief Calls the `setAppBadge` method. 
*/
jb_Promise Navigator_setAppBadge1(Navigator* self , long long contents);

/**
 * @brief Calls the `clearAppBadge` method. 
*/
jb_Promise Navigator_clearAppBadge(Navigator* self );

/**
 * @brief Gets the `deviceMemory` property. 
*/
double Navigator_deviceMemory(const Navigator *self);

/**
 * @brief Gets the `globalPrivacyControl` property. 
*/
bool Navigator_globalPrivacyControl(const Navigator *self);

/**
 * @brief Calls the `taintEnabled` method. 
*/
bool Navigator_taintEnabled(Navigator* self );

/**
 * @brief Gets the `oscpu` property. 
*/
jb_String Navigator_oscpu(const Navigator *self);

/**
 * @brief Gets the `language` property. 
*/
jb_String Navigator_language(const Navigator *self);

/**
 * @brief Gets the `languages` property. 
*/
jb_Array Navigator_languages(const Navigator *self);

/**
 * @brief Gets the `onLine` property. 
*/
bool Navigator_onLine(const Navigator *self);

/**
 * @brief Calls the `registerProtocolHandler` method. 
*/
jb_Undefined Navigator_registerProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url);

/**
 * @brief Calls the `unregisterProtocolHandler` method. 
*/
jb_Undefined Navigator_unregisterProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url);

/**
 * @brief Gets the `cookieEnabled` property. 
*/
bool Navigator_cookieEnabled(const Navigator *self);

/**
 * @brief Gets the `plugins` property. 
*/
PluginArray Navigator_plugins(const Navigator *self);

/**
 * @brief Gets the `mimeTypes` property. 
*/
MimeTypeArray Navigator_mimeTypes(const Navigator *self);

/**
 * @brief Calls the `javaEnabled` method. 
*/
bool Navigator_javaEnabled(Navigator* self );

/**
 * @brief Gets the `pdfViewerEnabled` property. 
*/
bool Navigator_pdfViewerEnabled(const Navigator *self);

/**
 * @brief Gets the `hardwareConcurrency` property. 
*/
long long Navigator_hardwareConcurrency(const Navigator *self);

/**
 * @brief Gets the `connection` property. 
*/
NetworkInformation Navigator_connection(const Navigator *self);

/**
 * @brief Gets the `storageBuckets` property. 
*/
StorageBucketManager Navigator_storageBuckets(const Navigator *self);

/**
 * @brief Gets the `storage` property. 
*/
StorageManager Navigator_storage(const Navigator *self);

/**
 * @brief Gets the `userAgentData` property. 
*/
NavigatorUAData Navigator_userAgentData(const Navigator *self);

/**
 * @brief Gets the `locks` property. 
*/
LockManager Navigator_locks(const Navigator *self);

/**
 * @brief Gets the `webdriver` property. 
*/
bool Navigator_webdriver(const Navigator *self);

/**
 * @brief Gets the `gpu` property. 
*/
GPU Navigator_gpu(const Navigator *self);

/**
 * @brief Gets the `ml` property. 
*/
ML Navigator_ml(const Navigator *self);

#ifdef __cplusplus
}
#endif
