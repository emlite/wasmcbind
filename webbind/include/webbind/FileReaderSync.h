#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Blob Blob;


/**
 * @brief Interface FileReaderSync
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileReaderSync)
 */
DECLARE_EMLITE_TYPE(FileReaderSync, em_Val);

/**
 * @brief Creates a new `FileReaderSync` object. 
*/
FileReaderSync FileReaderSync_new();

/**
 * @brief Calls the `readAsArrayBuffer` method. 
*/
jb_ArrayBuffer FileReaderSync_readAsArrayBuffer(FileReaderSync* self , Blob * blob);

/**
 * @brief Calls the `readAsBinaryString` method. 
*/
jb_String FileReaderSync_readAsBinaryString(FileReaderSync* self , Blob * blob);

/**
 * @brief Calls the `readAsText` method. 
*/
jb_String FileReaderSync_readAsText0(FileReaderSync* self , Blob * blob);

/**
 * @brief Calls the `readAsText` method. 
*/
jb_String FileReaderSync_readAsText1(FileReaderSync* self , Blob * blob, jb_String * encoding);

/**
 * @brief Calls the `readAsDataURL` method. 
*/
jb_String FileReaderSync_readAsDataURL(FileReaderSync* self , Blob * blob);

#ifdef __cplusplus
}
#endif
