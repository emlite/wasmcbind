#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WriterCreateOptions WriterCreateOptions;
typedef struct WriterCreateCoreOptions WriterCreateCoreOptions;
typedef struct WriterWriteOptions WriterWriteOptions;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface Writer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Writer)
 */
DECLARE_EMLITE_TYPE(Writer, em_Val);

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Writer_create0(Writer* self );

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Writer_create1(Writer* self , WriterCreateOptions * options);

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Writer_availability0(Writer* self );

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Writer_availability1(Writer* self , WriterCreateCoreOptions * options);

/**
 * @brief Calls the `write` method. 
*/
jb_Promise Writer_write0(Writer* self , jb_String * input);

/**
 * @brief Calls the `write` method. 
*/
jb_Promise Writer_write1(Writer* self , jb_String * input, WriterWriteOptions * options);

/**
 * @brief Calls the `writeStreaming` method. 
*/
ReadableStream Writer_writeStreaming0(Writer* self , jb_String * input);

/**
 * @brief Calls the `writeStreaming` method. 
*/
ReadableStream Writer_writeStreaming1(Writer* self , jb_String * input, WriterWriteOptions * options);

/**
 * @brief Gets the `sharedContext` property. 
*/
jb_String Writer_sharedContext(const Writer *self);

/**
 * @brief Gets the `tone` property. 
*/
WriterTone Writer_tone(const Writer *self);

/**
 * @brief Gets the `format` property. 
*/
WriterFormat Writer_format(const Writer *self);

/**
 * @brief Gets the `length` property. 
*/
WriterLength Writer_length(const Writer *self);

/**
 * @brief Gets the `expectedInputLanguages` property. 
*/
jb_Array Writer_expectedInputLanguages(const Writer *self);

/**
 * @brief Gets the `expectedContextLanguages` property. 
*/
jb_Array Writer_expectedContextLanguages(const Writer *self);

/**
 * @brief Gets the `outputLanguage` property. 
*/
jb_String Writer_outputLanguage(const Writer *self);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Writer_measureInputUsage0(Writer* self , jb_String * input);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Writer_measureInputUsage1(Writer* self , jb_String * input, WriterWriteOptions * options);

/**
 * @brief Gets the `inputQuota` property. 
*/
double Writer_inputQuota(const Writer *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined Writer_destroy(Writer* self );

#ifdef __cplusplus
}
#endif
