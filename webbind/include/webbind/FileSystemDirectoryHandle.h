#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FileSystemHandle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemFileHandle FileSystemFileHandle;
typedef struct FileSystemGetFileOptions FileSystemGetFileOptions;
typedef struct FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions;
typedef struct FileSystemRemoveOptions FileSystemRemoveOptions;


/**
 * @brief Interface FileSystemDirectoryHandle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle)
 */
DECLARE_EMLITE_TYPE(FileSystemDirectoryHandle, FileSystemHandle);

/**
 * @brief Calls the `getFileHandle` method. 
*/
jb_Promise FileSystemDirectoryHandle_getFileHandle0(FileSystemDirectoryHandle* self , jb_String * name);

/**
 * @brief Calls the `getFileHandle` method. 
*/
jb_Promise FileSystemDirectoryHandle_getFileHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetFileOptions * options);

/**
 * @brief Calls the `getDirectoryHandle` method. 
*/
jb_Promise FileSystemDirectoryHandle_getDirectoryHandle0(FileSystemDirectoryHandle* self , jb_String * name);

/**
 * @brief Calls the `getDirectoryHandle` method. 
*/
jb_Promise FileSystemDirectoryHandle_getDirectoryHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetDirectoryOptions * options);

/**
 * @brief Calls the `removeEntry` method. 
*/
jb_Promise FileSystemDirectoryHandle_removeEntry0(FileSystemDirectoryHandle* self , jb_String * name);

/**
 * @brief Calls the `removeEntry` method. 
*/
jb_Promise FileSystemDirectoryHandle_removeEntry1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemRemoveOptions * options);

/**
 * @brief Calls the `resolve` method. 
*/
jb_Promise FileSystemDirectoryHandle_resolve(FileSystemDirectoryHandle* self , FileSystemHandle * possibleDescendant);

#ifdef __cplusplus
}
#endif
