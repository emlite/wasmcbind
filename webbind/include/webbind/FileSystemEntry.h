#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystem FileSystem;


/**
 * @brief Interface FileSystemEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry)
 */
DECLARE_EMLITE_TYPE(FileSystemEntry, em_Val);

/**
 * @brief Gets the `isFile` property. 
*/
bool FileSystemEntry_isFile(const FileSystemEntry *self);

/**
 * @brief Gets the `isDirectory` property. 
*/
bool FileSystemEntry_isDirectory(const FileSystemEntry *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String FileSystemEntry_name(const FileSystemEntry *self);

/**
 * @brief Gets the `fullPath` property. 
*/
jb_String FileSystemEntry_fullPath(const FileSystemEntry *self);

/**
 * @brief Gets the `filesystem` property. 
*/
FileSystem FileSystemEntry_filesystem(const FileSystemEntry *self);

/**
 * @brief Calls the `getParent` method. 
*/
jb_Undefined FileSystemEntry_getParent0(FileSystemEntry* self );

/**
 * @brief Calls the `getParent` method. 
*/
jb_Undefined FileSystemEntry_getParent1(FileSystemEntry* self , jb_Function * successCallback);

/**
 * @brief Calls the `getParent` method. 
*/
jb_Undefined FileSystemEntry_getParent2(FileSystemEntry* self , jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
