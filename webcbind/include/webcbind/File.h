#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Blob.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FilePropertyBag FilePropertyBag;


/**
 * @brief Interface File
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/File)
 */
DECLARE_EMLITE_TYPE(File, Blob);

/**
 * @brief Creates a new `File` object. 
*/
File File_new0(jb_Array * fileBits, jb_String * fileName);

/**
 * @brief Creates a new `File` object. 
*/
File File_new1(jb_Array * fileBits, jb_String * fileName, FilePropertyBag * options);

/**
 * @brief Gets the `name` property. 
*/
jb_String File_name(const File *self);

/**
 * @brief Gets the `lastModified` property. 
*/
long long File_lastModified(const File *self);

/**
 * @brief Gets the `webkitRelativePath` property. 
*/
jb_String File_webkitRelativePath(const File *self);

#ifdef __cplusplus
}
#endif
