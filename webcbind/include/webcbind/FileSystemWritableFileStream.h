#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WritableStream.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FileSystemWritableFileStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemWritableFileStream)
 */
DECLARE_EMLITE_TYPE(FileSystemWritableFileStream, WritableStream);

/**
 * @brief Calls the `write` method. 
*/
jb_Promise FileSystemWritableFileStream_write(FileSystemWritableFileStream* self , jb_Any * data);

/**
 * @brief Calls the `seek` method. 
*/
jb_Promise FileSystemWritableFileStream_seek(FileSystemWritableFileStream* self , long long position);

/**
 * @brief Calls the `truncate` method. 
*/
jb_Promise FileSystemWritableFileStream_truncate(FileSystemWritableFileStream* self , long long size);

#ifdef __cplusplus
}
#endif
