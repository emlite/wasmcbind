#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FileSystemHandle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct File File;
typedef struct FileSystemWritableFileStream FileSystemWritableFileStream;
typedef struct FileSystemCreateWritableOptions FileSystemCreateWritableOptions;
typedef struct FileSystemSyncAccessHandle FileSystemSyncAccessHandle;


/**
 * @brief Interface FileSystemFileHandle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle)
 */
DECLARE_EMLITE_TYPE(FileSystemFileHandle, FileSystemHandle);

/**
 * @brief Calls the `getFile` method. 
*/
jb_Promise FileSystemFileHandle_getFile(FileSystemFileHandle* self );

/**
 * @brief Calls the `createWritable` method. 
*/
jb_Promise FileSystemFileHandle_createWritable0(FileSystemFileHandle* self );

/**
 * @brief Calls the `createWritable` method. 
*/
jb_Promise FileSystemFileHandle_createWritable1(FileSystemFileHandle* self , FileSystemCreateWritableOptions * options);

/**
 * @brief Calls the `createSyncAccessHandle` method. 
*/
jb_Promise FileSystemFileHandle_createSyncAccessHandle(FileSystemFileHandle* self );

#ifdef __cplusplus
}
#endif
