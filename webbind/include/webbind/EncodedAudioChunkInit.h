#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EncodedAudioChunkInit */
DECLARE_EMLITE_TYPE(EncodedAudioChunkInit, em_Val);

/** @brief Getter of the type property */
EncodedAudioChunkType EncodedAudioChunkInit_type(const EncodedAudioChunkInit *self);

/** @brief Setter of the type property */
void EncodedAudioChunkInit_set_type(EncodedAudioChunkInit* self, EncodedAudioChunkType * value);

/** @brief Getter of the timestamp property */
long long EncodedAudioChunkInit_timestamp(const EncodedAudioChunkInit *self);

/** @brief Setter of the timestamp property */
void EncodedAudioChunkInit_set_timestamp(EncodedAudioChunkInit* self, long long value);

/** @brief Getter of the duration property */
long long EncodedAudioChunkInit_duration(const EncodedAudioChunkInit *self);

/** @brief Setter of the duration property */
void EncodedAudioChunkInit_set_duration(EncodedAudioChunkInit* self, long long value);

/** @brief Getter of the data property */
jb_Any EncodedAudioChunkInit_data(const EncodedAudioChunkInit *self);

/** @brief Setter of the data property */
void EncodedAudioChunkInit_set_data(EncodedAudioChunkInit* self, jb_Any * value);

/** @brief Getter of the transfer property */
jb_Array EncodedAudioChunkInit_transfer(const EncodedAudioChunkInit *self);

/** @brief Setter of the transfer property */
void EncodedAudioChunkInit_set_transfer(EncodedAudioChunkInit* self, jb_Array * value);

/** @brief Constructor of the EncodedAudioChunkInit dictionary type */
EncodedAudioChunkInit EncodedAudioChunkInit_new();

#ifdef __cplusplus
}
#endif
