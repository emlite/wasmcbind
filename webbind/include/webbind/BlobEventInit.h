#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Blob Blob;

DECLARE_EMLITE_TYPE(BlobEventInit, EventInit);

Blob BlobEventInit_data(const BlobEventInit *self);

void BlobEventInit_set_data(BlobEventInit* self, Blob * value);

jb_Any BlobEventInit_timecode(const BlobEventInit *self);

void BlobEventInit_set_timecode(BlobEventInit* self, jb_Any * value);

BlobEventInit BlobEventInit_new();

#ifdef __cplusplus
}
#endif
