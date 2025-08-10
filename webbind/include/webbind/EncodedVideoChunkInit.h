#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EncodedVideoChunkInit, em_Val);

EncodedVideoChunkType EncodedVideoChunkInit_type(const EncodedVideoChunkInit *self);

void EncodedVideoChunkInit_set_type(EncodedVideoChunkInit* self, EncodedVideoChunkType * value);

long long EncodedVideoChunkInit_timestamp(const EncodedVideoChunkInit *self);

void EncodedVideoChunkInit_set_timestamp(EncodedVideoChunkInit* self, long long value);

long long EncodedVideoChunkInit_duration(const EncodedVideoChunkInit *self);

void EncodedVideoChunkInit_set_duration(EncodedVideoChunkInit* self, long long value);

jb_Any EncodedVideoChunkInit_data(const EncodedVideoChunkInit *self);

void EncodedVideoChunkInit_set_data(EncodedVideoChunkInit* self, jb_Any * value);

jb_Array EncodedVideoChunkInit_transfer(const EncodedVideoChunkInit *self);

void EncodedVideoChunkInit_set_transfer(EncodedVideoChunkInit* self, jb_Array * value);

EncodedVideoChunkInit EncodedVideoChunkInit_new();

#ifdef __cplusplus
}
#endif
