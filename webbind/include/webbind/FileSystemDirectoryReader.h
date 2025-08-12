#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FileSystemDirectoryReader
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryReader)
 */
DECLARE_EMLITE_TYPE(FileSystemDirectoryReader, em_Val);

/**
 * @brief Calls the `readEntries` method. 
*/
jb_Undefined FileSystemDirectoryReader_readEntries0(FileSystemDirectoryReader* self , jb_Function * successCallback);

/**
 * @brief Calls the `readEntries` method. 
*/
jb_Undefined FileSystemDirectoryReader_readEntries1(FileSystemDirectoryReader* self , jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
