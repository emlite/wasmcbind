#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BlobPropertyBag BlobPropertyBag;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface Blob
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Blob)
 */
DECLARE_EMLITE_TYPE(Blob, em_Val);

/**
 * @brief Creates a new `Blob` object. 
*/
Blob Blob_new0();

/**
 * @brief Creates a new `Blob` object. 
*/
Blob Blob_new1(jb_Array * blobParts);

/**
 * @brief Creates a new `Blob` object. 
*/
Blob Blob_new2(jb_Array * blobParts, BlobPropertyBag * options);

/**
 * @brief Gets the `size` property. 
*/
long long Blob_size(const Blob *self);

/**
 * @brief Gets the `type` property. 
*/
jb_String Blob_type(const Blob *self);

/**
 * @brief Calls the `slice` method. 
*/
Blob Blob_slice0(Blob* self );

/**
 * @brief Calls the `slice` method. 
*/
Blob Blob_slice1(Blob* self , long long start);

/**
 * @brief Calls the `slice` method. 
*/
Blob Blob_slice2(Blob* self , long long start, long long end);

/**
 * @brief Calls the `slice` method. 
*/
Blob Blob_slice3(Blob* self , long long start, long long end, jb_String * contentType);

/**
 * @brief Calls the `stream` method. 
*/
ReadableStream Blob_stream(Blob* self );

/**
 * @brief Calls the `text` method. 
*/
jb_Promise Blob_text(Blob* self );

/**
 * @brief Calls the `arrayBuffer` method. 
*/
jb_Promise Blob_arrayBuffer(Blob* self );

/**
 * @brief Calls the `bytes` method. 
*/
jb_Promise Blob_bytes(Blob* self );

#ifdef __cplusplus
}
#endif
