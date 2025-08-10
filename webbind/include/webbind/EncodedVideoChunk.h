#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EncodedVideoChunkInit EncodedVideoChunkInit;

DECLARE_EMLITE_TYPE(EncodedVideoChunk, em_Val);

EncodedVideoChunk EncodedVideoChunk_new(EncodedVideoChunkInit * init);

EncodedVideoChunkType EncodedVideoChunk_type(const EncodedVideoChunk *self);

long long EncodedVideoChunk_timestamp(const EncodedVideoChunk *self);

long long EncodedVideoChunk_duration(const EncodedVideoChunk *self);

unsigned long EncodedVideoChunk_byteLength(const EncodedVideoChunk *self);

jb_Undefined EncodedVideoChunk_copyTo(EncodedVideoChunk* self , jb_Any * destination);

#ifdef __cplusplus
}
#endif
