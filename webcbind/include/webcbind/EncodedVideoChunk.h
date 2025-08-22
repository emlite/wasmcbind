#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EncodedVideoChunkInit EncodedVideoChunkInit;


/**
 * @brief Interface EncodedVideoChunk
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk)
 */
DECLARE_EMLITE_TYPE(EncodedVideoChunk, em_Val);

/**
 * @brief Creates a new `EncodedVideoChunk` object. 
*/
EncodedVideoChunk EncodedVideoChunk_new(EncodedVideoChunkInit * init);

/**
 * @brief Gets the `type` property. 
*/
EncodedVideoChunkType EncodedVideoChunk_type(const EncodedVideoChunk *self);

/**
 * @brief Gets the `timestamp` property. 
*/
long long EncodedVideoChunk_timestamp(const EncodedVideoChunk *self);

/**
 * @brief Gets the `duration` property. 
*/
long long EncodedVideoChunk_duration(const EncodedVideoChunk *self);

/**
 * @brief Gets the `byteLength` property. 
*/
unsigned long EncodedVideoChunk_byteLength(const EncodedVideoChunk *self);

/**
 * @brief Calls the `copyTo` method. 
*/
jb_Undefined EncodedVideoChunk_copyTo(EncodedVideoChunk* self , jb_Any * destination);

#ifdef __cplusplus
}
#endif
