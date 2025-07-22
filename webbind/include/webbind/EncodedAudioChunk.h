#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EncodedAudioChunk;


DECLARE_EMLITE_TYPE(EncodedAudioChunk, em_Val);

EncodedAudioChunk EncodedAudioChunk_new(const jb_Any* init);

EncodedAudioChunkType EncodedAudioChunk_type( const EncodedAudioChunk *self);

long long EncodedAudioChunk_timestamp( const EncodedAudioChunk *self);

long long EncodedAudioChunk_duration( const EncodedAudioChunk *self);

unsigned long EncodedAudioChunk_byteLength( const EncodedAudioChunk *self);

jb_Undefined EncodedAudioChunk_copyTo(EncodedAudioChunk* self , const jb_Any* destination);
