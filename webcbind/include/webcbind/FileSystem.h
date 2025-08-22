#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemDirectoryEntry FileSystemDirectoryEntry;


/**
 * @brief Interface FileSystem
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystem)
 */
DECLARE_EMLITE_TYPE(FileSystem, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String FileSystem_name(const FileSystem *self);

/**
 * @brief Gets the `root` property. 
*/
FileSystemDirectoryEntry FileSystem_root(const FileSystem *self);

#ifdef __cplusplus
}
#endif
