#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemReadWriteOptions FileSystemReadWriteOptions;


/**
 * @brief Interface FileSystemSyncAccessHandle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle)
 */
DECLARE_EMLITE_TYPE(FileSystemSyncAccessHandle, em_Val);

/**
 * @brief Calls the `read` method. 
*/
long long FileSystemSyncAccessHandle_read0(FileSystemSyncAccessHandle* self , jb_Any * buffer);

/**
 * @brief Calls the `read` method. 
*/
long long FileSystemSyncAccessHandle_read1(FileSystemSyncAccessHandle* self , jb_Any * buffer, FileSystemReadWriteOptions * options);

/**
 * @brief Calls the `write` method. 
*/
long long FileSystemSyncAccessHandle_write0(FileSystemSyncAccessHandle* self , jb_Any * buffer);

/**
 * @brief Calls the `write` method. 
*/
long long FileSystemSyncAccessHandle_write1(FileSystemSyncAccessHandle* self , jb_Any * buffer, FileSystemReadWriteOptions * options);

/**
 * @brief Calls the `truncate` method. 
*/
jb_Undefined FileSystemSyncAccessHandle_truncate(FileSystemSyncAccessHandle* self , long long newSize);

/**
 * @brief Calls the `getSize` method. 
*/
long long FileSystemSyncAccessHandle_getSize(FileSystemSyncAccessHandle* self );

/**
 * @brief Calls the `flush` method. 
*/
jb_Undefined FileSystemSyncAccessHandle_flush(FileSystemSyncAccessHandle* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined FileSystemSyncAccessHandle_close(FileSystemSyncAccessHandle* self );

#ifdef __cplusplus
}
#endif
