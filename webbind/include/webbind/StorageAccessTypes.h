#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StorageAccessTypes */
DECLARE_EMLITE_TYPE(StorageAccessTypes, em_Val);

/** @brief Getter of the all property */
bool StorageAccessTypes_all(const StorageAccessTypes *self);

/** @brief Setter of the all property */
void StorageAccessTypes_set_all(StorageAccessTypes* self, bool value);

/** @brief Getter of the cookies property */
bool StorageAccessTypes_cookies(const StorageAccessTypes *self);

/** @brief Setter of the cookies property */
void StorageAccessTypes_set_cookies(StorageAccessTypes* self, bool value);

/** @brief Getter of the sessionStorage property */
bool StorageAccessTypes_sessionStorage(const StorageAccessTypes *self);

/** @brief Setter of the sessionStorage property */
void StorageAccessTypes_set_sessionStorage(StorageAccessTypes* self, bool value);

/** @brief Getter of the localStorage property */
bool StorageAccessTypes_localStorage(const StorageAccessTypes *self);

/** @brief Setter of the localStorage property */
void StorageAccessTypes_set_localStorage(StorageAccessTypes* self, bool value);

/** @brief Getter of the indexedDB property */
bool StorageAccessTypes_indexedDB(const StorageAccessTypes *self);

/** @brief Setter of the indexedDB property */
void StorageAccessTypes_set_indexedDB(StorageAccessTypes* self, bool value);

/** @brief Getter of the locks property */
bool StorageAccessTypes_locks(const StorageAccessTypes *self);

/** @brief Setter of the locks property */
void StorageAccessTypes_set_locks(StorageAccessTypes* self, bool value);

/** @brief Getter of the caches property */
bool StorageAccessTypes_caches(const StorageAccessTypes *self);

/** @brief Setter of the caches property */
void StorageAccessTypes_set_caches(StorageAccessTypes* self, bool value);

/** @brief Getter of the getDirectory property */
bool StorageAccessTypes_getDirectory(const StorageAccessTypes *self);

/** @brief Setter of the getDirectory property */
void StorageAccessTypes_set_getDirectory(StorageAccessTypes* self, bool value);

/** @brief Getter of the estimate property */
bool StorageAccessTypes_estimate(const StorageAccessTypes *self);

/** @brief Setter of the estimate property */
void StorageAccessTypes_set_estimate(StorageAccessTypes* self, bool value);

/** @brief Getter of the createObjectURL property */
bool StorageAccessTypes_createObjectURL(const StorageAccessTypes *self);

/** @brief Setter of the createObjectURL property */
void StorageAccessTypes_set_createObjectURL(StorageAccessTypes* self, bool value);

/** @brief Getter of the revokeObjectURL property */
bool StorageAccessTypes_revokeObjectURL(const StorageAccessTypes *self);

/** @brief Setter of the revokeObjectURL property */
void StorageAccessTypes_set_revokeObjectURL(StorageAccessTypes* self, bool value);

/** @brief Getter of the BroadcastChannel property */
bool StorageAccessTypes_BroadcastChannel_(const StorageAccessTypes *self);

/** @brief Setter of the BroadcastChannel property */
void StorageAccessTypes_set_BroadcastChannel_(StorageAccessTypes* self, bool value);

/** @brief Getter of the SharedWorker property */
bool StorageAccessTypes_SharedWorker_(const StorageAccessTypes *self);

/** @brief Setter of the SharedWorker property */
void StorageAccessTypes_set_SharedWorker_(StorageAccessTypes* self, bool value);

/** @brief Constructor of the StorageAccessTypes dictionary type */
StorageAccessTypes StorageAccessTypes_new();

#ifdef __cplusplus
}
#endif
