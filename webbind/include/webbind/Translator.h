#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TranslatorCreateOptions TranslatorCreateOptions;
typedef struct TranslatorCreateCoreOptions TranslatorCreateCoreOptions;
typedef struct TranslatorTranslateOptions TranslatorTranslateOptions;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface Translator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Translator)
 */
DECLARE_EMLITE_TYPE(Translator, em_Val);

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Translator_create(Translator* self , TranslatorCreateOptions * options);

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Translator_availability(Translator* self , TranslatorCreateCoreOptions * options);

/**
 * @brief Calls the `translate` method. 
*/
jb_Promise Translator_translate0(Translator* self , jb_String * input);

/**
 * @brief Calls the `translate` method. 
*/
jb_Promise Translator_translate1(Translator* self , jb_String * input, TranslatorTranslateOptions * options);

/**
 * @brief Calls the `translateStreaming` method. 
*/
ReadableStream Translator_translateStreaming0(Translator* self , jb_String * input);

/**
 * @brief Calls the `translateStreaming` method. 
*/
ReadableStream Translator_translateStreaming1(Translator* self , jb_String * input, TranslatorTranslateOptions * options);

/**
 * @brief Gets the `sourceLanguage` property. 
*/
jb_String Translator_sourceLanguage(const Translator *self);

/**
 * @brief Gets the `targetLanguage` property. 
*/
jb_String Translator_targetLanguage(const Translator *self);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Translator_measureInputUsage0(Translator* self , jb_String * input);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Translator_measureInputUsage1(Translator* self , jb_String * input, TranslatorTranslateOptions * options);

/**
 * @brief Gets the `inputQuota` property. 
*/
double Translator_inputQuota(const Translator *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined Translator_destroy(Translator* self );

#ifdef __cplusplus
}
#endif
