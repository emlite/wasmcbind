#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "FileSystemEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemDirectoryReader FileSystemDirectoryReader;
typedef struct FileSystemFlags FileSystemFlags;


/**
 * @brief Interface FileSystemDirectoryEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry)
 */
DECLARE_EMLITE_TYPE(FileSystemDirectoryEntry, FileSystemEntry);

/**
 * @brief Calls the `createReader` method. 
*/
FileSystemDirectoryReader FileSystemDirectoryEntry_createReader(FileSystemDirectoryEntry* self );

/**
 * @brief Calls the `getFile` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getFile0(FileSystemDirectoryEntry* self );

/**
 * @brief Calls the `getFile` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getFile1(FileSystemDirectoryEntry* self , jb_String * path);

/**
 * @brief Calls the `getFile` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getFile2(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options);

/**
 * @brief Calls the `getFile` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getFile3(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback);

/**
 * @brief Calls the `getFile` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getFile4(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback, jb_Function * errorCallback);

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getDirectory0(FileSystemDirectoryEntry* self );

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getDirectory1(FileSystemDirectoryEntry* self , jb_String * path);

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getDirectory2(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options);

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getDirectory3(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback);

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Undefined FileSystemDirectoryEntry_getDirectory4(FileSystemDirectoryEntry* self , jb_String * path, FileSystemFlags * options, jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
