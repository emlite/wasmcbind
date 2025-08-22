#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "FileSystemEntry.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FileSystemFileEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileEntry)
 */
DECLARE_EMLITE_TYPE(FileSystemFileEntry, FileSystemEntry);

/**
 * @brief Calls the `file` method. 
*/
jb_Undefined FileSystemFileEntry_file0(FileSystemFileEntry* self , jb_Function * successCallback);

/**
 * @brief Calls the `file` method. 
*/
jb_Undefined FileSystemFileEntry_file1(FileSystemFileEntry* self , jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
