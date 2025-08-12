#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Blob Blob;
typedef struct DOMException DOMException;


/**
 * @brief Interface FileReader
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileReader)
 */
DECLARE_EMLITE_TYPE(FileReader, EventTarget);

/**
 * @brief Creates a new `FileReader` object. 
*/
FileReader FileReader_new();

/**
 * @brief Calls the `readAsArrayBuffer` method. 
*/
jb_Undefined FileReader_readAsArrayBuffer(FileReader* self , Blob * blob);

/**
 * @brief Calls the `readAsBinaryString` method. 
*/
jb_Undefined FileReader_readAsBinaryString(FileReader* self , Blob * blob);

/**
 * @brief Calls the `readAsText` method. 
*/
jb_Undefined FileReader_readAsText0(FileReader* self , Blob * blob);

/**
 * @brief Calls the `readAsText` method. 
*/
jb_Undefined FileReader_readAsText1(FileReader* self , Blob * blob, jb_String * encoding);

/**
 * @brief Calls the `readAsDataURL` method. 
*/
jb_Undefined FileReader_readAsDataURL(FileReader* self , Blob * blob);

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined FileReader_abort(FileReader* self );

/**
 * @brief Gets the `readyState` property. 
*/
unsigned short FileReader_readyState(const FileReader *self);

/**
 * @brief Gets the `result` property. 
*/
jb_Any FileReader_result(const FileReader *self);

/**
 * @brief Gets the `error` property. 
*/
DOMException FileReader_error(const FileReader *self);

/**
 * @brief Gets the `onloadstart` property. 
*/
jb_Any FileReader_onloadstart(const FileReader *self);

/**
 * @brief Sets the `onloadstart` property. 
*/
void FileReader_set_onloadstart(FileReader* self, jb_Any * value);

/**
 * @brief Gets the `onprogress` property. 
*/
jb_Any FileReader_onprogress(const FileReader *self);

/**
 * @brief Sets the `onprogress` property. 
*/
void FileReader_set_onprogress(FileReader* self, jb_Any * value);

/**
 * @brief Gets the `onload` property. 
*/
jb_Any FileReader_onload(const FileReader *self);

/**
 * @brief Sets the `onload` property. 
*/
void FileReader_set_onload(FileReader* self, jb_Any * value);

/**
 * @brief Gets the `onabort` property. 
*/
jb_Any FileReader_onabort(const FileReader *self);

/**
 * @brief Sets the `onabort` property. 
*/
void FileReader_set_onabort(FileReader* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any FileReader_onerror(const FileReader *self);

/**
 * @brief Sets the `onerror` property. 
*/
void FileReader_set_onerror(FileReader* self, jb_Any * value);

/**
 * @brief Gets the `onloadend` property. 
*/
jb_Any FileReader_onloadend(const FileReader *self);

/**
 * @brief Sets the `onloadend` property. 
*/
void FileReader_set_onloadend(FileReader* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
