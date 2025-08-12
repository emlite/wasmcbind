#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct File File;
typedef struct FileSystemEntry FileSystemEntry;
typedef struct FileSystemHandle FileSystemHandle;


/**
 * @brief Interface DataTransferItem
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItem)
 */
DECLARE_EMLITE_TYPE(DataTransferItem, em_Val);

/**
 * @brief Gets the `kind` property. 
*/
jb_String DataTransferItem_kind(const DataTransferItem *self);

/**
 * @brief Gets the `type` property. 
*/
jb_String DataTransferItem_type(const DataTransferItem *self);

/**
 * @brief Calls the `getAsString` method. 
*/
jb_Undefined DataTransferItem_getAsString(DataTransferItem* self , jb_Function * callback);

/**
 * @brief Calls the `getAsFile` method. 
*/
File DataTransferItem_getAsFile(DataTransferItem* self );

/**
 * @brief Calls the `webkitGetAsEntry` method. 
*/
FileSystemEntry DataTransferItem_webkitGetAsEntry(DataTransferItem* self );

/**
 * @brief Calls the `getAsFileSystemHandle` method. 
*/
jb_Promise DataTransferItem_getAsFileSystemHandle(DataTransferItem* self );

#ifdef __cplusplus
}
#endif
