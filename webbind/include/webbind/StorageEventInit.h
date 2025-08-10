#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Storage Storage;

DECLARE_EMLITE_TYPE(StorageEventInit, EventInit);

jb_String StorageEventInit_key(const StorageEventInit *self);

void StorageEventInit_set_key(StorageEventInit* self, jb_String * value);

jb_String StorageEventInit_oldValue(const StorageEventInit *self);

void StorageEventInit_set_oldValue(StorageEventInit* self, jb_String * value);

jb_String StorageEventInit_newValue(const StorageEventInit *self);

void StorageEventInit_set_newValue(StorageEventInit* self, jb_String * value);

jb_String StorageEventInit_url(const StorageEventInit *self);

void StorageEventInit_set_url(StorageEventInit* self, jb_String * value);

Storage StorageEventInit_storageArea(const StorageEventInit *self);

void StorageEventInit_set_storageArea(StorageEventInit* self, Storage * value);

StorageEventInit StorageEventInit_new();

#ifdef __cplusplus
}
#endif
