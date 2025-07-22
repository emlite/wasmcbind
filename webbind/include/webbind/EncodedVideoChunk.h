#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EncodedVideoChunk;


DECLARE_EMLITE_TYPE(EncodedVideoChunk, em_Val);

EncodedVideoChunk EncodedVideoChunk_new(const jb_Any* init);

EncodedVideoChunkType EncodedVideoChunk_type( const EncodedVideoChunk *self);

long long EncodedVideoChunk_timestamp( const EncodedVideoChunk *self);

long long EncodedVideoChunk_duration( const EncodedVideoChunk *self);

unsigned long EncodedVideoChunk_byteLength( const EncodedVideoChunk *self);

jb_Undefined EncodedVideoChunk_copyTo(EncodedVideoChunk* self , const jb_Any* destination);
