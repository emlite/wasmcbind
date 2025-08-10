#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EncodedAudioChunkInit, em_Val);

EncodedAudioChunkType EncodedAudioChunkInit_type(const EncodedAudioChunkInit *self);

void EncodedAudioChunkInit_set_type(EncodedAudioChunkInit* self, EncodedAudioChunkType * value);

long long EncodedAudioChunkInit_timestamp(const EncodedAudioChunkInit *self);

void EncodedAudioChunkInit_set_timestamp(EncodedAudioChunkInit* self, long long value);

long long EncodedAudioChunkInit_duration(const EncodedAudioChunkInit *self);

void EncodedAudioChunkInit_set_duration(EncodedAudioChunkInit* self, long long value);

jb_Any EncodedAudioChunkInit_data(const EncodedAudioChunkInit *self);

void EncodedAudioChunkInit_set_data(EncodedAudioChunkInit* self, jb_Any * value);

jb_Array EncodedAudioChunkInit_transfer(const EncodedAudioChunkInit *self);

void EncodedAudioChunkInit_set_transfer(EncodedAudioChunkInit* self, jb_Array * value);

EncodedAudioChunkInit EncodedAudioChunkInit_new();

#ifdef __cplusplus
}
#endif
