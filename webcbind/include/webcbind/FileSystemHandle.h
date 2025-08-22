#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor;


/**
 * @brief Interface FileSystemHandle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle)
 */
DECLARE_EMLITE_TYPE(FileSystemHandle, em_Val);

/**
 * @brief Gets the `kind` property. 
*/
FileSystemHandleKind FileSystemHandle_kind(const FileSystemHandle *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String FileSystemHandle_name(const FileSystemHandle *self);

/**
 * @brief Calls the `isSameEntry` method. 
*/
jb_Promise FileSystemHandle_isSameEntry(FileSystemHandle* self , FileSystemHandle * other);

/**
 * @brief Calls the `queryPermission` method. 
*/
jb_Promise FileSystemHandle_queryPermission0(FileSystemHandle* self );

/**
 * @brief Calls the `queryPermission` method. 
*/
jb_Promise FileSystemHandle_queryPermission1(FileSystemHandle* self , FileSystemHandlePermissionDescriptor * descriptor);

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise FileSystemHandle_requestPermission0(FileSystemHandle* self );

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise FileSystemHandle_requestPermission1(FileSystemHandle* self , FileSystemHandlePermissionDescriptor * descriptor);

#ifdef __cplusplus
}
#endif
