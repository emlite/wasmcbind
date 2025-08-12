#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SummarizerCreateOptions SummarizerCreateOptions;
typedef struct SummarizerCreateCoreOptions SummarizerCreateCoreOptions;
typedef struct SummarizerSummarizeOptions SummarizerSummarizeOptions;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface Summarizer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer)
 */
DECLARE_EMLITE_TYPE(Summarizer, em_Val);

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Summarizer_create0(Summarizer* self );

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Summarizer_create1(Summarizer* self , SummarizerCreateOptions * options);

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Summarizer_availability0(Summarizer* self );

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Summarizer_availability1(Summarizer* self , SummarizerCreateCoreOptions * options);

/**
 * @brief Calls the `summarize` method. 
*/
jb_Promise Summarizer_summarize0(Summarizer* self , jb_String * input);

/**
 * @brief Calls the `summarize` method. 
*/
jb_Promise Summarizer_summarize1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

/**
 * @brief Calls the `summarizeStreaming` method. 
*/
ReadableStream Summarizer_summarizeStreaming0(Summarizer* self , jb_String * input);

/**
 * @brief Calls the `summarizeStreaming` method. 
*/
ReadableStream Summarizer_summarizeStreaming1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

/**
 * @brief Gets the `sharedContext` property. 
*/
jb_String Summarizer_sharedContext(const Summarizer *self);

/**
 * @brief Gets the `type` property. 
*/
SummarizerType Summarizer_type(const Summarizer *self);

/**
 * @brief Gets the `format` property. 
*/
SummarizerFormat Summarizer_format(const Summarizer *self);

/**
 * @brief Gets the `length` property. 
*/
SummarizerLength Summarizer_length(const Summarizer *self);

/**
 * @brief Gets the `expectedInputLanguages` property. 
*/
jb_Array Summarizer_expectedInputLanguages(const Summarizer *self);

/**
 * @brief Gets the `expectedContextLanguages` property. 
*/
jb_Array Summarizer_expectedContextLanguages(const Summarizer *self);

/**
 * @brief Gets the `outputLanguage` property. 
*/
jb_String Summarizer_outputLanguage(const Summarizer *self);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Summarizer_measureInputUsage0(Summarizer* self , jb_String * input);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Summarizer_measureInputUsage1(Summarizer* self , jb_String * input, SummarizerSummarizeOptions * options);

/**
 * @brief Gets the `inputQuota` property. 
*/
double Summarizer_inputQuota(const Summarizer *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined Summarizer_destroy(Summarizer* self );

#ifdef __cplusplus
}
#endif
