#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BlobEventInit BlobEventInit;
typedef struct Blob Blob;

DECLARE_EMLITE_TYPE(BlobEvent, Event);

BlobEvent BlobEvent_new(jb_String * type, BlobEventInit * eventInitDict);

Blob BlobEvent_data(const BlobEvent *self);

jb_Any BlobEvent_timecode(const BlobEvent *self);

#ifdef __cplusplus
}
#endif
