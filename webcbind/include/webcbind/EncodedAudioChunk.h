#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EncodedAudioChunkInit EncodedAudioChunkInit;


/**
 * @brief Interface EncodedAudioChunk
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk)
 */
DECLARE_EMLITE_TYPE(EncodedAudioChunk, em_Val);

/**
 * @brief Creates a new `EncodedAudioChunk` object. 
*/
EncodedAudioChunk EncodedAudioChunk_new(EncodedAudioChunkInit * init);

/**
 * @brief Gets the `type` property. 
*/
EncodedAudioChunkType EncodedAudioChunk_type(const EncodedAudioChunk *self);

/**
 * @brief Gets the `timestamp` property. 
*/
long long EncodedAudioChunk_timestamp(const EncodedAudioChunk *self);

/**
 * @brief Gets the `duration` property. 
*/
long long EncodedAudioChunk_duration(const EncodedAudioChunk *self);

/**
 * @brief Gets the `byteLength` property. 
*/
unsigned long EncodedAudioChunk_byteLength(const EncodedAudioChunk *self);

/**
 * @brief Calls the `copyTo` method. 
*/
jb_Undefined EncodedAudioChunk_copyTo(EncodedAudioChunk* self , jb_Any * destination);

#ifdef __cplusplus
}
#endif
