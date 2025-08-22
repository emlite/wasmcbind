#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Storage Storage;

/** @brief Dictionary type StorageEventInit */
DECLARE_EMLITE_TYPE(StorageEventInit, EventInit);

/** @brief Getter of the key property */
jb_String StorageEventInit_key(const StorageEventInit *self);

/** @brief Setter of the key property */
void StorageEventInit_set_key(StorageEventInit* self, jb_String * value);

/** @brief Getter of the oldValue property */
jb_String StorageEventInit_oldValue(const StorageEventInit *self);

/** @brief Setter of the oldValue property */
void StorageEventInit_set_oldValue(StorageEventInit* self, jb_String * value);

/** @brief Getter of the newValue property */
jb_String StorageEventInit_newValue(const StorageEventInit *self);

/** @brief Setter of the newValue property */
void StorageEventInit_set_newValue(StorageEventInit* self, jb_String * value);

/** @brief Getter of the url property */
jb_String StorageEventInit_url(const StorageEventInit *self);

/** @brief Setter of the url property */
void StorageEventInit_set_url(StorageEventInit* self, jb_String * value);

/** @brief Getter of the storageArea property */
Storage StorageEventInit_storageArea(const StorageEventInit *self);

/** @brief Setter of the storageArea property */
void StorageEventInit_set_storageArea(StorageEventInit* self, Storage * value);

/** @brief Constructor of the StorageEventInit dictionary type */
StorageEventInit StorageEventInit_new();

#ifdef __cplusplus
}
#endif
