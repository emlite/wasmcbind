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

DECLARE_EMLITE_TYPE(Navigator, em_Val);

AudioSession Navigator_audioSession(const Navigator *self);

AutoplayPolicy Navigator_getAutoplayPolicy(Navigator* self , AudioContext * context);

jb_Promise Navigator_getBattery(Navigator* self );

bool Navigator_sendBeacon0(Navigator* self , jb_String * url);

bool Navigator_sendBeacon1(Navigator* self , jb_String * url, jb_Any * data);

Clipboard Navigator_clipboard(const Navigator *self);

ContactsManager Navigator_contacts(const Navigator *self);

CredentialsContainer Navigator_credentials(const Navigator *self);

DevicePosture Navigator_devicePosture(const Navigator *self);

jb_Promise Navigator_requestMediaKeySystemAccess(Navigator* self , jb_String * keySystem, jb_Array * supportedConfigurations);

jb_Promise Navigator_deprecatedReplaceInURN(Navigator* self , jb_Any * urnOrConfig, jb_Object * replacements);

jb_Promise Navigator_deprecatedURNtoURL0(Navigator* self , jb_Any * urnOrConfig);

jb_Promise Navigator_deprecatedURNtoURL1(Navigator* self , jb_Any * urnOrConfig, bool send_reports);

jb_Array Navigator_adAuctionComponents(Navigator* self , unsigned short numAdComponents);

jb_Array Navigator_getGamepads(Navigator* self );

Geolocation Navigator_geolocation(const Navigator *self);

jb_Promise Navigator_getInstalledRelatedApps(Navigator* self );

jb_Promise Navigator_queryHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint);

jb_Promise Navigator_createHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint);

UserActivation Navigator_userActivation(const Navigator *self);

Ink Navigator_ink(const Navigator *self);

Scheduling Navigator_scheduling(const Navigator *self);

Keyboard Navigator_keyboard(const Navigator *self);

NavigatorLogin Navigator_login(const Navigator *self);

NavigatorManagedData Navigator_managed(const Navigator *self);

MediaCapabilities Navigator_mediaCapabilities(const Navigator *self);

MediaDevices Navigator_mediaDevices(const Navigator *self);

PreferenceManager Navigator_preferences(const Navigator *self);

MediaSession Navigator_mediaSession(const Navigator *self);

Permissions Navigator_permissions(const Navigator *self);

long Navigator_maxTouchPoints(const Navigator *self);

Presentation Navigator_presentation(const Navigator *self);

Attribution Navigator_attribution(const Navigator *self);

WakeLock Navigator_wakeLock(const Navigator *self);

Serial Navigator_serial(const Navigator *self);

ServiceWorkerContainer Navigator_serviceWorker(const Navigator *self);

jb_Promise Navigator_joinAdInterestGroup(Navigator* self , AuctionAdInterestGroup * group);

jb_Promise Navigator_leaveAdInterestGroup0(Navigator* self );

jb_Promise Navigator_leaveAdInterestGroup1(Navigator* self , AuctionAdInterestGroupKey * group);

jb_Promise Navigator_clearOriginJoinedAdInterestGroups0(Navigator* self , jb_String * owner);

jb_Promise Navigator_clearOriginJoinedAdInterestGroups1(Navigator* self , jb_String * owner, jb_Array * interestGroupsToKeep);

jb_Promise Navigator_runAdAuction(Navigator* self , AuctionAdConfig * config);

bool Navigator_deprecatedRunAdAuctionEnforcesKAnonymity(const Navigator *self);

bool Navigator_canLoadAdAuctionFencedFrame(Navigator* self );

jb_Promise Navigator_getInterestGroupAdAuctionData0(Navigator* self );

jb_Promise Navigator_getInterestGroupAdAuctionData1(Navigator* self , AdAuctionDataConfig * config);

jb_Promise Navigator_createAuctionNonce(Navigator* self );

jb_Undefined Navigator_updateAdInterestGroups(Navigator* self );

ProtectedAudience Navigator_protectedAudience(const Navigator *self);

bool Navigator_vibrate(Navigator* self , jb_Any * pattern);

VirtualKeyboard Navigator_virtualKeyboard(const Navigator *self);

Bluetooth Navigator_bluetooth(const Navigator *self);

jb_Promise Navigator_share0(Navigator* self );

jb_Promise Navigator_share1(Navigator* self , ShareData * data);

bool Navigator_canShare0(Navigator* self );

bool Navigator_canShare1(Navigator* self , ShareData * data);

HID Navigator_hid(const Navigator *self);

jb_Promise Navigator_requestMIDIAccess0(Navigator* self );

jb_Promise Navigator_requestMIDIAccess1(Navigator* self , MIDIOptions * options);

USB Navigator_usb(const Navigator *self);

XRSystem Navigator_xr(const Navigator *self);

WindowControlsOverlay Navigator_windowControlsOverlay(const Navigator *self);

jb_Promise Navigator_setAppBadge0(Navigator* self );

jb_Promise Navigator_setAppBadge1(Navigator* self , long long contents);

jb_Promise Navigator_clearAppBadge(Navigator* self );

double Navigator_deviceMemory(const Navigator *self);

bool Navigator_globalPrivacyControl(const Navigator *self);

bool Navigator_taintEnabled(Navigator* self );

jb_String Navigator_oscpu(const Navigator *self);

jb_String Navigator_language(const Navigator *self);

jb_Array Navigator_languages(const Navigator *self);

bool Navigator_onLine(const Navigator *self);

jb_Undefined Navigator_registerProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url);

jb_Undefined Navigator_unregisterProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url);

bool Navigator_cookieEnabled(const Navigator *self);

PluginArray Navigator_plugins(const Navigator *self);

MimeTypeArray Navigator_mimeTypes(const Navigator *self);

bool Navigator_javaEnabled(Navigator* self );

bool Navigator_pdfViewerEnabled(const Navigator *self);

long long Navigator_hardwareConcurrency(const Navigator *self);

NetworkInformation Navigator_connection(const Navigator *self);

StorageBucketManager Navigator_storageBuckets(const Navigator *self);

StorageManager Navigator_storage(const Navigator *self);

NavigatorUAData Navigator_userAgentData(const Navigator *self);

LockManager Navigator_locks(const Navigator *self);

bool Navigator_webdriver(const Navigator *self);

GPU Navigator_gpu(const Navigator *self);

ML Navigator_ml(const Navigator *self);

#ifdef __cplusplus
}
#endif
