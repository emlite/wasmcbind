#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaCapabilities MediaCapabilities;
typedef struct Permissions Permissions;
typedef struct Serial Serial;
typedef struct ServiceWorkerContainer ServiceWorkerContainer;
typedef struct HID HID;
typedef struct USB USB;
typedef struct NetworkInformation NetworkInformation;
typedef struct StorageBucketManager StorageBucketManager;
typedef struct StorageManager StorageManager;
typedef struct NavigatorUAData NavigatorUAData;
typedef struct LockManager LockManager;
typedef struct GPU GPU;
typedef struct ML ML;


/**
 * @brief Interface WorkerNavigator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator)
 */
DECLARE_EMLITE_TYPE(WorkerNavigator, em_Val);

/**
 * @brief Gets the `mediaCapabilities` property. 
*/
MediaCapabilities WorkerNavigator_mediaCapabilities(const WorkerNavigator *self);

/**
 * @brief Gets the `permissions` property. 
*/
Permissions WorkerNavigator_permissions(const WorkerNavigator *self);

/**
 * @brief Gets the `serial` property. 
*/
Serial WorkerNavigator_serial(const WorkerNavigator *self);

/**
 * @brief Gets the `serviceWorker` property. 
*/
ServiceWorkerContainer WorkerNavigator_serviceWorker(const WorkerNavigator *self);

/**
 * @brief Gets the `hid` property. 
*/
HID WorkerNavigator_hid(const WorkerNavigator *self);

/**
 * @brief Gets the `usb` property. 
*/
USB WorkerNavigator_usb(const WorkerNavigator *self);

/**
 * @brief Calls the `setAppBadge` method. 
*/
jb_Promise WorkerNavigator_setAppBadge0(WorkerNavigator* self );

/**
 * @brief Calls the `setAppBadge` method. 
*/
jb_Promise WorkerNavigator_setAppBadge1(WorkerNavigator* self , long long contents);

/**
 * @brief Calls the `clearAppBadge` method. 
*/
jb_Promise WorkerNavigator_clearAppBadge(WorkerNavigator* self );

/**
 * @brief Gets the `deviceMemory` property. 
*/
double WorkerNavigator_deviceMemory(const WorkerNavigator *self);

/**
 * @brief Gets the `globalPrivacyControl` property. 
*/
bool WorkerNavigator_globalPrivacyControl(const WorkerNavigator *self);

/**
 * @brief Calls the `taintEnabled` method. 
*/
bool WorkerNavigator_taintEnabled(WorkerNavigator* self );

/**
 * @brief Gets the `oscpu` property. 
*/
jb_String WorkerNavigator_oscpu(const WorkerNavigator *self);

/**
 * @brief Gets the `language` property. 
*/
jb_String WorkerNavigator_language(const WorkerNavigator *self);

/**
 * @brief Gets the `languages` property. 
*/
jb_Array WorkerNavigator_languages(const WorkerNavigator *self);

/**
 * @brief Gets the `onLine` property. 
*/
bool WorkerNavigator_onLine(const WorkerNavigator *self);

/**
 * @brief Gets the `hardwareConcurrency` property. 
*/
long long WorkerNavigator_hardwareConcurrency(const WorkerNavigator *self);

/**
 * @brief Gets the `connection` property. 
*/
NetworkInformation WorkerNavigator_connection(const WorkerNavigator *self);

/**
 * @brief Gets the `storageBuckets` property. 
*/
StorageBucketManager WorkerNavigator_storageBuckets(const WorkerNavigator *self);

/**
 * @brief Gets the `storage` property. 
*/
StorageManager WorkerNavigator_storage(const WorkerNavigator *self);

/**
 * @brief Gets the `userAgentData` property. 
*/
NavigatorUAData WorkerNavigator_userAgentData(const WorkerNavigator *self);

/**
 * @brief Gets the `locks` property. 
*/
LockManager WorkerNavigator_locks(const WorkerNavigator *self);

/**
 * @brief Gets the `gpu` property. 
*/
GPU WorkerNavigator_gpu(const WorkerNavigator *self);

/**
 * @brief Gets the `ml` property. 
*/
ML WorkerNavigator_ml(const WorkerNavigator *self);

#ifdef __cplusplus
}
#endif
