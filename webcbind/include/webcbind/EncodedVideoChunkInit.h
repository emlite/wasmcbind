#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EncodedVideoChunkInit */
DECLARE_EMLITE_TYPE(EncodedVideoChunkInit, em_Val);

/** @brief Getter of the type property */
EncodedVideoChunkType EncodedVideoChunkInit_type(const EncodedVideoChunkInit *self);

/** @brief Setter of the type property */
void EncodedVideoChunkInit_set_type(EncodedVideoChunkInit* self, EncodedVideoChunkType * value);

/** @brief Getter of the timestamp property */
long long EncodedVideoChunkInit_timestamp(const EncodedVideoChunkInit *self);

/** @brief Setter of the timestamp property */
void EncodedVideoChunkInit_set_timestamp(EncodedVideoChunkInit* self, long long value);

/** @brief Getter of the duration property */
long long EncodedVideoChunkInit_duration(const EncodedVideoChunkInit *self);

/** @brief Setter of the duration property */
void EncodedVideoChunkInit_set_duration(EncodedVideoChunkInit* self, long long value);

/** @brief Getter of the data property */
jb_Any EncodedVideoChunkInit_data(const EncodedVideoChunkInit *self);

/** @brief Setter of the data property */
void EncodedVideoChunkInit_set_data(EncodedVideoChunkInit* self, jb_Any * value);

/** @brief Getter of the transfer property */
jb_Array EncodedVideoChunkInit_transfer(const EncodedVideoChunkInit *self);

/** @brief Setter of the transfer property */
void EncodedVideoChunkInit_set_transfer(EncodedVideoChunkInit* self, jb_Array * value);

/** @brief Constructor of the EncodedVideoChunkInit dictionary type */
EncodedVideoChunkInit EncodedVideoChunkInit_new();

#ifdef __cplusplus
}
#endif
